//
//  ofxEvent.cpp
//  ofxEvent
//
//  Created by Onishi Yoshito on 2/5/13.
//
//

#include "ofxEvent.h"

//----------------------------------------------------------------------------------------
ofxEventType &ofxEvent()
{
    static ofxEventType event;
    return event;
}

//----------------------------------------------------------------------------------------
void ofxNotifyEvent(ofxEventMessage &m)
{
    ofNotifyEvent(ofxEvent(), m);
}