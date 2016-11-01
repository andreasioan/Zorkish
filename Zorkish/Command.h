//
//  Command.hpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 12/10/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#ifndef Command_h
#define Command_h

#include "stdafx.h"
#include "IdentifiableObject.h"
#include "Player.h"
#include "LocationManager.h"
#include "Blackboard.h"

class Command : public IdentifiableObject
{
public:
    Command(string ids[]);
    virtual ~Command();
    virtual string execute(Player& player, LocationManager& locMan, vector<string> text, Blackboard& blackboard) = 0;
private:
    
};

#endif /* Command_h */
