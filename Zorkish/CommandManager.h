//
//  CommandManager.hpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 12/10/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#ifndef CommandManager_h
#define CommandManager_h

#include "stdafx.h"
#include "Command.h"
#include "CommandGo.h"
#include "CommandNULL.h"
#include "CommandList.h"
#include "CommandLook.h"
#include "CommandWelcome.h"
#include "CommandTake.h"
#include "CommandPut.h"
#include "CommandAttack.h"
#include "CommandGlobal.h"

class CommandManager
{
public:
    CommandManager();
    ~CommandManager();
    Command* FindCommand(string);
private:
    vector<Command*> _commands;
};

#endif /* CommandManager_h */
