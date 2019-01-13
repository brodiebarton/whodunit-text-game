#ifndef WHODUNIT_PROJECT_MURDER_H
#define WHODUNIT_PROJECT_MURDER_H


#include "GameObject.h"
#include "Suspect.h"
#include "Weapon.h"
#include "Location.h"

class Murder : public GameObject {
public:
    Suspect killer;
    Weapon murderWeapon;
    Location murderLocation;

    // Default constructor
    // Used to initialize values
    Murder() {
        killer = Suspect("","");
        murderWeapon = Weapon("");
        murderLocation = Location("");
    }

    // Overloaded constructor
    // Used for passing Suspect, Weapon, and Location objects when creating
    Murder(const Suspect &s, const Weapon &w, const Location &l) {
        killer = s;
        murderWeapon  = w;
        murderLocation = l;
    }
};


#endif //WHODUNIT_PROJECT_MURDER_H
