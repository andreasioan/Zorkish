//
//  CommandTake.cpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 14/10/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#include "CommandTake.h"

CommandTake::CommandTake() : Command((string[]){"take"})
{
    
}

CommandTake::~CommandTake()
{
    
}

string CommandTake::execute(Player &player, LocationManager &locMan, vector<string> text, Blackboard& blackboard)
{
    if(text.size() == 2 || text.size() == 4)
    {
        if(text.size() == 2)
        {
            //take item - from the location and add it to players inventory
            if(player.GetCurrentLocation()->GetInventory()->HasItem(text[1]))
            {
                if(player.GetCurrentLocation()->GetInventory()->CanTakeItem(text[1]))
                {
                    player.GetInventory()->Put(player.GetCurrentLocation()->GetInventory()->Take(text[1]));
                    return "  --> You took the " + text[1];
                }
                else
                    return " --> You cannot take the " + text[1];
            }
            else
                return "  - " + text[1] + " could not be found";
        }
        else
        {
            if (text.size() == 4)
            {
                
                if(text[2] == "from")
                {
                    //take item from container - and add it to palyers inventory
                    
                    if(player.GetCurrentLocation()->GetInventory()->HasItem(text[3]))
                    {
                        IHaveInventory* container = (IHaveInventory*)player.Locate(text[3]);
                        
                        if(container->GetInventory()->HasItem(text[1]))
                        {
                            if(container->GetInventory()->CanTakeItem(text[1]))
                            {
                                player.GetInventory()->Put(container->GetInventory()->Take(text[1]));
                            }
                        }
                    }
                    
                    return "  --> You took the " + text[1];
                }
                else
                    return "  - Where would you like to take form?";
            }
        }
    }
    else
        return "  - I dont know how to take like that";
    
    return "";
}
