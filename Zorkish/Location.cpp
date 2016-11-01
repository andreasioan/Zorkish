//
//  Location.cpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 11/10/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#include "Location.h"

Location::Location(string name, string desc, string ids[]) : GameObject(name, desc, ids, false, false, 0, 0)
{
    _inventory = new Inventory();
}

Location::~Location()
{
    delete _inventory;
}

Inventory* Location::GetInventory()
{
    return _inventory;
}

void Location::AddDestination(string name)
{
    _destinations.push_back(name);
}

vector<string> Location::GetDestination()
{
    return _destinations;
}

GameObject* Location::Locate(string name)
{
    if (AreYou(name))
        return this;
    else
        return _inventory->Fetch(name);
}
