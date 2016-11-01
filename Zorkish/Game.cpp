//
//  SelectAdventure.hpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 21/9/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//


#include "Game.h"


Game::Game()
{
	_state = new StateMainMenu();
}

Game::~Game()
{
	delete _state;
}

void Game::HandleInput()
{
	string input = "";
    getline(cin, input);
    
    // Change State
	GameState* state = _state->HandleInput(input);
    
    if (state != NULL)
    {
        delete _state;
        _state = state;
    }
}

void Game::Update()
{
	_state->Update();
}

void Game::Draw()
{
	_state->Draw();

}
