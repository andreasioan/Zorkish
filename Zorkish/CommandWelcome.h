//
//  CommandWelcome.hpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 13/10/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#ifndef CommandWelcome_h
#define CommandWelcome_h

#include "stdafx.h"
#include "Command.h"

class CommandWelcome : public Command
{
public:
    CommandWelcome();
    ~CommandWelcome();
    virtual string execute(Player& player, LocationManager& locMan, vector<string> text, Blackboard& blackboard);
    
private:
    
};

#endif /* CommandWelcome_h */
