#ifndef WHODUNIT_PROJECT_LOCATION_H
#define WHODUNIT_PROJECT_LOCATION_H


#include <vector>
#include "GameObject.h"
#include "Weapon.h"

class Location : public GameObject {
public:
    bool isMurderLocation;
    Weapon foundWeapon;
    std::vector<std::string> suspiciousDialogue;
    std::vector<std::string> notSuspiciousDialogue;


    // Default constructor
    // Ensures isMurderLocation is false when object is created
    // Reserves space in vectors since capacity is known
    Location() {
        isMurderLocation = false;
        suspiciousDialogue.reserve(4);
        notSuspiciousDialogue.reserve(4);
    }

    // Overloaded constructor
    // Used for passing a name when creating
    Location(const std::string &n) {
        name = n;
        isMurderLocation = false;
        suspiciousDialogue.reserve(4);
        notSuspiciousDialogue.reserve(4);
    }

    // Overloaded constructor
    // Used for passing a name and foundWeapon object when creating
    Location(const std::string &n, const Weapon &w) {
        name = n;
        isMurderLocation = false;
        foundWeapon = w;
        suspiciousDialogue.reserve(4);
        notSuspiciousDialogue.reserve(4);
    }
};


#endif //WHODUNIT_PROJECT_LOCATION_H
