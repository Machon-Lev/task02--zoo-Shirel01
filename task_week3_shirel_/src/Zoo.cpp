
#include "Lion.h"
#include "Shark.h"
#include "Dog.h"
#include "Location.h"
#include  "Animal.h"

#include "Zoo.h"

void Zoo::stop(int numberofanimal)
{
    if (numberofanimal >= 0 && numberofanimal < animalsInZoo.size()) {
        animalsInZoo[numberofanimal]->stop();
    }
}



void Zoo::create(string type, string name) {
    // Create a new animal object
    
    int row, col;
    row = rand() % 20;
    col = rand() % 40;
    Location loc = Location(row, col);

    if (type == "Lion") {
        animalsInZoo.emplace_back(std::make_unique<Lion>(name, loc));
        //Animal* newAnimal = new Lion(name, loc);
        // ADD ANIMAL TO VECTOR AND TO MAP
       // animals.insert(newAnimal['L'])
        //allAnimals.push_back(new Monkey(name, randLoc()));
    }
    
    else if (type == "Shark") {
        animalsInZoo.emplace_back(std::make_unique<Shark>(name, loc));
    }
    else if (type == "Dog") {
        animalsInZoo.emplace_back(std::make_unique<Dog>(name, loc));
    }
    else {
        // Invalid animal type
        std::cout << "Invalid animal type" << std::endl;
        return;
    }


}
void Zoo::move(int numberofanimal) {
    if (numberofanimal >= 0 && numberofanimal < animalsInZoo.size()) {
        animalsInZoo[numberofanimal]->move();
    }
    else {
        std::cout << "Invalid animal number" << std::endl;
    }
}


void Zoo::del(int numberofanimal)
{
    if (numberofanimal < 1 || numberofanimal > animalsInZoo.size()) {
        std::cout << "Invalid animal number" << std::endl;
        return;
    }

    animalsInZoo.erase(animalsInZoo.begin() + numberofanimal - 1);
    //std::cout << "Animal " << numberofanimal << " was deleted." << std::endl;
}


void Zoo::delAll(std::string type) {
    // Remove all the values equal to typeOfAnimal
    for (int i = 0; i < animalsInZoo.size(); i++) {
        if (animalsInZoo[i]->getInitial() == type[0]) {
            animalsInZoo.erase(animalsInZoo.begin() + i);
            i--; // update the index to account for the removed element
        }
    }
}
void Zoo::display() {
    char map[20][40];
    //// create empty map
    //char map[20][40];
    //for (int i = 0; i < 20; i++) {
    //    for (int j = 0; j < 40; j++) {
    //        map[i][j] = ' ';
    //    }
    //}
    // populate map with animal positions
    for (int i = 0; i < animalsInZoo.size(); i++) {
        Location loc = animalsInZoo[i]->getLocation();
        int x = loc.row;
        int y = loc.column;
        char initial = animalsInZoo[i]->getInitial();
        map[x][y] = initial;   // map[y][x]??
    }
    // print map
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 40; j++) {
            std::cout << map[i][j];
        }
        std::cout << std::endl;
    }

}
void Zoo::help() const
{
    cout << "to do"; // to do
}

void Zoo::run()
{
    animalsInZoo.emplace_back(new Shark("Jaws", randLocation()));
    animalsInZoo.emplace_back(new Lion("Simba", randLocation()));
    animalsInZoo.emplace_back(new Lion("Mufasa", randLocation()));
    animalsInZoo.emplace_back(new Dog("toto", randLocation()));

    bool running = true;

    while (running) {
       
        
        display();
        std::string input;
        std::cout << "Enter a command (stop ,move, create, del, delAll, help, exit, . ): ";
        std::cin >> input;
        if (input == "stop") {
            int num;
            std::cout << "Enter the number of the animal to stop: ";
            std::cin >> num;
            stop(num);
        }

        else if (input == "move") {
            int num;
            std::cout << "Enter the number of the animal to stop: ";
            std::cin >> num;
            move(num);

        }
        else if (input == "create") {
            string type, name;
            std::cout << "Enter the type of the animal to create: ";
            std::cin >> type;
            std::cout << "Enter the name of the animal to create: ";
            std::cin >> name;
            create(type, name);
        }
        else if (input == "del") {
            int num;
            std::cout << "Enter the number of the animal to delete: ";
            std::cin >> num;
            del(num);
        }
        else if (input == "delAll") {
            string type;
            std::cout << "Enter the type of the animals to delete: ";
            std::cin >> type;
            delAll(type);
        }
        else if (input == "help") { help(); }
        else if (input == "exit") {
            running = false;
        }
        else if (input == ".") {}
        else {
            std::cout << "Invalid command" << std::endl;
        }
        display();
    }
}


Location randLocation()
{
    Location loc;
    loc.column = 1 + (rand() % 40);
    loc.row = 1 + (rand() % 20);
    return loc;
}
