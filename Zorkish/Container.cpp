//
//  Container.cpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 14/10/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#include "Container.h"

Container::Container(string name, string desc, string ids[], bool take, bool canAttack, int health, int damage) : Item(name, desc, ids, take, canAttack, health, damage)
{
    _inventory = new Inventory();
    Allowed = true;
}

Container::~Container()
{
    delete _inventory;
}

GameObject* Container::Locate(string name)
{
    if (AreYou(name))
        return this;
    else
        return _inventory->Fetch(name);
}

Inventory* Container::GetInventory()
{
    return _inventory;
}
