//
//  StateNewHighScore.hpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 21/9/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#pragma once
#include "GameState.h"
#include "stdafx.h"
#include "StateMainMenu.h"

class StateNewHighScore :
public GameState
{
public:
    StateNewHighScore();
    ~StateNewHighScore();
    virtual void Update();
    virtual GameState* HandleInput(string input);
    virtual void Draw();
};
