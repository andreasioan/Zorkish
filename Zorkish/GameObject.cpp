//
//  GameObject.cpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 28/9/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#include "GameObject.h"

GameObject::GameObject(string name, string desc, string ids[], bool CanTake, bool CanAttack, int health, int damage) : IdentifiableObject(ids)
{
    _name = name;
    _desciption = desc;
    _action = new ComponentAction(health, damage);
    _attribute = new ComponentAttribute(CanTake, CanAttack);
}

GameObject::~GameObject()
{
    
}

string GameObject::Name()
{
    return _name;
}

string GameObject::Description()
{
    return _desciption;
}

ComponentAttribute* GameObject::Attribute()
{
    return (ComponentAttribute*)_attribute;
}

ComponentAction* GameObject::Action()
{
    return (ComponentAction*)_action;
}

vector<string>* GameObject::GetMessages()
{
    return &_messages;
}

//Looks for messages in blackboard and updates object with new health stored in message
void GameObject::Update(Blackboard& blackboard)
{
    for(int i = 0; i < blackboard.GetMessages().size(); i++)
    {
        //Checks blackboard to see if there any messages for this object
        if( blackboard.GetMessages()[i] == _name || blackboard.GetMessages()[i] == "Global")
        {
            //acts upon related message
            Action()->SetHealth(atoi(blackboard.GetMessages()[i + 1].c_str()));
        }
    }

}

