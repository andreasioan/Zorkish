//
//  Inventory.cpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 28/9/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#include "Inventory.h"

Inventory::Inventory()
{
    
}

Inventory::~Inventory()
{
    
}

void Inventory::Put(Item* itm)
{
       _items.push_back(itm);
}

Item* Inventory::Take(string name)
{
    Item* result = NULL;
    
    for(int i = 0; i < _items.size(); i++)
    {
        if (_items[i]->AreYou(name))
        {
            result = _items[i];
            
            _items.erase(remove(_items.begin(), _items.end(), _items[i]), _items.end());
        }
    }
    
    return result;
}

Item* Inventory::Fetch(string name)
{
    for (int i = 0; i < _items.size(); i++)
    {
        if(_items[i]->AreYou(name))
            return _items[i];
    }
    
    return NULL;
}

bool Inventory::HasItem(string id)
{
    for(int i = 0; i < _items.size(); i++)
    {
        if(_items[i]->AreYou(id))
            return true;
    }
    
    return false;
}

bool Inventory::CanTakeItem(string id)
{
    for(int i = 0; i < _items.size(); i++)
    {
        if(_items[i]->AreYou(id))
            return _items[i]->Attribute()->CanTake();
    }
    
    return false;
}

string Inventory::ItemList()
{
    string result;
    
    for (int i = 0; i < _items.size(); i++)
    {
        result += "     - " + _items[i]->Name() + "\n";
    }
    //result += "\n";
    return result;
}

void Inventory::Update(Blackboard& blackboard)
{
    for(int i = 0; i<_items.size(); i++)
    {
        _items[i]->Update(blackboard);
    }
}

int Inventory::Size()
{
    return _items.size();
}
