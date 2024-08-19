//
//  IAP.cpp
//  IAPProjectDevelopmentTest1
//
//  Created by Samuel Hunt on 16/07/2018.
//  Copyright (c) 2018 SJHDevelopment. All rights reserved.
//

#include "IAP.h"
#include <iostream>

void IAP::run ()
{
    // display a welcome message
    std::cout << "Welcome to the music sequencer\n"

    // these three lines setup our 'default' sequence
    // remove these if you want the program to start silent
    notes.push_back( 60 );
    notes.push_back( 64 );
    notes.push_back( 67 );

    playMode = true; // begin in play mode
    while (true) 
    {
        std::cout << "There are " << notes.size() << " notes in the sequence\n";
        if( playMode )
        {
            for(int i=0; i<notes.size(); i++) // process each note, in order
            {
                int note = notes[i];                            // get note at index 'i'
                float frequency = 440 * pow(2, (note-69)/12.0); // calculate current note frequency
                float amplitude = 0.5;                          // fixed amplitude
                aserveOscillator(0, frequency, amplitude, 0);   // let's hear the current note
                aserveSleep( 500 );                             // wait for half a second
            }
        }
        aserveSleep( 500 ); // wait for half a second before repeating    
    }
}

void IAP::callbackCCValueChanged (int cc, int value)
{
    if( cc == 114 ) playMode = false; // stop playback if the stop button is pushed
}

void IAP::callbackNoteReceived  (int note, int velocity, int channel)
{
    notes.push_back( note ); // record notes into the sequence
}
