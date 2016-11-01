//
//  Blackboard.cpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 31/10/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#include "Blackboard.h"

Blackboard::Blackboard()
{
    
}

Blackboard::~Blackboard()
{
    
}

vector<string> Blackboard::GetMessages()
{
    return _messages;
}

void Blackboard::ClearMessages()
{
    _messages.clear();
}

void Blackboard::AddMessage(string message)
{
    _messages.push_back(message);
}
