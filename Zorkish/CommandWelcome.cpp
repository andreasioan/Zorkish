//
//  CommandWelcome.cpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 13/10/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#include "CommandWelcome.h"

CommandWelcome::CommandWelcome() : Command((string[]){"Welcome"})
{
    
}

CommandWelcome::~CommandWelcome()
{
    
}

string CommandWelcome::execute(Player &player, LocationManager& locMan, vector<string> text, Blackboard& blackboard)
{
    return "  - Use the 'look' command to look around";
}
