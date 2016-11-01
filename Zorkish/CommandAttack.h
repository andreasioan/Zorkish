//
//  CommandAttack.hpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 26/10/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#ifndef CommandAttack_h
#define CommandAttack_h

#include "stdafx.h"
#include "Command.h"

class CommandAttack : public Command
{
public:
    CommandAttack();
    ~CommandAttack();
    virtual string execute(Player& player, LocationManager& locMan, vector<string> text, Blackboard& blackboard);
    
private:
    bool ItemExsists(Player &player, string name);
};

#endif /* CommandAttack_h */
