//
//  IHaveInventory.hpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 13/10/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#ifndef IHaveInventory_hpp
#define IHaveInventory_hpp

#include "stdafx.h"
#include "GameObject.h"
#include "Inventory.h"

class IHaveInventory
{
public:
//    IHaveInventory();
    virtual ~IHaveInventory();
    
    virtual GameObject* Locate(string name) = 0;
    virtual Inventory* GetInventory() = 0;

};

#endif /* IHaveInventory_hpp */
