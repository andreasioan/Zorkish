//
//  SelectAdventure.hpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 21/9/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#pragma once
#include "stdafx.h"

class GameState
{
public:
	GameState();
	virtual ~GameState();
	virtual void Update();
	virtual GameState* HandleInput(string input);
	virtual void Draw();
};

