//
//  Location.hpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 11/10/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#ifndef Location_h
#define Location_h

#include "stdafx.h"
#include "GameObject.h"
#include "Inventory.h"
#include "IHaveInventory.hpp"

class Location : public GameObject, public IHaveInventory
{
public:
    Location(string name, string desc, string ids[]);
    ~Location();
    void AddDestination(string name);
    vector<string> GetDestination();
    virtual GameObject* Locate(string name);
    Inventory* GetInventory();
    
private:
    vector<string> _destinations;
    Inventory* _inventory;
};

#endif /* Location_h */
