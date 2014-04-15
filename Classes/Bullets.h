//
//  Bullet.h
//  Moon3d
//
//  Created by Hao Wu on 3/4/14.
//
//

#ifndef __Moon3d__Bullet__
#define __Moon3d__Bullet__

#include "cocos2d.h"
#include "GameEntity.h"



class Bullet : public GameEntity
{
public:
    CREATE_FUNC(Bullet);
    bool init();
    void setVector(Point vec);
    Point getVector();
    virtual void reset();
    CC_SYNTHESIZE(float, _damage, Damage);
    CC_SYNTHESIZE(int, _owner, Owner)
protected:
    Point _vector;
};

class PlayerBullet : public Bullet
{
public:
    CREATE_FUNC(PlayerBullet);
    bool init();
};

class Missile : public Bullet
{
public:
    CREATE_FUNC(Missile);
    bool init();
    void update(float dt);
    CC_SYNTHESIZE(GameEntity*, _target, Target)
    virtual void reset();
	Missile():_accel(15),_turnRate(180),_yRotSpeed(1400),_yRotation(0),_left(false),_velocity(0),_target(nullptr)
	{
	}
protected:
    float _accel;
    float _turnRate;
    //float _maxSpeed = 100;
    float _yRotSpeed;
    float _yRotation;
    bool _left;
    float _velocity;
};

#endif /* defined(__Moon3d__Bullet__) */
