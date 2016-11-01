//
//  Blackboard.hpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 31/10/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#ifndef Blackboard_h
#define Blackboard_h

#include "stdafx.h"

class Blackboard
{
public:
    Blackboard();
    ~Blackboard();
    vector<string> GetMessages();
    void ClearMessages();
    void AddMessage(string message);
private:
    vector<string> _messages;
};

#endif /* Blackboard_hpp */
