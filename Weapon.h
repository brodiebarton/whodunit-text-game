#ifndef WHODUNIT_PROJECT_WEAPON_H
#define WHODUNIT_PROJECT_WEAPON_H


#include "GameObject.h"

class Weapon : public GameObject {
public:
    bool isMurderWeapon;
    std::string examineDialogue[2];

    // Default constructor
    // Used to initialize values
    Weapon() {
        name = "";
        isMurderWeapon = false;
    }

    // Overloaded constructor
    // Used to pass name when creating
    Weapon(const std::string &n) {
        name = n;
        isMurderWeapon = false;
    }

    // Overloaded constructor
    // Used for passing name and both dialogues when creating
    Weapon(const std::string &n, const std::string &notWeaponDialogue, const std::string &isWeaponDialogue) {
        name = n;
        isMurderWeapon = false;
        examineDialogue[0] = notWeaponDialogue;
        examineDialogue[1] = isWeaponDialogue;
    }

    // Function to return dialogue about weapon
    // Returns a string
    std::string WeaponDialogue();
};


#endif //WHODUNIT_PROJECT_WEAPON_H
