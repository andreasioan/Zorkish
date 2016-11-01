//
//  StateGamePlay.cpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 21/9/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#include "StateGamePlay.h"

StateGamePlay::StateGamePlay()
{
    cout << endl;
    cout << "----------------------------------------------" << endl;
    cout << "           Zorkish " << endl;
    cout << "----------------------------------------------" << endl;
    
    _player = new Player();
    _comMan = new CommandManager();
    _locMan = new LocationManager();
    _blackboard = new Blackboard();
    
    _command = _comMan->FindCommand("Welcome");
    _player->SetLocation(_locMan->GetLocation("Village"));
    
    cout << endl << "Welcome to the Zorkish world!" << endl;
}

StateGamePlay::~StateGamePlay()
{
    delete _player;
    delete _comMan;
    delete _command;
    delete _locMan;
}

GameState* StateGamePlay::HandleInput(string input)
{
    _splitInput = Splitt(input, ' ');
    
    _command = _comMan->FindCommand(_splitInput[0]);
    
    return NULL;
}

void StateGamePlay::Update()
{
    _output = _command->execute(*_player, *_locMan, _splitInput, *_blackboard);
    _blackboard->ClearMessages();
}

void StateGamePlay::Draw()
{
    cout << _output << endl;
    cout << " :> ";
}

void StateGamePlay::Split(const string &s, char delim, vector<string> &elems)
{
    stringstream ss;
    ss.str(s);
    string item;
    while(getline(ss, item, delim))
    {
        elems.push_back(item);
    }
}

vector<string> StateGamePlay::Splitt(const string &s, char delim)
{
    vector<string> elems;
    Split(s, delim, elems);
    return elems;
}





