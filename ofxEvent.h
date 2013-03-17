//
//  ofxEvent.h
//  ofxEvent
//
//  Created by Onishi Yoshito on 2/5/13.
//
//

#ifndef __ofxEvent__ofxEvent__
#define __ofxEvent__ofxEvent__

#include "ofMain.h"
#include "ofxOscMessage.h"

//----------------------------------------------------------------------------------------
typedef ofxOscMessage ofxEventMessage;
typedef ofEvent<ofxEventMessage> ofxEventType;

//----------------------------------------------------------------------------------------
extern ofxEventType &ofxEvent();

//----------------------------------------------------------------------------------------
#ifdef __cplusplus
extern "C" {
#endif

    void ofxNotifyEvent(ofxEventMessage &m);
    
#ifdef __cplusplus
}
#endif

#endif /* defined(__MOTIONER__ofxEvent__) */
