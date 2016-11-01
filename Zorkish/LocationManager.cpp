//
//  LocationManager.cpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 11/10/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#include "LocationManager.h"

LocationManager::LocationManager()
{
    _otherLocations = ImportLocations();
}

LocationManager::~LocationManager()
{
    
}

vector<Location*> LocationManager::ImportLocations()
{
    vector<Location*> loc;
    string name;
    string desc;
    
    
    string line;
    ifstream file ("/Users/andreasioannidis/Dropbox/UniLyf/2016/Sem2/GamesProgramming/Tasks/Spike11/Zorkish/Zorkish/locationsData.txt");
    if (file.is_open())
    {
        while(getline(file, line))
        {
            if(line == "NEW")
            {
                getline(file, line);
                
                if (line == "NAME")
                {
                    getline(file, line);
                    name = line;
                }
                
                getline(file, line);
                
                if(line == "DESC")
                {
                    getline(file, line);
                    desc = line;
                }
                
                Location* location = new Location(name, desc, (string[]){name});
                
                while (getline(file, line))
                {
                    if (line == "LINK")
                    {
                        getline(file, line);
                        location->AddDestination(line);
                    }
                    else
                        break;
                }
                
                while (true)
                {
                    if(line == "ITEM")
                    {
                        getline(file, line);
                        string itmName;
                        string itmDesc;
                        
                        if(line == "NAME")
                        {
                            getline(file, line);
                            itmName = line;
                        }
                        
                        getline(file, line);
                        
                        if(line == "DESC")
                        {
                            getline(file, line);
                            itmDesc = line;
                        }
                        
                        getline(file, line);
                        
                        int health = 0;
                        
                        if(line == "HEALTH")
                        {
                            getline(file, line);
                            health = atoi(line.c_str());
                        }
                        
                        getline(file, line);
                        
                        int damage = 0;
                        
                        if(line == "DAMAGE")
                        {
                            getline(file, line);
                            damage = atoi(line.c_str());
                        }
                        
                        Item* itm = new Item(itmName, itmDesc, (string[]){itmName}, true, false, health, damage);
                        
                        location->GetInventory()->Put(itm);
                      //  cout << "item added - " << itmName << " : " << itmDesc << endl;
                        
                        getline(file, line);
                    }
                    else
                        break;
                }
                
                while(true)
                {
                    if(line == "CONTAINER")
                    {
                        getline(file, line);
                        string conName;
                        string conDesc;
                        
                        if(line == "NAME")
                        {
                            getline(file, line);
                            conName = line;
                        }
                        
                        getline(file, line);
                        
                        if(line == "DESC")
                        {
                            getline(file, line);
                            conDesc = line;
                        }
                        
                        getline(file, line);
                        
                        int health = 0;
                        
                        if(line == "HEALTH")
                        {
                            getline(file, line);
                            health = atoi(line.c_str());
                        }
                        
                        getline(file, line);
                        
                        int damage = 0;
                        
                        if(line == "DAMAGE")
                        {
                            getline(file, line);
                            damage = atoi(line.c_str());
                        }

                        getline(file, line);
                        
                        bool canAttack = false;
                        
                        if(line == "TAKEABLE")
                        {
                            getline(file, line);
                            
                            if(line == "true")
                                canAttack = true;
                            else
                                canAttack = false;
                        }
                        
                        Container* container = new Container(conName, conDesc, (string[]){conName}, false, canAttack, health, damage);
                        
                        getline(file, line);
                        
                        while (true)
                        {
                            if(line == "ITEM")
                            {
                                getline(file, line);
                                string itmName;
                                string itmDesc;
                                
                                if(line == "NAME")
                                {
                                    getline(file, line);
                                    itmName = line;
                                }
                                
                                getline(file, line);
                                
                                if(line == "DESC")
                                {
                                    getline(file, line);
                                    itmDesc = line;
                                }
                                
                                getline(file, line);
                                
                                int health = 0;
                                
                                if(line == "HEALTH")
                                {
                                    getline(file, line);
                                    health = atoi(line.c_str());
                                }
                                
                                getline(file, line);
                                
                                int damage = 0;
                                
                                if(line == "DAMAGE")
                                {
                                    getline(file, line);
                                    damage = atoi(line.c_str());
                                }

                                
                                Item* conItm = new Item(itmName, itmDesc, (string[]){itmName}, true, false, health, damage);
                                
                                container->GetInventory()->Put(conItm);
                                
                                getline(file, line);
                            }
                            else
                                break;
                        }
                        
                        location->GetInventory()->Put(container);
                        
                        
                    }
                    else
                        break;
                }
                
                if(line == "END")
                {
                    loc.push_back(location);
                }
            }
        }
    }
    
    return loc;
}

Location* LocationManager::GetLocation(string location)
{
    for (int i = 0; i < _otherLocations.size(); i++)
    {
        if (_otherLocations[i]->AreYou(location))
            return _otherLocations[i];
    }
    
    return NULL;
}

vector<Location*> LocationManager::GetOtherLocations()
{
    return _otherLocations;
}


