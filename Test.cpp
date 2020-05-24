#include "doctest.h"
#include <iostream>
#include <stdexcept>

#include "DemoGame.hpp"
//#include "Board.hpp"
#include "FootSoldier.hpp"
#include "FootCommander.hpp"
#include "Sniper.hpp"
#include "SniperCommander.hpp"
#include "Paramedic.hpp"
#include "ParamedicCommander.hpp"
#include <cassert>




TEST_CASE("Positioning the players"){
    WarGame:: Board board (8, 8);
    assert(!board.has_soldiers(1));
    board[{0,1}] = new WarGame::FootSoldier(1);
    board[{0,3}] = new WarGame::FootCommander(1);
    board[{0,5}] = new WarGame::FootSoldier(1);
    assert(board.has_soldiers(1));

    //Add soldiers for player 2:
    assert(!board.has_soldiers(2));
    board[{7,1}] = new WarGame::FootSoldier(2);
    board[{7,3}] = new WarGame::FootCommander(2);
    board[{7,5}] = new WarGame::FootSoldier(2);
    assert(board.has_soldiers(2));
}