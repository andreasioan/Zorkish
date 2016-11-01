//
//  Item.hpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 28/9/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#ifndef Item_h
#define Item_h

#include "stdafx.h"
#include <stdio.h>
#include "GameObject.h"




class Item :
public GameObject
{
public:
    Item(string name, string desc, string ids[], bool canTake, bool canAttack, int health, int damage);
    ~Item();
    
private:
    
};

#endif /* Item_h */
