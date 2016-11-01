//
//  ComponentAction.hpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 26/10/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#ifndef ComponentAction_h
#define ComponentAction_h

#include "stdafx.h"
#include "Component.h"

class ComponentAction : public Component
{
public:
    ComponentAction(int health, int damage);
    ~ComponentAction();
    int GetHealth();
    int GetDamage();
    void SetHealth(int health);
    void SetDamage(int damage);
    
private:
    int _damage;
    int _health;
};

#endif /* ComponentAction_h */
