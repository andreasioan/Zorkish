//
//  CommandLook.cpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 12/10/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#include "CommandLook.h"

CommandLook::CommandLook() : Command((string[]){"look"})
{
    
}

CommandLook::~CommandLook()
{
    
}

string CommandLook::execute(Player &player, LocationManager &locMan, vector<string> text, Blackboard& blackboard)
{
    if(text.size() == 1 || text.size() == 3 || text.size() == 5)
    {
        if(text[0] == "look")
        {
            if(text.size() == 1)
            {
                //look at surroundings
                
                string result;
                
                result +=  "  - You are in a " + player.GetCurrentLocation()->Name() + "\n";
                
                if(player.GetInventory()->Size() != 0)
                    result += "  --> You are carrying: \n" + player.GetInventory()->ItemList();
                
                if(player.GetCurrentLocation()->GetInventory()->Size() != 0)
                    result += "  --> You can see: \n" + player.GetCurrentLocation()->GetInventory()->ItemList();
                
                for (int i = 0; i < player.GetDestinationNames().size(); i++)
                {
                    result += "  --> You can see a " + player.GetDestinationNames()[i] + "\n";
                }
                
                return result;
            }
            else if(text.size() == 5)
            {
                if(text[1] == "at" && text[3] == "in")
                {
                    IHaveInventory* temp = FetchContainer(player, text[4]);
                    
                    return LookAtIn(text[2], *temp);
                }
                else
                {
                    return "  - I dont know ";
                }
            }
            else
            {
                if(text.size() == 3)
                {
                    if (text[1] == "at")
                    {
                        return "  - " + LookAtIn(text[2], player);
                    }
                    else if(text[1] == "in")
                    {
                        IHaveInventory* temp = FetchContainer(player, text[2]);
                        
                        if (temp == NULL)
                        {
                            return "nope";
                        }
                        else
                        {
                            string result;
                            result += "  --> In the chest is:\n";
                            result += temp->GetInventory()->ItemList();
                            return result;
                        }
                        
                    }
                    else
                    {
                        return "  - What do you want to look at?";
                    }
                }
            }
        }
    }
    else
    {
        return "  - I dont know how to look like that";
    }
    
    return "you facked up";
}

IHaveInventory* CommandLook::FetchContainer(Player &p, string name)
{
    return (IHaveInventory*)p.Locate(name);
}

string CommandLook::LookAtIn(string name, IHaveInventory& container)
{
    GameObject* thing = NULL;
    
    thing = container.Locate(name);
    
    if(thing == NULL)
        return "  - I cannot find the " + name;
    else
    {
        return thing->Description();
    }
}
