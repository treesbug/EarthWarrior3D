//
//  Plane.cpp
//  Moon3d
//
//  Created by Rye on 14-3-13.
//
//

#include "Plane.h"
#include "3d/Sprite3D.h"
#include "PublicApi.h"

Plane::Plane():pXW(1.1f),pYW(5.0f), pZW(1.0f),pXA(1.0f),pYA(10.0f),pZA(7.0f)
{
		pRate = 3.1415926f/2;
		originX = -15.0f;
		originY = 159.0f;
		originZ = 9.0f;
}

bool Plane::init(){
    _Model = Sprite3D::create("playerv002.obj", "playerv002_256.png");
	
    if(_Model){
        _Model->setScale(55);
        ((Sprite3D*)_Model)->setOutline(0.035f, Color3B::BLACK);
        _Model->setRotation3D(Vertex3F(originX,originY,originZ));
        this->setRotation3D(Vertex3F(originX, originY, originZ));
        this->addChild(_Model);
        this->scheduleUpdate();
    }
    return true;
}

void Plane::update(float dt){
    pRate+=0.01f;
    _Model->setRotation3D(Vertex3F(0-pXA*sin(pXW*pRate),0,0-pZA*sin(pZW*pRate)));
}