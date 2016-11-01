//
//  ComponentAttribute.hpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 26/10/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#ifndef ComponentAttribute_h
#define ComponentAttribute_h

#include "stdafx.h"
#include "Component.h"

class ComponentAttribute : public Component
{
public:
    ComponentAttribute(bool CanTake, bool CanAttack);
    ~ComponentAttribute();
    bool CanTake();
    bool CanAttack();
private:
    bool takeable;
    bool attackable;
};

#endif /* ComponentAttribute_h */
