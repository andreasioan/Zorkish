//
//  SelectAdventure.hpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 21/9/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#include "StateAbout.h"


StateAbout::StateAbout()
{
    
}


StateAbout::~StateAbout()
{
    
}

void StateAbout::Update()
{
    
}

GameState* StateAbout::HandleInput(string input)
{
   
    if (input != "")
    {
        return new StateMainMenu();
    }
    
    return NULL;
}

void StateAbout::Draw()
{
    cout << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Zorkish :: About" << endl;
    cout << "----------------------------------------------" << endl << endl;
    cout << "Written by: Andreas Ioannidis" << endl << endl;
    cout << "Press any key to return to the home screen" << endl;
}
