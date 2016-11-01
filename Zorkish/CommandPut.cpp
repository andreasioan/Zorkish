//
//  CommandPut.cpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 19/10/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#include "CommandPut.h"

CommandPut::CommandPut() : Command((string[]){"put"})
{
    
}

CommandPut::~CommandPut()
{
    
}

string CommandPut::execute(Player &player, LocationManager &locMan, vector<string> text, Blackboard& blackboard)
{
    if(text.size() == 4)
    {
        if(player.GetInventory()->HasItem(text[1]) && player.GetCurrentLocation()->GetInventory()->HasItem(text[3]))
        {
            IHaveInventory* inv = (IHaveInventory*)player.Locate(text[3]);
            
            inv->GetInventory()->Put(player.GetInventory()->Take(text[1]));
            return "  --> You put the " + text[1] + " in the " + text[3];
        }
        else
        {
            return "  - That does not exsist";
        }
    }
    else
    {
        return "  - I dont know how to do that";
    }
    return "";
}
