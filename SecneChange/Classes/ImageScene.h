//
//  ImageScene.h
//  SecneChange
//
//  Created by chenhao on 14-10-28.
//
//

#ifndef __SecneChange__ImageScene__
#define __SecneChange__ImageScene__

#include <stdio.h>
#include <cocos2d.h>

USING_NS_CC;

class ImageScene :public Layer {
    
    
public:
    
    virtual bool init();
    
    static Scene* creatScene();
    
    CREATE_FUNC(ImageScene);
};

#endif /* defined(__SecneChange__ImageScene__) */

