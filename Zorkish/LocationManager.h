//
//  LocationManager.hpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 11/10/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#ifndef LocationManager_h
#define LocationManager_h


#include "stdafx.h"
#include <fstream>
#include "Location.h"
#include "Container.h"

class LocationManager
{
public:
    LocationManager();
    ~LocationManager();
    
    vector<Location*> ImportLocations();
    
    Location* GetLocation(string location);
    vector<Location*> GetOtherLocations();
private:
    vector<Location*> _otherLocations;
    
};

#endif /* LocationManager_h */
