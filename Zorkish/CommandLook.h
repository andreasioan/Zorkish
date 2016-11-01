//
//  CommandLook.hpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 12/10/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#ifndef CommandLook_h
#define CommandLook_h

#include "stdafx.h"
#include "Command.h"

class CommandLook : public Command
{
public:
    CommandLook();
    ~CommandLook();
    virtual string execute(Player& player, LocationManager& locMan, vector<string> text, Blackboard& blackboard);
    string LookAtIn (string name, IHaveInventory& container);
    IHaveInventory* FetchContainer(Player& p, string name);
private:
    
};

#endif /* CommandLook_h */
