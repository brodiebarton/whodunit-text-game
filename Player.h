#ifndef WHODUNIT_PROJECT_PLAYER_H
#define WHODUNIT_PROJECT_PLAYER_H


#include "GameObject.h"
#include "Murder.h"

class Player: GameObject {
public:
    int numInterrogations;
    int numRoomExams;
    int points;
    Murder playerGuess;
    bool didPlayerWin;

    // Default constructor
    // Used to initialize values
    // Sets up players starting stats when creating
    Player() {
        numInterrogations = 3;
        numRoomExams = 4;
        points = 0;
        didPlayerWin = false;
    }
};


#endif //WHODUNIT_PROJECT_PLAYER_H
