//
//  CommandGlobal.hpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 31/10/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#ifndef CommandGlobal_h
#define CommandGlobal_h

#include "stdafx.h"
#include "Command.h"

class CommandGlobal : public Command
{
public:
    CommandGlobal();
    ~CommandGlobal();
    virtual string execute(Player& player, LocationManager& locMan, vector<string> text, Blackboard& blackboard);
private:
    
};

#endif /* CommandGlobal_h */
