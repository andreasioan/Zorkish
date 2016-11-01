//
//  CommandNULL.hpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 12/10/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#ifndef CommandNULL_h
#define CommandNULL_h

#include "stdafx.h"
#include "Command.h"

class CommandNULL : public Command
{
public:
    CommandNULL();
    virtual ~CommandNULL();
    virtual string execute(Player& player, LocationManager& locMan, vector<string> text, Blackboard& blackboard);
private:
    
};

#endif /* CommandNULL_h */
