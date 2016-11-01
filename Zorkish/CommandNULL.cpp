//
//  CommandNULL.cpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 12/10/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#include "CommandNULL.h"



CommandNULL::CommandNULL() : Command((string[]){"nullValue"})
{
    
}

CommandNULL::~CommandNULL()
{
    
}

string CommandNULL::execute(Player& player, LocationManager& locMan, vector<string> text, Blackboard& blackboard)
{
    return "  - Command not recognised  ";
}
