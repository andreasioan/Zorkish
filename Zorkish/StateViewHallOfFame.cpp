//
//  StateViewHallOfFame.cpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 21/9/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#include "StateViewHallOfFame.h"

StateViewHallOfFame::StateViewHallOfFame()
{
    
}

StateViewHallOfFame::~StateViewHallOfFame()
{
    
}

void StateViewHallOfFame::Update()
{
    
}

GameState* StateViewHallOfFame::HandleInput(string input)
{
    if (cin.ignore())
    {
        return new StateMainMenu();
    }
    
    return NULL;
}

void StateViewHallOfFame::Draw()
{
    cout << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Zorkish :: Hall of Fame" << endl;
    cout << "----------------------------------------------" << endl << endl;
    cout << "Top 10 Champions" << endl << endl;
    cout << " 1. ME!!!" << endl;
    cout << " 2. No one else" << endl;
    cout << "Press enter to return to the main menu";
}
