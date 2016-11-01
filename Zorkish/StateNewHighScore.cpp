//
//  StateNewHighScore.cpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 21/9/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#include "StateNewHighScore.h"

StateNewHighScore::StateNewHighScore()
{
    
}

StateNewHighScore::~StateNewHighScore()
{
    
}

void StateNewHighScore::Update()
{
    
}

GameState* StateNewHighScore::HandleInput(string input)
{
    if (input != "")
        return new StateMainMenu();
    return NULL;
}

void StateNewHighScore::Draw()
{
    cout << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Zorkish :: New High Score" << endl;
    cout << "----------------------------------------------" << endl << endl;
    cout << "Congradulations!" << endl << endl;
    cout << "You have made it into the Hall of Fame!" << endl << endl;
    cout << "Adventure: " << endl;
    cout << "Score: " << endl;
    cout << "Moves: " << endl << endl;
    cout << "Please type your name and press enter:" << endl;
    cout << "  :> ";
}
