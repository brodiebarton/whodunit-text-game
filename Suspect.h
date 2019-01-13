#ifndef WHODUNIT_PROJECT_SUSPECT_H
#define WHODUNIT_PROJECT_SUSPECT_H


#include "GameObject.h"

class Suspect : public GameObject {
public:
    bool isKiller;
    std::string interrogateDialogue[2];

    // Default constructor
    // Used to initialize values
    Suspect() {
        name = "";
        description = "";
        isKiller = false;
        interrogateDialogue[0] = "";
        interrogateDialogue[1] = "";
    }

    // Overloaded constructor
    // Used for passing name and description when creating
    Suspect(const std::string &n, const std::string &d) {
        name = n;
        description = d;
        isKiller = false;
    }

    // Overloaded constructor
    // Used for passing name, description, and dialogue when creating
    Suspect(const std::string &suspectName, const std::string &suspDescript, const std::string &notKillerDialogue, const std::string &killerDialogue) {
        name = suspectName;
        description = suspDescript;
        interrogateDialogue[0] = notKillerDialogue;
        interrogateDialogue[1] = killerDialogue;
        isKiller = false;
    }

    // Function for outputting Suspect dialogue
    // Returns a string
    std::string Dialogue();
};


#endif //WHODUNIT_PROJECT_SUSPECT_H
