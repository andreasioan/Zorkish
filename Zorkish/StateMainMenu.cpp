//
//  SelectAdventure.hpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 21/9/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#include "StateMainMenu.h"


StateMainMenu::StateMainMenu()
{
	
}


StateMainMenu::~StateMainMenu()
{

}

void StateMainMenu::Update()
{
	
}

GameState* StateMainMenu::HandleInput(string input)
{
	int in = atoi(input.c_str());

    switch (in) {
        case 1:
            return new StateSelectAdventure();
            break;
        case 2:
            return new StateViewHallOfFame();
            break;
        case 3:
            return new StateHelp();
            break;
        case 4:
            return new StateAbout();
            break;
        case 5:
            exit(0);
            break;
        default:
            break;
    }
    
    return NULL;
}

void StateMainMenu::Draw()
{
	cout << endl;
	cout << "----------------------------------------------" << endl;
	cout << "Zorkish :: Main Menu" << endl;
	cout << "----------------------------------------------" << endl << endl;
	cout << "Welcome to Zorkish Adventures!" << endl << endl;
	cout << "1. Select Adventures and Play" << endl;
	cout << "2. Hall of Fame" << endl;
	cout << "3. Help" << endl;
	cout << "4. About" << endl;
	cout << "5. Quit" << endl << endl;
	cout << "Select 1 - 5 :> ";

}
