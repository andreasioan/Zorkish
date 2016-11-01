//
//  Inventory.hpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 28/9/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#ifndef Inventory_h
#define Inventory_h

#include "stdafx.h"
#include <stdio.h>
#include "GameObject.h"
#include "Item.h"
#include <vector>



class Inventory
{
public:
    Inventory();
    ~Inventory();
    void Put(Item* itm);
    Item* Take(string name);
    Item* Fetch(string name);
    bool HasItem(string id);
    bool CanTakeItem(string name);
    string ItemList();
    void Update(Blackboard& blackboard);
    
    int Size();
private:
    vector<Item*> _items;
};

#endif /* Inventory_h */
