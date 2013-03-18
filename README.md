ofxEvent
========

ofxOscMessage style messaging

----

### Notify message

    /// send a message
    ofxEventMessage m;
    m.setAddress("/myInt");
    m.addIntArg(1234);
    ofxNotifyEvent(m);
    
### Receive message

	class ofApp : public ofBaseApp {
	public:
	    void setup()
	    {
	        ofAddListener(ofxEvent(), this, &ofApp::onMessageReceived);
	    }
	    
	    void onMessageReceived(ofxEventMessage &m)
	    {
	        const string addr = m.getAddress();
	        
	        if (addr=="/myInt")
	            ofLogNotice() << m.getArgAsInt32(0);
	    }
	};