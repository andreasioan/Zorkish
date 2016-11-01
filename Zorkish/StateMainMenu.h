//
//  SelectAdventure.hpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 21/9/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#pragma once
#include "stdafx.h"
#include "GameState.h"
#include "Game.h"
#include "StateAbout.h"
#include "StateHelp.h"
#include "StateSelectAdventure.h"
#include "StateViewHallOfFame.h"

class StateMainMenu :
	public GameState
{
public:
	StateMainMenu();
	~StateMainMenu();
	virtual void Update();
	virtual GameState* HandleInput(string input);
	virtual void Draw();
private:
	string* _input;
};

