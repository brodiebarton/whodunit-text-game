#include "Weapon.h"

std::string  Weapon::WeaponDialogue() {
    // Returns dialogue string based on isMurderWeapon value
    // Matched dialogue with boolean value
    // So function could return correct dialogue
    // Based on the isMurderWeapon value of 0 or 1
    return examineDialogue[isMurderWeapon];
}
