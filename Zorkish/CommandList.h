//
//  CommandList.hpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 12/10/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#ifndef CommandList_h
#define CommandList_h

#include "stdafx.h"
#include "Command.h"
#include "Player.h"

class CommandList : public Command
{
public:
    CommandList();
    ~CommandList();
    virtual string execute(Player& player, LocationManager& locMan, vector<string> text);
    
private:
    
};

#endif /* CommandList_h */
