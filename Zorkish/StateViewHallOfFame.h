//
//  StateViewHallOfFame.hpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 21/9/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#pragma once
#include "GameState.h"
#include "stdafx.h"
#include "StateMainMenu.h"

class StateViewHallOfFame :
public GameState
{
public:
    StateViewHallOfFame();
    ~StateViewHallOfFame();
    virtual void Update();
    virtual GameState* HandleInput(string input);
    virtual void Draw();
};
