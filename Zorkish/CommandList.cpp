//
//  CommandList.cpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 12/10/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#include "CommandList.h"

CommandList::CommandList() : Command((string[]){"list"})
{
    
}

CommandList::~CommandList()
{
    
}

string CommandList::execute(Player &player, LocationManager& locMan, vector<string> text)
{
    for (int i = 0; i < player.GetDestinationNames().size(); i++)
    {
        return "  --> " + player.GetDestinationNames()[i];
    }

}
