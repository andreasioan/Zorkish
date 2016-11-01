//
//  CommandPut.hpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 19/10/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#ifndef CommandPut_h
#define CommandPut_h

#include "stdafx.h"
#include "Command.h"

class CommandPut : public Command
{
public:
    CommandPut();
    ~CommandPut();
    virtual string execute(Player& player, LocationManager& locMan, vector<string> text, Blackboard& blackboard);
private:
    
};

#endif /* CommandPut_h */
