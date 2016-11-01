//
//  SelectAdventure.hpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 21/9/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#pragma once
#include "GameState.h"
#include "stdafx.h"
#include "StateMainMenu.h"

class StateAbout :
	public GameState
{
public:
    StateAbout();
    ~StateAbout();
    virtual void Update();
    virtual GameState* HandleInput(string input);
    virtual void Draw();
};

