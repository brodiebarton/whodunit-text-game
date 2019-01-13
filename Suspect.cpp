#include "Suspect.h"

std::string Suspect::Dialogue() {
    // Returns dialogue string based on isKiller value
    // Matched dialogue with boolean value
    // So function could return correct dialogue
    // Based on the isKiller value of 0 or 1
    return interrogateDialogue[isKiller];
}