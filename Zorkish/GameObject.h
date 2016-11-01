//
//  GameObject.hpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 28/9/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#ifndef GameObject_h
#define GameObject_h

#include <stdio.h>
#include "stdafx.h"
#include "IdentifiableObject.h"
#include "ComponentAction.h"
#include "ComponentAttribute.h"
#include "Blackboard.h"

class GameObject : public IdentifiableObject
{
public:
    GameObject(string name, string desc, string ids[], bool CanTake, bool CanAttack, int health, int damage);
    virtual ~GameObject();
    string Name();
    string Description();
    ComponentAttribute* Attribute();
    ComponentAction* Action();
    vector<string>* GetMessages();
    void Update(Blackboard& blackboard);
private:
    string _desciption;
    string _name;
    Component* _action;
    Component* _attribute;
    vector<string> _messages;
};

#endif /* GameObject_h */
