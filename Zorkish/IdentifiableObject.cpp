//
//  IdentifiableObject.cpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 28/9/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#include "IdentifiableObject.h"

IdentifiableObject::IdentifiableObject(string ids[])
{
    for(int i = 0; i < sizeof(ids)/sizeof(ids[0]) + 1; i++)
    {
        AddIdentifier(ids[i]);
    }
}

IdentifiableObject::~IdentifiableObject()
{
     
}

void IdentifiableObject::AddIdentifier(string id)
{
    _identifiers.push_back(id);
}

bool IdentifiableObject::AreYou(string id)
{
    for(int i = 0; i < _identifiers.size(); i++)
    {
        if(id == _identifiers[i])
        {
            return true;
        }
    }
    
    return false;
}
