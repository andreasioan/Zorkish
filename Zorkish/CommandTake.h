//
//  CommandTake.hpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 14/10/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#ifndef CommandTake_hpp
#define CommandTake_hpp

#include "stdafx.h"
#include "Command.h"

class CommandTake : public Command
{
public:
    CommandTake();
    ~CommandTake();
    virtual string execute(Player& player, LocationManager& locMan, vector<string> text, Blackboard& blackboard);
private:
    
};

#endif /* CommandTake_hpp */
