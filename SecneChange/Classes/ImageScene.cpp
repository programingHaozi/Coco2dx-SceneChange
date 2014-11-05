//
//  ImageScene.cpp
//  SecneChange
//
//  Created by chenhao on 14-10-28.
//
//

#include "ImageScene.h"

Scene* ImageScene::creatScene(){
    
    Scene *scene = Scene::create();
    
    ImageScene *layer = ImageScene::create();
    scene ->addChild(layer);
    
    return scene;
}


bool ImageScene::init(){
    
    Size size = Director::getInstance()->getVisibleSize();
    Sprite *s = Sprite::create("HelloWorld.png");
    s ->setPosition(size.width/2, size.height/2);
    addChild(s);
    return true;
    
}