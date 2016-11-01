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
#include "StateMainMenu.h"
class StateHelp :
	public GameState
{
public:
	StateHelp();
	~StateHelp();
    virtual void Update();
    virtual GameState* HandleInput(string input);
    virtual void Draw();
};

