//
//  CommandGlobal.cpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 31/10/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#include "CommandGlobal.h"

CommandGlobal::CommandGlobal() : Command((string[]){"Global"})
{
    
}

CommandGlobal::~CommandGlobal()
{
    
}

string CommandGlobal::execute(Player &player, LocationManager &locMan, vector<string> text, Blackboard& blackboard)
{
    //Sets the target in the first message stored in blackboard
    blackboard.AddMessage("Global");
    //sets health to set target in blackboard
    blackboard.AddMessage(text[1]);
    
    //tells all objects to look for messages that correspond to their name
    player.GetCurrentLocation()->GetInventory()->Update(blackboard);

    
    return "  --> Global announcement sent";
}
