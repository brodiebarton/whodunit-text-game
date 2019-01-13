#ifndef WHODUNIT_PROJECT_GAME_H
#define WHODUNIT_PROJECT_GAME_H

#include <vector>
#include <exception>
#include "Murder.h"
#include "Player.h"

class Game {

public:
    // boolean value isPlaying
    // used to check if game is over
    bool isPlaying;

    // unsigned integer seed
    // to hold positive seed value
    unsigned int seed;

    // vector structures
    // to hold suspects, weapons, and locations
    std::vector<Suspect> suspects;
    std::vector<Weapon> weapons;
    std::vector<Location> locations;

    // Murder object
    // Each Game will have a mystery to solve
    Murder mystery;

    // Player object
    // To keep track of player data
    Player currentPlayer;

    // Game class
    // Zero Argument Constructor
    Game() {
        // Constructor initializes values
        // Sets up game

        // Reserving space in vectors
        // Since needed vector space is known
        suspects.reserve(6);
        weapons.reserve(6);
        locations.reserve(10);

        // Ensures that isPlaying is set to true
        isPlaying = true;

        // Call to Game::SetSeed()
        // Initializes seed value
        SetSeed();

        // Call to Game::Populate()
        // To initialize game data
        Populate();
    }

    // Member function declarations
    void Generate(Murder &);
    void MainGame();
    void Investigation();
    void Interrogate();
    void RoomExam();
    void Accusation();
    void Ending();
    void Close();
    void SetSeed();
    void SetSeed(unsigned int userSeed);
    void Menu();
    void SeedMenu();
    void Populate();
};


#endif //WHODUNIT_PROJECT_GAME_H
