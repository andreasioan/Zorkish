//
//  StateSelectAdventure.cpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 21/9/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#include "StateSelectAdventure.h"

StateSelectAdventure::StateSelectAdventure()
{
    
}

StateSelectAdventure::~StateSelectAdventure()
{
    
}

void StateSelectAdventure::Update()
{
    
}

GameState* StateSelectAdventure::HandleInput(string input)
{
    int in = atoi(input.c_str());
    
    switch (in) {
        case 1:
            return new StateGamePlay();
            break;
        case 2:
            return NULL;
            break;
        case 3:
            return NULL;
            break;
        default:
            break;
    }
    
    return NULL;
}

void StateSelectAdventure::Draw()
{
    cout << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Zorkish :: Select Adventure" << endl;
    cout << "----------------------------------------------" << endl << endl;
    cout << "Choose your adventure:" << endl << endl;
    cout << " 1. Mountain World" << endl;
    cout << " 2. Water World" << endl;
    cout << " 3. Box World" << endl << endl;
    cout << " Select 1 - 3 :> ";
}
