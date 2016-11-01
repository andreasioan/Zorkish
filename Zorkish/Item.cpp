//
//  Item.cpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 28/9/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#include "Item.h"
Item::Item(string name, string desc, string ids[], bool canTake, bool canAttack, int health, int damage) : GameObject(name, desc, ids, canTake, canAttack, health, damage)
{
   // cout << "new item created" << endl;
    
}

Item::~Item()
{
    cout << "item destroyed" << endl;
}


