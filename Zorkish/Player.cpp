//
//  Player.cpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 28/9/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#include "Player.h"

Player::Player() : GameObject("me", "this is me", (string[]){"me", "inventory"}, false, true, 100, 2)
{
    _inventory = new Inventory();
}

Player::~Player()
{
    delete _location;
}

GameObject* Player::Locate(string name)
{
    if(AreYou(name))
        return this;
    else if(_inventory->HasItem(name))
        return _inventory->Fetch(name);
    else
        return _location->Locate(name);
}

string Player::GoTo(Location* location)
{
    _location = location;
    return  "  - " + _location->Description();
}

void Player::SetLocation(Location* location)
{
    _location = location;
}

vector<string> Player::GetDestinationNames()
{
    return _location->GetDestination();
}

Location* Player::GetCurrentLocation()
{
    return _location;
}

Inventory* Player::GetInventory()
{
    return _inventory;
}
