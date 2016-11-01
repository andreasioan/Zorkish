//
//  Player.hpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 28/9/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#ifndef Player_h
#define Player_h

#include "stdafx.h"
#include <stdio.h>
#include "GameObject.h"
#include "IHaveInventory.hpp"
#include "Inventory.h"
#include "Location.h"
#include "LocationManager.h"




class Player : public GameObject, public IHaveInventory
{
public:
    Player();
    ~Player();
    virtual GameObject* Locate(string name);
    Inventory* GetInventory();
    void SetLocation(Location* location);
    vector<string> GetDestinationNames();
    string GoTo(Location* location);
    virtual Location* GetCurrentLocation();
private:
    Inventory* _inventory;
    Location* _location;
    
};


#endif /* Player_h */
