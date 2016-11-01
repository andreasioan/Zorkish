//
//  CommandGo.hpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 12/10/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#ifndef CommandGo_h
#define CommandGo_h

#include "stdafx.h"
#include "Command.h"

class CommandGo : public Command
{
public:
    CommandGo();
    ~CommandGo();
    virtual string execute(Player& player, LocationManager& locMan, vector<string> text, Blackboard& blackboard);
    
    string GoTo(string location, Player& player, LocationManager& locMan);
private:
    
};

#endif /* CommandGo_h */
