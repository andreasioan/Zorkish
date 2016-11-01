//
//  SelectAdventure.hpp
//  Zorkish
//
//  Created by Andreas Ioannidis on 21/9/16.
//  Copyright © 2016 Andreas Ioannidis. All rights reserved.
//

#include <iostream>
using namespace std;

#include "Game.h"

int main(int argc, const char * argv[]) {
    Game* _game = new Game();
    
    _game->Draw();
    
    while (true)
    {
        _game->HandleInput();
        
        _game->Update();
        
        _game->Draw();
        
    }
    
    return 0;
}
