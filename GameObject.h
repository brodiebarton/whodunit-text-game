#ifndef WHODUNIT_PROJECT_GAMEOBJECT_H
#define WHODUNIT_PROJECT_GAMEOBJECT_H


#include <string>

class GameObject {
public:
    std::string name;
    std::string description;

    // Default constructor
    // Used to initialize values
    GameObject(){
        name = "";
        description = "";
    }

    // Overloaded constructor
    // Used to pass name and description when creating
    // Not used currently
    GameObject(std::string &n, std::string &descript) {
        name = n;
        description = descript;
    }
};


#endif //WHODUNIT_PROJECT_GAMEOBJECT_H
