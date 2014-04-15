//
//  Plane.h
//  Moon3d
//
//  Created by Rye on 14-3-13.
//
//

#ifndef __Moon3d__Plane__
#define __Moon3d__Plane__

#include <iostream>
#include "cocos2d.h"
#include "GameEntity.h"

class Plane :public GameEntity{
public:
    CREATE_FUNC(Plane);
    bool init();
	Plane();
private:
    float pRate;
    float originX;
    float originY;
    float originZ;
    const float pXW;
    const float pYW ;
    const float pZW ;
    const float pXA ;
    const float pYA ;
    const float pZA ;
    
    void update(float dt);
};

#endif /* defined(__Moon3d__Plane__) */
