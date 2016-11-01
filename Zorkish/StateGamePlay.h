//
//  StateGamePlay.hpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 21/9/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#pragma once
#include "GameState.h"
#include "stdafx.h"
#include "StateMainMenu.h"
#include "StateHelp.h"
#include "StateNewHighScore.h"
#include "Player.h"
#include "LocationManager.h"
#include "CommandManager.h"
#include "Blackboard.h"
#include <sstream>

class StateGamePlay :
public GameState
{
public:
    StateGamePlay();
    ~StateGamePlay();
    virtual void Update();
    virtual GameState* HandleInput(string input);
    virtual void Draw();
    
private:
    Player* _player;
    CommandManager* _comMan;
    LocationManager* _locMan;
    Command* _command;
    Blackboard* _blackboard;
    
    vector<string> Splitt(const string &s, char delim);
    void Split(const string &s, char delim, vector<string> &elems);
    
    vector<string> _splitInput;
    string _output;
};
