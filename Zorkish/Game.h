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

class Game
{
public:
	Game();
	~Game();
	void HandleInput();
	void Update();
	void Draw();
private:
	GameState* _state;
};

