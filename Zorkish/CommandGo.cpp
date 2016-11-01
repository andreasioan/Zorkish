//
//  CommandGo.cpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 12/10/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#include "CommandGo.h"




CommandGo::CommandGo() : Command((string[]){"go"})
{
    
    
}

CommandGo::~CommandGo()
{
    
}

string CommandGo::execute(Player& player, LocationManager& locMan, vector<string> text, Blackboard& blackboard)
{
    if (text.size() == 3)
    {
        if(text[1] == "to")
        {
             return GoTo(text[2], player, locMan);
        }
        else
        {
            return "  - Where do you want to go to?";
        }
    }
    else
    {
        return  "  - I dont know how to move like that";
    }
}

string CommandGo::GoTo(string location, Player& player, LocationManager& locMan)
{
    bool access = false;
    
    for (int i = 0; i < player.GetDestinationNames().size(); i++)
    {
        if(player.GetDestinationNames()[i] == location)
        {
            access = true;
            break;
        }
    }
    
    if(access)
    {
        return player.GoTo(locMan.GetLocation(location));
    }
    else
    {
        return "  - That place does not exist.. yet...";
    }
}
