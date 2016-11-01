//
//  CommandManager.cpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 12/10/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#include "CommandManager.h"

CommandManager::CommandManager()
{
    Command* welcome = new CommandWelcome();
    _commands.push_back(welcome);
    
    Command* go = new CommandGo();
    _commands.push_back(go);
    
    Command* look = new CommandLook();
    _commands.push_back(look);
    
    Command* take = new CommandTake();
    _commands.push_back(take);
    
    Command* put = new CommandPut();
    _commands.push_back(put);
    
    Command* attack = new CommandAttack();
    _commands.push_back(attack);
    
    Command* global = new CommandGlobal();
    _commands.push_back(global);
    
    
    // Working Commands:
    // - look
    // - look at _
    // - look in _
    // - look at _ in _
    // - go to _
    // - take _
    // - take _ from _
    // - put _ in _
    // - attack _
    // - attack _ with _
}

CommandManager::~CommandManager()
{
    for (int i = 0; i < _commands.size(); i++)
    {
        delete _commands[i];
    }
}

Command* CommandManager::FindCommand(string com)
{
    for (int i = 0; i < _commands.size(); i++)
    {
        if(_commands[i]->AreYou(com))
        {
            return _commands[i];
        }
    }
    
    return new CommandNULL();
}


