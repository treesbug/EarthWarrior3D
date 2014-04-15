//
//  ScrollingBackground.h
//  Moon3d
//
//  Created by Hao Wu on 2/24/14.
//
//

#ifndef __Moon3d__GameLayer__
#define __Moon3d__GameLayer__
#include "cocos2d.h"
USING_NS_CC;
class Player;
//class QuadTree;
class AirCraft;
class GameEntity;
class GameLayer : public Layer
{
public:
    virtual bool init();
    void update(float dt);
    CREATE_FUNC(GameLayer);
    static bool isDie;
    //virtual void onEnter();
	GameLayer():xScroll(0.0f),speed(-60.0f),_elapsed(20),_bossOut(false)
	{
	}
protected:
    float xScroll;
    float speed;
    Sprite *_spr;
    Sprite *_cloud;
    Player *_player;
    MotionStreak *_streak;
    ParticleSystemQuad *_emissionPart;
    void schedulePlayer();
    //QuadTree *_collisionTree;
    


    //QuadTree *container;
    void gameMaster(float dt);
    float _elapsed; //testing purpose, this was set to near boss timer
    bool _bossOut;
    
private:
    void removeBulletAndEnmeys(float dt);
};
#endif /* defined(__Moon3d__GameLayer__) */