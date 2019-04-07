/*
Description: A header for the current game state of the class.
Last Modified: 07 Apr 2019
Author: Isaac Draper
*/

#ifndef GAME_STATE_H
#define GAME_STATE_H

#include "json11/json11.hpp"
#include "GameLib/src/structs.h"
#include "GameLib/src/enums.h"
#include "GameLib/src/util.h"

namespace terminal {

    using json11::Json;
    using std::string;

    /// This represents everything about a current state of the game.
    /// It provides a convienent way to add/remove units and
    /// get information about the opponent.
    class GameState {
    public:
        GameState(Json configuration, Json jsonState);

    private:
        Json config;
        Player player1;
        Player player2;
        Json buildStack;
        Json deployStack;
        int turnNumber;
        // TODO: Add GameMap
        // TODO: Add pathfinding

    };

}

#endif