//
//  IdentifiableObject.hpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 28/9/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#ifndef IdentifiableObject_h
#define IdentifiableObject_h

#include "stdafx.h"
#include <stdio.h>
#include<vector>



class IdentifiableObject
{
public:
    IdentifiableObject(string ids[]);
    ~IdentifiableObject();
    void AddIdentifier(string id);
    bool AreYou(string id);
private:
    vector<string> _identifiers;
};
#endif /* IdentifiableObject_h */
