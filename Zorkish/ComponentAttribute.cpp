//
//  ComponentAttribute.cpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 26/10/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#include "ComponentAttribute.h"


ComponentAttribute::ComponentAttribute(bool CanTake, bool CanAttack)
{
    takeable = CanTake;
    attackable = CanAttack;
}

ComponentAttribute::~ComponentAttribute()
{
    
}

bool ComponentAttribute::CanTake()
{
    return takeable;
}

bool ComponentAttribute::CanAttack()
{
    return attackable;
}
