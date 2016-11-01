//
//  CommandAttack.cpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 26/10/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#include "CommandAttack.h"

CommandAttack::CommandAttack() : Command((string[]){"attack"})
{
    
}

CommandAttack::~CommandAttack()
{
    
}

string CommandAttack::execute(Player &player, LocationManager& locMan, vector<string> text, Blackboard& blackboard)
{
    if(text.size() == 2 || text.size() == 4)
    {
        if (text.size() == 2)
        {
            if(ItemExsists(player, text[1]))
            {
                GameObject* temp = player.Locate(text[1]);
                
                //Sets the target in the first message stored in blackboard
                blackboard.AddMessage(temp->Name());
                //sets health to set target in blackboard
                blackboard.AddMessage(to_string(temp->Action()->GetHealth() - player.Action()->GetDamage()));
                
                //tells all objects to look for messages that correspond to their name
                player.GetCurrentLocation()->GetInventory()->Update(blackboard);
                
                return "  --> You hit the " + text[1] + "\n  --> The " + text[1] + " has " + to_string(temp->Action()->GetHealth()) + " health left.";
            }
        }
        else if(text.size() == 4)
        {
            if(text[2] == "with")
            {
                if(ItemExsists(player, text[1]) && ItemExsists(player, text[3]))
                {
                    GameObject* temp = player.Locate(text[1]);
                    
                    //
                    blackboard.AddMessage(temp->Name());
                    blackboard.AddMessage(to_string(temp->Action()->GetHealth() - player.Locate(text[3])->Action()->GetDamage()));
                   
                    
                    
                    //updates all items to reflect messages
                    player.GetCurrentLocation()->GetInventory()->Update(blackboard);
                    
                    return "  --> You hit the " + text[1] + "\n  --> The " + text[1] + " has " + to_string(temp->Action()->GetHealth()) + " health left.";
                }
                else
                {
                    return "  - I cant find that";
                }
            }
            else
            {
                return "  - What do you want to attack with?";
            }
        }
        else
        {
            return "  - What do you want to attack?";
        }
    }
    else
    {
        return "  - I dont know how to attack like that";
    }
    
    
    return " IMPLEMENT ME";
}

bool CommandAttack::ItemExsists(Player &player, string name)
{
    if (player.Locate(name) == NULL)
        return false;
    else
        return true;
}
