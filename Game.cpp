#include "Game.h"
#include <iostream>
#include <vector>
#include <sys/time.h>
#include "Suspect.h"
#include "Weapon.h"
#include "Location.h"
#include "Murder.h"
#include "Player.h"


void Game::Populate() {

    // Game::Populate
    // Initializes all the game data

    // Inputs Suspect data
    // Using Suspect overloaded constructor
    // Pushes Suspect objects onto suspects vector

    // Suspect [0] Miss Vivienne Scarlet
    suspects.push_back(Suspect("Miss Vivienne Scarlet"
                               ,"the sultry and beautiful actress"
                                //notKiller dialogue
                                ,"::sob:: ::sob:: ::sob::"
                                 "\n\tScarlet:"
                                 "\n\t\"There’s just some things I’ve got to tell you. I know who did it, it was Jonathan, the priest."
                                 "\n\tSee the two of them were engaged in college and he’s regretted breaking it off forever."
                                 "\n\tI think seeing her so happy has really pushed him over the edge\""
                                 "\n\t:sob: :sob: :sob:"
                                 "\n::You wonder if the actress is putting on an act, but you’ve seen her plays, she’s not that talented::"
                                 //isKiller dialogue
                                 ,"\nYou: \"How did you know the deceased?\""
                                  "\n\tScarlet: \"Oh she and I have been friends for just about ever."
                                  "\n\t\tWe were at college together. My fiance and her were best friends.\""
                                  "\nYou: \"Were?\""
                                  "\n\tScarlet: \"Well, there was some bad blood between them when Jon... her fiance left her for another man,"
                                  "\n\t\tit wasn’t too long after that we were both heartbroken."
                                  "\n\t\tMy fiance left me for another woman, I guess you could say the experience really bound us together\""
                                  "\n::You leave suspicious of the relationship with \"Jon\" and how calm Ms. Scarlet seemed when her friend was just murdered::"));

    // Suspect [1] Colonel Michael Mustard
    suspects.push_back(Suspect("Colonel Michael Mustard", "the militant and athletic colonel",
                               //notKiller dialogue
                               "\nMustard: \'It may be harsh, but it really serves the woman right if you ask me."
                               "\nShe was just awful to Mrs. White. Yelling and screaming about every tiny mess up."
                               "\nThat’s not good leadership. And bad leadership only leads to one thing, death!\""
                               "\n::You don’t think a killer would be this brash::",
                               //killer dialogue
                               "\nMustard: \n\"Harumph, I suppose you’ve come to talk to me because"
                                  "\nyou can tell by the way I carry myself that I’m a man who is accustomed to violence."
                                  "\nWell, yes, I’ve done my fair share of horrible deeds, but all in the name of country, love, and duty."
                                  "\nWhich is more than I can say of that draft dodger, ‘Professor Plum’,"
                                  "\nit just makes me sick when people don’t do their duty.\""
                                  "\n::As he leaves the room, you see him smile sweetly at Mrs. White, the maid::\n"
                                  "\n::You leave wondering if there is more to Colonel Mustard and Mrs. White’s relationship than meets the eye::"
                                  "\n::What did he mean by doing horrible deeds for love?::"));

    // Suspect [2] Mrs. Blanche White
    suspects.push_back(Suspect("Mrs. Blanche White", "the intrusive and kindly maid",
                               //notKiller dialogue
                               "\nWhite: \"Oh dear oh dear, How is everyone doing? Are they ok, do they need anything? Can I get you something?\""
                               "\nYou: \"I’m fine, tell me about your relationship with the deceased.\""
                               "\nWhite: \"I’ve worked here for 15 years which should qualify me for some type of medal."
                               "\nI’ve learned how to keep that woman’s secrets and watch out for her mood swings.\""
                               "\nYou: \"Secrets?\""
                               "\nWhite: \"Oh yes, too many to count over the years, always scheming with Mrs. Peacock or giving confession to Rev. Green,"
                               "\nmost of the things she confessed to were made up though."
                               "\nPoor dear, always looking for a little extra attention."
                               "\nI guess it’s hard when you are trying to live up to the glamorous life of Ms. Scarlet."
                               "\nBut none of them would have done it so don’t go thinking that’s what I mean.\""
                               "\nYou: \"How was her mood today?\""
                               "\nWhite: \"Oh she was in a bad one,"
                               "\nrefused to even come down to the party until Michael, I mean Colonel Mustard, came up and coaxed her out"
                               "\n::You think Mrs. White seems honest and straightforward,"
                               "\nbut you are beginning to sense that the deceased had a lot of enemies::",
                               //killer dialogue
                               "\nWhite: \"Oh dear oh dear, How is everyone doing? Are they ok, do they need anything? Can I get you something?\""
                               "\nYou: \"I’m fine, tell me about your relationship with the deceased.\""
                               "\nWhite: \"I’ve worked here for 15 years without a single complaint. We got along pretty well."
                               "\nI learned how to keep her secrets and watch out for her mood swings.\""
                               "\nYou: \"Secrets?\""
                               "\nWhite: \"Oh yes, too many to count over the years, always scheming with Mrs. Peacock"
                               "\nor giving confession to Rev. Green, most of the things she confessed to were made up though."
                               "\nPoor dear, always looking for a little extra attention."
                               "\nI guess it’s hard when you are trying to live up to the glamorous life of Ms. Scarlet."
                               "\nYou: \"How was her mood today?\""
                               "\nWhite: \"Oh she was in a bad one,"
                               "\nrefused to even come down to the party until Michael, I mean Colonel Mustard, came up and coaxed her out"
                               "\n::You leave suspicious of Mrs. White and Colonel Mustard’s relationship."
                               "\nWould her employer approve?::"));

    // Suspect [3] Reverend Jonathan Green
    suspects.push_back(Suspect("Reverend Jonathan Green", "the conniving and religious priest",
                               //notKiller dialogue
                               "\nGreen: \"The woman was obsessed with me."
                               "\nI had to flee to the church to get away from her."
                               "\nIf you ask me, it was probably Mrs. Peacock,"
                               "\nprobably got caught up in one of her political schemes\""
                               "\n::You leave thinking Rev. Green seems like he is telling the truth::",
                               //killer dialogue
                               "\nGreen: \"I supposed you’ve heard all about my past with the deceased?"
                               "\nLetting her go was the biggest mistake of my life, I loved her."
                               "\nLittle did I know that by giving up the love of my life,"
                               "\nwould lead her to the love of hers, but I should of seen the signs,"
                               "\nhe and Viv were never right for each other.\""
                               "\nYou: \"Viv?\""
                               "\nGreen: \"Oh you didn’t know,"
                               "\nyes, the owner of this fine mansion was once engaged to the lovely Ms. Scarlet.\""
                               "\n::You think Rev. Green seems sly"
                               "\nand you aren’t sure he’s ever really loved anything in his entire life::"));

    // Suspect [4] Mrs. Elizabeth Peacock
    suspects.push_back(Suspect("Mrs. Elizabeth Peacock", "the sinister and political senator",
                               //notKiller dialogue
                               "\nPeacock: \"No comment, you can speak with my lawyer.\""
                               "\n::You can’t get a good read on Mrs. Peacock::"
                               "\n::She seems like she is always putting up a front::",
                               //killer dialogue
                               "\nPeacock: \"No comment, you can speak with my lawyer.\""
                               "\n::You can’t get a good read on Mrs. Peacock::"
                               "\n::She seems like she is always putting up a front::"));

    // Suspect [5] Professor Peter Plum
    suspects.push_back(Suspect("Professor Peter Plum", "the uptight and intelligent professor",
                               //notKiller dialogue
                               "\nPlum: \"I’ve newly moved to the area,"
                               "\nI’m not even sure why I’m here. Not really my crowd."
                               "\nNo quite dreadful. The whole mess."
                               "\n::You don’t entirely believe Professor Plum,"
                               "\nbut he doesn’t seem the type to turn to violence::",
                               //killer dialogue
                               "\nPlum: \"I can’t believe someone killed her."
                               "\nWorked out quite well for me, she was going to tell the university about my draft dodging,"
                               "\nthey would have fired me."
                               "\nOh god, I’ve said too much, now you think it was me,"
                               "\nbut of course it isn’t because then I would have never told you that."
                               "\nI’m much too smart to give away information like that if I really had killed her.\""
                               "\n::Was that a slip up or is he right, would the killer make such an obvious mistake?::"
                               "\n::But then again, Professor Plum was sweating a lot::"));

    // Inputs Weapon data
    // Using Weapon overloaded constructor
    // Pushes Weapon objects onto weapons vector
    weapons.push_back(Weapon("Candlestick","You notice a heavy candlestick.","You notice a heavy candlestick with a dent in it."));
    weapons.push_back(Weapon("Knife","You notice a knife block with some very sharp knives. They all appear clean.","You notice a knife is missing from the knife block."));
    weapons.push_back(Weapon("Lead Pipe","You notice a leaky pipe going to a water hose.","You notice a piece of lead pipe sticking out of one of the flower pots."));
    weapons.push_back(Weapon("Revolver","There are several guns hanging on the wall, among them a revolver","You notice a display rack for guns and it looks like one is missing."));
    weapons.push_back(Weapon("Rope","You notice a length of rope hanging from a coat rack.","You notice a length of rope tossed in a corner."));
    weapons.push_back(Weapon("Wrench","You notice a dusty toolbox in a corner. There are several tools inside, including a wrench.","You notice a wrench hidden behind a wine bottle."));

    // Inputs Location data
    // Using Location overloaded constructors
    // Pushes Location objects onto locations vector
    locations.push_back(Location("Ballroom"));
    locations.push_back(Location("Billiard Room",weapons[3]));
    locations.push_back(Location("Cellar",weapons[5]));
    locations.push_back(Location("Conservatory",weapons[2]));
    locations.push_back(Location("Dining Room"));
    locations.push_back(Location("Kitchen",weapons[1]));
    locations.push_back(Location("Hall",weapons[4]));
    locations.push_back(Location("Library",weapons[0]));
    locations.push_back(Location("Lounge"));
    locations.push_back(Location("Study"));

    // Populates locations dialogue
    // Used when examining locations
    for (int i = 0; i < locations.size(); i++) {
            for (int j = 0; j < 4; j++) {
                locations[i].suspiciousDialogue.push_back("The room shows signs of a struggle.");
                locations[i].suspiciousDialogue.push_back("Everything is extremely neat and tidy and you smell bleach.");
                locations[i].suspiciousDialogue.push_back("You find a small blood stain on the floor.");
                locations[i].suspiciousDialogue.push_back("The room is darker than you expected. You notice a spot on the floor where it looks like a lamp used to be.");

                locations[i].notSuspiciousDialogue.push_back("Everything looks to be in order in here.");
                locations[i].notSuspiciousDialogue.push_back("A few things are out of place, but nothing major.");
                locations[i].notSuspiciousDialogue.push_back("It is really dusty in this room, it could use a good cleaning.");
                locations[i].notSuspiciousDialogue.push_back("As you approach the door, you hear faint scratching. As you open it, a cat rushes out, seems like he’s been shut up in there for a while.");
                }
            }
    }

void Game::Generate(Murder &m) {

    // Seeds random number generator with Game seed value
    std::srand(seed);

    // All calls for random number using rand()
    // Will use the seed value, until changed or reset.

    /// TESTING / DEBUGGING
        // Testing Output
        // Used for Debugging
        //std::cout << "Seed = "<< seed << std::endl;
    /// END TESTING / DEBUGGING

    // Generates random number between 0 and 5
    // and stores number in randomKiller integer
    int randomKiller = rand() % 6;

    // Generates random number between 0 and 5
    // and stores number in randomWeapon integer
    int randomWeapon = rand() % 6;

    // Generates random number between 0 and 9
    // and stores number in randomLoc integer
    int randomLoc = rand() % 10;

    /// TESTING / DEBUGGING INFORMATION
        // Testing Output
        // Used for Debugging
        //        std::cout << "randomKiller num = " << randomKiller
        //                  << "\nrandomWeapon num = " << randomWeapon
        //                  << "\nrandomLoc num = " << randomLoc
        //                  << std::endl;
    /// END TESTING / DEBUGGING

    // Instantiates Murder object using generated random values
    Murder generated(suspects[randomKiller],weapons[randomWeapon],locations[randomLoc]);

    // Copies the generated Murder object to the Murder m that was passed to function
    m = generated;

    // Using the generated random values
    // Sets the selected killer, weapon, and location
    // boolean values to true
    suspects[randomKiller].isKiller = true;
    weapons[randomWeapon].isMurderWeapon = true;
    locations[randomLoc].isMurderLocation = true;

    // Loop searches through locations foundWeapon objects
    // Finds the object that has a matching name
    // Then sets that foundWeapon.isMurderWeapon to true
    // This list of weapons is separated
    // Because the weapons are tied to certain locations
    for (int i = 0; i < locations.size(); i++) {
        if (locations[i].foundWeapon.name == weapons[randomWeapon].name) {
            locations[i].foundWeapon.isMurderWeapon = true;
        }
    }
}

void Game::Close() {
    // Function to close the game

    // Goodbye message
    std::cout <<
              "\n\tThanks for playing!\n"
				"______________________________________\n"
				",   . .       ,-.            .    ,-.\n"  
				"| . | |       |  \\         o |   (   )\n" 
				"| ) ) |-. ,-. |  | . . ;-. . |-    ,'\n"  
				"|/|/  | | | | |  / | | | | | |     '\n"   
				"' '   ' ' `-' `-'  `-` ' ' ' `-'   o\n"   
				"______________________________________\n" 
              	"\n\tGoodbye.\n" << std::endl;

    // Sets isPlaying to false
    // Which causes game loop to exit
    isPlaying = false;
}

void Game::Menu() {

    // One time welcome message
    std::cout << "\nWelcome to:\n" << std::endl;

    // Looping game menu
    do {

        // Main Menu Prompt
        std::cout <<
                    "______________________________________\n"
					",   . .       ,-.            .    ,-.\n"  
					"| . | |       |  \\         o |   (   )\n" 
					"| ) ) |-. ,-. |  | . . ;-. . |-    ,'\n"  
					"|/|/  | | | | |  / | | | | | |     '\n"   
					"' '   ' ' `-' `-'  `-` ' ' ' `-'   o\n" 
                     "Hunt for the killer.  Solve the murder.\n"
                     "______________________________________\n"
                     "\nEnter 'M' to Begin\n"
                     "Enter 'Q' to Quit\n"
                     "Enter 'S' to input custom seed\n\n"
                  << "Current seed = " << seed << "\n" << std::endl;

        // char holds user selection
        char userInput;
        // Gets console input stores it in userInput
        std::cin >> userInput;

        // switch statement to process user selection
        switch (tolower(userInput)) {
            // if user selects 'm'
            case 'm':
                // Calls Game::MainGame()
                // Which begins the main part of the game
                MainGame();
                break;
            // if user selects 's'
            case 's':
                // Calls Game::SeedMenu()
                // Where user can input their own seed
                SeedMenu();
                break;
            // if user selects 'q'
            case 'q':
                // Calls Game::Close()
                // Which exits the game
                Close();
                break;
            default:
                break;
        }

        // Reset console input
        std::cin.clear();
        std::cin.ignore();

    } while(isPlaying);
}

void Game::MainGame() {

    // Call to Game::Generate
    // Passing Murder mystery object
    // To generate the random mystery to be solved
    Generate(mystery);

    /// TESTING / DEBUGGING INFORMATION
        // Testing Output
        // Used for Debugging
        //            std::cout << "mystery killer = " << mystery.killer.name
        //                      << "\nmystery weapon = " << mystery.murderWeapon.name
        //                      << "\nmystery location = " << mystery.murderLocation.name << std::endl;
        //
        //            std::cout << "SUSPECTS:" << std::endl;
        //
        //            for(int i= 0; i < suspects.size(); i++) {
        //                std::cout << "Suspect: " << suspects[i].name << ": isKiller = " << suspects[i].isKiller <<  std::endl;
        //            }
        //
        //            std::cout << "WEAPONS:" << std::endl;
        //
        //            for(int i= 0; i < weapons.size(); i++) {
        //                std::cout << "Weapon: " << weapons[i].name << ": isMurderWeapon = " << weapons[i].isMurderWeapon <<  std::endl;
        //            }
        //
        //            std::cout << "LOCATIONS:" << std::endl;
        //
        //            for(int i= 0; i < locations.size(); i++) {
        //                std::cout << "Weapon: " << locations[i].name << ": isMurderLocation = " << locations[i].isMurderLocation <<  std::endl;
        //            }
    /// END TESTING / DEBUGGING

    // These functions house the different sections of the game
    // When one section is completed it moves on to the next
    Investigation();

    Accusation();

    Ending();

    Close();

}

void Game::Investigation() {

    // Game Intro Message
    std::cout <<
           "\n\n::YOU APPROACH A MANSION::"
           "\n::AS YOU ARE ABOUT TO RING THE DOORBELL::\n"
           "\n::AN EXHAUSTED MAN OPENS THE DOOR::\n"

           "\n\t\"Thank goodness you are here, detective."
           "\n\tThere has been an awful crime."
           "\n\tI was throwing a dinner party for some of my dear dear friends..."
           "\n\t\t...when I heard a scream."
           "\n\tMy maid ran into the room crying, saying she had found a body."
           "\n\tIt, it, it's my wife..."
           "\n\t\t...She's been murdered.\"" << std::endl;

    // bool condition for do/while loop
    bool isChoiceValid = true;
    do {
        // Integer to store the sum of the players amount of remaining choices
        int playerChoices = currentPlayer.numInterrogations + currentPlayer.numRoomExams;

        // Conditional message
        // Wanted to change the message depending on amount of player choices
        if (playerChoices == 7) {
            std::cout << "\nWhat would you like to do first?" << std::endl;
        } else {
            std::cout << "\nWhat would you like to do now?" << std::endl;
        }

        // Alerting player how many choices they have remaining
        std::cout << "You have " << currentPlayer.numInterrogations << " interrogations remaining"
            "\nAnd " << currentPlayer.numRoomExams << " room examinations remaining" << std::endl;

        // Decision Prompt
        std::cout << "\n\tEnter '1' to Interrogate the Suspects."
                 "\n\t\t--[You may interrogate up to three suspects.]\n"
                 "\n\tEnter '2' to Examine the Rooms"
                 "\n\t\t--[You may examine up to four rooms.]\n" << std::endl;

        // string to store user choice
        std::string introChoice;

        try {
            // Gets input and stores it in introChoice
            std::cin >> introChoice;

            // switch statement
            // converting string to unsigned int
            switch (std::stoul(introChoice)) {
                case 1:
                    // Check to see if player has remaining interrogations
                    if(currentPlayer.numInterrogations > 0) {
                        // if player has remaining interrogations
                        // Allows call to Game::Interrogate()
                        Interrogate();
                    } else {
                        // if player does not have any interrogations
                        // Alerts player that they have no more interrogations
                        std::cout << "No more investigations remaining." << std::endl;
                    }
                    break;
                case 2:
                    // Check to see if player has remaining examinations
                    if (currentPlayer.numRoomExams > 0) {
                        // if player has remaining examinations
                        // Allows call to Game::RoomExam()
                        RoomExam();
                    } else {
                        // if player does not have any examinations
                        // Alerts player that they have no more examinations
                        std::cout << "No more room examinations remaining." << std::endl;
                    }
                    break;
                default:
                    // if case does not match case 1 or case 2
                    // alerts player they have made an invalid selection
                    std::cout << "Invalid Option.\nPlease choose option '1' or '2'" << std::endl;
            }
        } catch(std::exception &e) {
                /// TESTING / DEBUGGING
                //std::cout << e.what() << std::endl;
                ///

                // if try has failed
                std::cout << "Invalid Input!\nTry Again..." << std::endl;
            }


        // Checks to see if player has used up all their interrogations and examinations
        if ((currentPlayer.numInterrogations == 0) && (currentPlayer.numRoomExams == 0)) {
            // if player has no more interrogations or examinations
            // sets boolean to false
            // which allows loop to exit
            isChoiceValid = false;
        }
    } while(isChoiceValid);
}

void Game::Interrogate() {
        // Ask player who they want to interrogate
        std::cout << "\n::INTERROGATION::"
                     "\nWho would you like to interrogate?\n" << std::endl;

        // Alerts player how many interrogations they have remaining
        // Also decrements players number of interrogations remaining
        std::cout << "\nYou have " << currentPlayer.numInterrogations-- << " interrogations remaining" << std::endl;

        // List choices to player
        // loops through suspects vector
        // and outputs name and description to console
        for (int i = 0; i < suspects.size(); i++) {
            std::cout << "Enter '" << i + 1 << "' to interrogate Suspect " << i + 1
                      << ": " << suspects[i].name << ", " << suspects[i].description << std::endl;
        }

        bool isValidChoice = false;
        do {
            try {
                // Get user input
                std::string choiceInterrogate;
                std::cin >> choiceInterrogate;

                // Switch statement processes player choice
                // and outputs suspect dialogue based on choice

                switch (std::stoul(choiceInterrogate)) {
                    case 1:
                        std::cout << suspects[0].Dialogue() << std::endl;
                        break;
                    case 2:
                        std::cout << suspects[1].Dialogue() << std::endl;
                        break;
                    case 3:
                        std::cout << suspects[2].Dialogue() << std::endl;
                        break;
                    case 4:
                        std::cout << suspects[3].Dialogue() << std::endl;
                        break;
                    case 5:
                        std::cout << suspects[4].Dialogue() << std::endl;
                        break;
                    case 6:
                        std::cout << suspects[5].Dialogue() << std::endl;
                        break;
                    default:
                        // if case does not match other cases 1-6
                        // alerts player they have made an invalid selection
                        std::cout << "Invalid Option.\nPlease choose valid suspect." << std::endl;
                        break;
                }
                // Check to see if choice was in correct range
                if (std::stoul(choiceInterrogate) > 0 && std::stoul(choiceInterrogate) < 7) {
                    isValidChoice = true;
                }
            } catch (std::exception &e) {
                /// TESTING / DEBUGGING
                //std::cout << e.what() << std::endl;
                ///

                // if try has failed
                std::cout << "Invalid Input!\nTry Again..." << std::endl;
            }
        } while (!isValidChoice);
}

void Game::RoomExam() {
    // Ask player which room they want to examine
    std::cout << "\n::ROOM EXAMINATION::"
                 "\nWhich room would you like to investigate?" << std::endl;

    // Alerts player how many examinations they have remaining
    // Also decrements players number of room examinations remaining
    std::cout << "\nYou have " << currentPlayer.numRoomExams-- << " room examinations remaining" << std::endl;

    // List choices to player
    // Loops through locations vector and outputs location name
    for (int i = 0; i < locations.size(); i++) {
        std::cout << "Enter '" << i + 1 << "' to investigate the " << locations[i].name << std::endl;
    }

    bool isValidChoice = false;
    do {
        try {
            // Get user input
            std::string roomChoice;
            std::cin >> roomChoice;

            // Switch statement processes player choice
            // and outputs location dialog based on choice
            switch (std::stoul(roomChoice)) {
                case 1:
                    std::cout << "\nYou chose to investigate the ballroom" << std::endl;

                    // Checks if chosen location is mystery murder locations
                    // and Outputs appropriate dialogue at random
                    if (locations[0].isMurderLocation) {
                        std::cout << locations[0].suspiciousDialogue[rand() % 4] << std::endl;
                    }
                    if (!locations[0].isMurderLocation) {
                        std::cout << locations[0].notSuspiciousDialogue[rand() % 4] << std::endl;
                    }

                    // This room never has any found weapons
                    std::cout << "\nYou do not notice any interesting items in this room." << std::endl;

                    break;
                case 2:
                    std::cout << "\nYou chose to investigate the billiard room" << std::endl;

                    // Checks if chosen location is mystery murder locations
                    // and Outputs appropriate dialogue at random
                    if (locations[1].isMurderLocation) {
                        std::cout << locations[1].suspiciousDialogue[rand() % 4] << std::endl;
                    }
                    if (!locations[1].isMurderLocation) {
                        std::cout << locations[1].notSuspiciousDialogue[rand() % 4] << std::endl;
                    }

                    // Outputs foundWeapon dialogue
                    // Dialogue will depend on if foundWeapon is the mystery murder weapon
                    std::cout << locations[1].foundWeapon.WeaponDialogue() << std::endl;

                    break;
                case 3:
                    std::cout << "\nYou chose to investigate the cellar" << std::endl;

                    // Checks if chosen location is mystery murder locations
                    // and Outputs appropriate dialogue at random
                    if (locations[2].isMurderLocation) {
                        std::cout << locations[2].suspiciousDialogue[rand() % 4] << std::endl;
                    }
                    if (!locations[2].isMurderLocation) {
                        std::cout << locations[2].notSuspiciousDialogue[rand() % 4] << std::endl;
                    }

                    // Outputs foundWeapon dialogue
                    // Dialogue will depend on if foundWeapon is the mystery murder weapon
                    std::cout << locations[2].foundWeapon.WeaponDialogue() << std::endl;

                    break;
                case 4:
                    std::cout << "\nYou chose to investigate the conservatory" << std::endl;

                    // Checks if chosen location is mystery murder locations
                    // and Outputs appropriate dialogue at random
                    if (locations[3].isMurderLocation) {
                        std::cout << locations[3].suspiciousDialogue[rand() % 4] << std::endl;
                    }
                    if (!locations[3].isMurderLocation) {
                        std::cout << locations[3].notSuspiciousDialogue[rand() % 4] << std::endl;
                    }

                    // Outputs foundWeapon dialogue
                    // Dialogue will depend on if foundWeapon is the mystery murder weapon
                    std::cout << locations[3].foundWeapon.WeaponDialogue() << std::endl;

                    break;
                case 5:
                    std::cout << "\nYou chose to investigate the dining room" << std::endl;

                    // Checks if chosen location is mystery murder locations
                    // and Outputs appropriate dialogue at random
                    if (locations[4].isMurderLocation) {
                        std::cout << locations[4].suspiciousDialogue[rand() % 4] << std::endl;
                    }
                    if (!locations[4].isMurderLocation) {
                        std::cout << locations[4].notSuspiciousDialogue[rand() % 4] << std::endl;
                    }

                    // This room never has any found weapons
                    std::cout << "\nYou do not notice any interesting items in this room." << std::endl;

                    break;
                case 6:
                    std::cout << "\nYou chose to investigate the kitchen" << std::endl;

                    // Checks if chosen location is mystery murder locations
                    // and Outputs appropriate dialogue at random
                    if (locations[5].isMurderLocation) {
                        std::cout << locations[5].suspiciousDialogue[rand() % 4] << std::endl;
                    }
                    if (!locations[5].isMurderLocation) {
                        std::cout << locations[5].notSuspiciousDialogue[rand() % 4] << std::endl;
                    }

                    // Outputs foundWeapon dialogue
                    // Dialogue will depend on if foundWeapon is the mystery murder weapon
                    std::cout << locations[5].foundWeapon.WeaponDialogue() << std::endl;

                    break;
                case 7:
                    std::cout << "\nYou chose to investigate the hall" << std::endl;

                    // Checks if chosen location is mystery murder locations
                    // and Outputs appropriate dialogue at random
                    if (locations[6].isMurderLocation) {
                        std::cout << locations[6].suspiciousDialogue[rand() % 4] << std::endl;
                    }
                    if (!locations[6].isMurderLocation) {
                        std::cout << locations[6].notSuspiciousDialogue[rand() % 4] << std::endl;
                    }

                    // Outputs foundWeapon dialogue
                    // Dialogue will depend on if foundWeapon is the mystery murder weapon
                    std::cout << locations[6].foundWeapon.WeaponDialogue() << std::endl;

                    break;
                case 8:
                    std::cout << "\nYou chose to investigate the library" << std::endl;

                    // Checks if chosen location is mystery murder locations
                    // and Outputs appropriate dialogue at random
                    if (locations[7].isMurderLocation) {
                        std::cout << locations[7].suspiciousDialogue[rand() % 4] << std::endl;
                    }
                    if (!locations[7].isMurderLocation) {
                        std::cout << locations[7].notSuspiciousDialogue[rand() % 4] << std::endl;
                    }

                    // Outputs foundWeapon dialogue
                    // Dialogue will depend on if foundWeapon is the mystery murder weapon
                    std::cout << locations[7].foundWeapon.WeaponDialogue() << std::endl;

                    break;
                case 9:
                    std::cout << "\nYou chose to investigate the lounge" << std::endl;

                    // Checks if chosen location is mystery murder locations
                    // and Outputs appropriate dialogue at random
                    if (locations[8].isMurderLocation) {
                        std::cout << locations[8].suspiciousDialogue[rand() % 4] << std::endl;
                    }
                    if (!locations[8].isMurderLocation) {
                        std::cout << locations[8].notSuspiciousDialogue[rand() % 4] << std::endl;
                    }

                    // This room never has any found weapons
                    std::cout << "\nYou do not notice any interesting items in this room." << std::endl;

                    break;
                case 10:
                    std::cout << "\nYou chose to investigate the study" << std::endl;

                    // Checks if chosen location is mystery murder locations
                    // and Outputs appropriate dialogue at random
                    if (locations[9].isMurderLocation) {
                        std::cout << locations[9].suspiciousDialogue[rand() % 4] << std::endl;
                    }
                    if (!locations[9].isMurderLocation) {
                        std::cout << locations[9].notSuspiciousDialogue[rand() % 4] << std::endl;
                    }

                    // This room never has any found weapons
                    std::cout << "\nYou do not notice any interesting items in this room." << std::endl;

                    break;
                default:
                    // if case does not match other cases 1-10
                    // alerts player they have made an invalid selection
                    std::cout << "Invalid Option.\nPlease choose valid location." << std::endl;
                    break;
            }
            // Check to see if player choice is in correct range
            if (std::stoul(roomChoice) > 0 && std::stoul(roomChoice) < 11) {
                isValidChoice = true;
            }
        } catch (std::exception &e) {
            /// TESTING / DEBUGGING
            //std::cout << e.what() << std::endl;
            ///

            // if try has failed
            std::cout << "Invalid Input!\nTry Again..." << std::endl;
        }
    } while (!isValidChoice);
}

void Game::Accusation() {

    // Alerting player that the investigation has concluded
    std::cout << "\nYou have exhausted your investigation"
                 "\nYou must now make your accusation"
                 "\nChoose the murder weapon, murder location and the killer"
                 "\nFrom the following options..." << std::endl;

    /// Accusation of Suspect

    // Loops through suspects vector
    // Outputs suspects name and description
    for (int i = 0; i < suspects.size(); i++) {
        std::cout << "Enter '" << i + 1 << "' to accuse Suspect " << i + 1
                  << ": " << suspects[i].name << ", " << suspects[i].description << std::endl;
    }

    // bool check for do/while loop
    bool isValidChoice = false;

    // string to store player choice
    std::string accuseChoice;
    
    do {
        try {
            // Get player input
            std::cin >> accuseChoice;

            if (std::stoul(accuseChoice) > 0 && std::stoul(accuseChoice) < suspects.size() + 1) {
                // Check if player is correct
                // If player is correct +1 to player's points
                if (suspects[std::stoul(accuseChoice) - 1].isKiller) {
                    std::cout << "You've caught them" << std::endl;
                    currentPlayer.points++;
                }
                if (!suspects[std::stoul(accuseChoice) - 1].isKiller) {
                    std::cout << "You've accused the wrong person" << std::endl;
                }

                // Copy choice to playerGuess
                currentPlayer.playerGuess.killer = suspects[std::stoul(accuseChoice) - 1];
                isValidChoice = true;
            } else {
                std::cout << "Invalid Input.\n Try Again..." << std::endl;
            }
        } catch (std::exception &e) {
            /// TESTING / DEBUGGING
            //std::cout << e.what() << std::endl;
            ///

            // if try has failed
            std::cout << "Invalid Input!\nTry Again..." << std::endl;
        }
    } while(!isValidChoice);

    ///Accusation of Location
    isValidChoice = false;

    // Loops through locations vector
    // Outputs location name
    std::cout << "\nChoose your location guess:\n" << std::endl;
    for (int i = 0; i < locations.size(); i++) {
        std::cout << "Enter '" << i + 1 << "' to select " << locations[i].name << std::endl;
    }

    do {
        try {
            // Get player choice
            accuseChoice.clear();
            std::cin >> accuseChoice;

            if (std::stoul(accuseChoice) > 0 && std::stoul(accuseChoice) < locations.size() + 1) {
                //Check if player is correct
                // If player is correct +1 to player's points
                if (locations[std::stoul(accuseChoice) - 1].isMurderLocation) {
                    std::cout << "You chose the correct location!" << std::endl;
                    currentPlayer.points++;
                }
                if (!locations[std::stoul(accuseChoice) - 1].isMurderLocation) {
                    std::cout << "You chose the wrong location." << std::endl;
                }

                //Copy choice to playerGuess
                currentPlayer.playerGuess.murderLocation = locations[std::stoul(accuseChoice) - 1];
                isValidChoice = true;
            } else {
                std::cout << "Invalid Input!\nTry Again..." << std::endl;
            }
        } catch (std::exception &e) {
            /// TESTING / DEBUGGING
            //std::cout << e.what() << std::endl;
            ///

            // if try has failed
            std::cout << "Invalid Input!\nTry Again..." << std::endl;
        }
    } while (!isValidChoice);

    ///Accusation of Weapon
    isValidChoice = false;

    // Loops through weapons vector
    // Outputs weapon names
    std::cout << "\nChoose your weapon guess:\n" << std::endl;
    for (int i = 0; i < weapons.size(); i++) {
        std::cout << "Enter '" << i + 1 << "' to select " << weapons[i].name << std::endl;
    }
    do {
        try {
            // Get player choice
            accuseChoice.clear();
            std::cin >> accuseChoice;

            if (std::stoul(accuseChoice) > 0 && std::stoul(accuseChoice) < weapons.size() + 1) {
                //Check if player is correct
                // If player is correct +1 to player's points
                if (weapons[std::stoul(accuseChoice) - 1].isMurderWeapon) {
                    std::cout << "You chose the correct weapon!" << std::endl;
                    currentPlayer.points++;
                }
                if (!weapons[std::stoul(accuseChoice) - 1].isMurderWeapon) {
                    std::cout << "You chose the wrong weapon." << std::endl;
                }

                //Copy choice to playerGuess
                currentPlayer.playerGuess.murderWeapon = weapons[std::stoul(accuseChoice) - 1];
                isValidChoice = true;
            } else {
                std::cout << "Invalid Input!\nTry Again..." << std::endl;
            }
        } catch (std::exception &e) {
            /// TESTING / DEBUGGING
            //std::cout << e.what() << std::endl;
            ///

            // if try has failed
            std::cout << "Invalid Input!\nTry Again..." << std::endl;
        }
    } while (!isValidChoice);

    // If player correctly guessed all three
    // player points will == 3
    // They win
    if (currentPlayer.points == 3) {
        currentPlayer.didPlayerWin = true;
    }
}

void Game::Ending() {
    // If player won
    if(currentPlayer.didPlayerWin) {
        std::cout << "CONGRATULATIONS!"
                     "\nYou won and "<< mystery.killer.name << " has been captured.\nWell done!" << std::endl;
    }

    // If player did not win
    if(!currentPlayer.didPlayerWin) {
        std::cout << "\nBetter luck next time..."
                     "\nYou lost and the killer got away.\n" << std::endl;

        // Showing the player their accusation
        std::cout << "\nYour accusation:"
                  << "\nAccused: " << currentPlayer.playerGuess.killer.name
                  << "\nLocation: "<< currentPlayer.playerGuess.murderLocation.name
                  << "\nWeapon: "  << currentPlayer.playerGuess.murderWeapon.name  << std::endl;

        // Showing player the real killer, murder location, and murder weapon
        std::cout << "\nMystery murder:"
                  << "\nKiller: " << mystery.killer.name
                  << "\nLocation: "<< mystery.murderLocation.name
                  << "\nWeapon: "  << mystery.murderWeapon.name  << std::endl;
    }
}

void Game::SeedMenu() {

    // boolean value to check if valid seed
    bool validSeed = false;

    // Menu loops until player has inputted valid seed
    do {
        std::cout <<
                    "\nCustom Seed Menu:\n"
                     "______________________________________\n"
                     "\nEnter 9 digit numerical seed\n" << std::endl;

        std::string userInput;
        std::cin >> userInput;

        // if input fails
        // clears input
        // alert player of invalid input
        if (std::cin.fail()) {
        } else {
            try{
                // checks to see if seed is correct length
                if (userInput.length() < 9 || userInput.length() > 9) {
                    std::cout << "Seed must be 9 digits in length.\n" << std::endl;
                } else {
                    // Loops through userInput string
                    // checks if each char is a digit
                    // if letters were found,
                    // sets bool containsLetters to true
                    bool containsLetters = false;

                    for (int i = 0; i < 9; i++) {
                        if (!std::isdigit(userInput[i])) {
                            containsLetters = true;
                        }
                    }

                    if (containsLetters) {
                        validSeed = false;
                        std::cout << "\nSeed cannot have letters!\n" << std::endl;
                    } else {
                        validSeed = true;
                    }
                    // if valid seed
                    // converts seed string to unsigned integer
                    if (validSeed) {
                        unsigned int userSeed = (unsigned int)std::stoul(userInput);

                        // Calls SetSeed function that assigns user seed to game seed
                        SetSeed(userSeed);
                    }
                }
            } catch(std::exception &e) {
                /// TESTING / DEBUGGING
                    //std::cout << e.what() << std::endl;
                ///

                // if try has failed
                std::cout << "Seed must only contain numbers.\n" << std::endl;
            }
        }

        if (!validSeed) {
            std::cin.clear();
            std::cout << "\nInvalid Seed!!!"
                         "\nTry again..."
                         "\nEnsure that seed is 9 digits in length and only contains numbers." << std::endl;
        }

        if (validSeed) {
            std::cout << "Valid Seed" << "\nPress Enter to go back to menu..." << std::endl;
            // Pause until player presses enter
            std::cin.get();
        }

    } while(!validSeed);
}


void Game::SetSeed() {
    // returns current unix epoch time
    // stored in unsigned int seed
    seed = (unsigned int)time(nullptr);

    // seed random number generator with time value
    srand(seed);

    // use seeded generator to get random 9 digit number
    std::string randomSeed;

    // Loops through 9 times
    for (int i = 0; i < 9; i ++) {
        // gets random number between 0 and 9
        std::string digit = std::to_string(rand() % 10);
        // appends digit to end of randomSeed string
        randomSeed.append(digit);
    }

    // Converts randomSeed string to unsigned int
    // stores to unsigned int seed
    seed = (unsigned int)std::stoul(randomSeed);
}

void Game::SetSeed(unsigned int userSeed) {
    /// Testing / Debugging Information
        //    Seed = 686053249
        //    randomKiller num = 2
        //    randomWeapon num = 1
        //    randomLoc num = 5
        //    mystery killer = Mrs. Blanche White
        //    mystery weapon = Knife
        //    mystery location = Kitchen
    ///

    // Sets seed to user passed seed
    seed = userSeed;
}

