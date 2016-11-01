//
//  SelectAdventure.hpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 21/9/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#include "StateHelp.h"


StateHelp::StateHelp()
{
}


StateHelp::~StateHelp()
{
}

void StateHelp::Update()
{}

GameState* StateHelp::HandleInput(string input)
{
    if (input != "")
    {
        return new StateMainMenu();
    }
    
    return NULL;
}

void StateHelp::Draw()
{
    cout << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Zorkish :: Help" << endl;
    cout << "----------------------------------------------" << endl << endl;
    cout << "The following commands are supported:" << endl;
    cout << " - quit" << endl;
    cout << " - hiscore (for testing)" << endl << endl;
    cout << "Press any key to continue" << endl;
}
