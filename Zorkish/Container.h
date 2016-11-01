//
//  Container.hpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 14/10/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#ifndef Container_h
#define Container_h

#include "stdafx.h"
#include "GameObject.h"
#include "Inventory.h"
#include "IHaveInventory.hpp"

class Container : public Item, public IHaveInventory
{
public:
    Container(string name, string desc, string ids[], bool take, bool canAttack, int health, int damage);
    ~Container();
    
    virtual GameObject* Locate(string name);
    virtual Inventory* GetInventory();
    bool Allowed;
private:
    Inventory* _inventory;
};

#endif /* Container_h */
