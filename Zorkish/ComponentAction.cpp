//
//  ComponentAction.cpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 26/10/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#include "ComponentAction.h"

ComponentAction::ComponentAction(int health, int damage)
{
    _damage = damage;
    _health = health;
}

ComponentAction::~ComponentAction()
{
    
}

void ComponentAction::SetHealth(int health)
{
    _health = health;
}

void ComponentAction::SetDamage(int damage)
{
    _damage = damage;
}

int ComponentAction::GetHealth()
{
    return _health;
}

int ComponentAction::GetDamage()
{
    return _damage;
}




