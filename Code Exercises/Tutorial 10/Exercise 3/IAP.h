//
//  IAP.h
//

#ifndef __IAPProjectDevelopmentTest1__IAP__
#define __IAPProjectDevelopmentTest1__IAP__

#include "AserveComs.h"

class IAP : public AserveComs  {
public:
    
    //---------------------------------------------------------------------------------
    // SHARED VARIABLES
    std::vector<int> noteVector;
    int playMode = false;

    //---------------------------------------------------------------------------------
    // FUNCTIONS
    void run ();

    //---------------------------------------------------------------------------------
    // CALLBACK FUNCTIONS
    
    void callbackNoteReceived  (int note, int velocity, int channel);
    //void callbackModWheelMoved (int value);
    //void callbackPitchbendWheelMoved (int value);
    void callbackCCValueChanged (int cc, int value);
    
    //void callbackMIDIRecived (MIDI message);
    //void callbackPixelGrid (int x, int y);
    
private:
    
};

#endif /* defined(__IAPProjectDevelopmentTest1__IAP__) */
