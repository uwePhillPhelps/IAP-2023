# Workshop 1 – Playful and creative exploration

Welcome to IAP (Introductory audio programming)

<img src="images/start-ignition.jpeg" alt="ignition" height="200px"></img><img src="images/filestruct.png" alt="screenshot of the file and folder structure of the downloaded materials" height="200px"></img>

This workshop will introduce the tools used on the module in a creative and playful way. The idea is to familiarise you with the lab machines, and how we will use the hardware and software on the Introductory Audio Programming module. 

## Getting started

Your **first task** is to download the IAP repository (which contains all of the required materials and applications for the module)

::➡️:: [Download master branch zip file](../../../archive/refs/heads/master.zip) ::⬅️::

Staff can help you set up your own machine for working off-campus, but for now, let's use the lab machines. **University lab machines already have almost everything installed and ready to roll** 😊👍 

## Aserve and the IAP project working together

Once you have downloaded the repository, the next step is to open the Aserve application which looks like the screenshot below.

<img src="images/aserve_screen_shot_a.png" alt="screenshot of the aserve application window" height="300px"></img>

1. Navigate to the apps folder of the IAP materials that you have downloaded and
2. Open the `Aserve226` application **by right-clicking and choosing the `OPEN` menu option**
3. You may see security warnings (shown below) please accept the security warnings

<img src="images/AserveRightclick.png" alt="use the right-click menu to open the aserve226 application" height="300px"></img>
<img src="images/AserveTrust.png" alt="you may safely accept a warning to open the files downloaded" height="300px"></img>

If successful, the Aserve application window will open, but you'll quickly notice that there is no sound (nor much of a response at all!) when you move controls, dials, sliders, or press keys. 

<img src="images/AserveXcodeYourProgram.png" alt="diagram showing how the aserve application works in tandem with the iapProj materials provided - on this module we will introduce audio programming concepts"></img>

The aserve application works in tandem with the iapProj materials provided, and on this module we will teach you how to design and write programs that control how Aserve makes sound in response to your controls. 😀

Code that you write on the module will act as a "decision maker". When you move controls and press keys, code will tell Aserve to generate sound.

## Opening the IAP Project

For this session, we'll use ready-made code. We'll explore it more deeply in later sessions, but for now we'll use it to demonstrate some Aserve features and to explore some of the creative potential. 

The next step is to open the "iapProj" in the Apple Xcode editor software.

<img src="images/filestruct.png" alt="screenshot of the file and folder structure of the downloaded materials" height="200px"></img>

1. Look for the iapProj-M folder (the IAP project for Apple M-series CPUs)
2. Expand the folder structure until you can see the Builds > MacOSX > iapProj.xcodeproj file
3. Double click this to open the Xcode editor application automatically load in our project

You may need to accept and close various warnings and welcoming information screens and messages shown below.

<img src="images/IAPprojTrust.png" alt="you may safely accept a warning to open the files downloaded" height="300px"></img><img src="images/WhatsNewInXcode.png" alt="you may safely close any welcoming information screen explaining 'what is new in xcode'" height="300px"></img>

After the Xcode editor application has loaded

1. Click the run button (▶️) shown in the upper left of the Xcode interface
2. You may see additional security messages which you should accept to proceed

<img src="images/xcode15Interface.png" alt="xcode interface run button" height="100px"></img><img src="images/AccessYourDownloadsFolder.png" alt="security request for access to your downloads folder" height="200px">

After a short wait, a success message should appear.

<img src="images/xcodeBuildSucceded.png" alt="xcode notification build succeded" height="200px">

## Is this thing on?

Now that our "iapProj" program is running, Aserve will make sound. Return to the Aserve application. If you've accidentally closed it don't worry, just re-open it. 😊

If everything has gone to plan, Aserve will already be playing a simple drum pattern, and you can play the on-screen keys to make pitched sounds.
You should also be able to use the physical hardware controller keyboard to trigger and control the sound.

## Some suggestions for creative exploration

The xcode editor should look similar to the screenshot below

Use the panel on the left to select the `iapProj` > `Source` > `IAP.cpp` file for editing.

<img src="images/xcode.png" alt="xcode editor with IAP.cpp file selected for editing">

Please read the explanatory text in the `IAP.cpp` file, the most important aspects to note are:

1. The behaviour of the program can be altered by editing
2. We have prepared simple `#define` definitions for creative exploration
3. You may break the program, but it's easy to undo with `CMD+Z` to restore a working state.
   * Actually we encourage you to hack and break our code - it's a **great** way to test limits and gain experience!

### Make a Jazz Noise Here 👍

Let's try some of the ideas below. There are plenty of ways to customise the way Aserve behaves. Feel free to explore these in any order.

You can edit code directly in the Xcode editor. To test and run your edited code in the "iapProj" program, use the xcode run button (▶️).

1. - We have set HIGH_OCTAVE_MOD and LOW_OCTAVE_MOD to be 12 and -12 respectively... could you create chords by changing these?
2. - We have the option to USE_DRUMS... can you perform a song while the drums are playing?
3. - Set the BPM really high... we dare ya!
4. - Some note intervals, like a flat second (e.g. C and Db; one semitone apart) or a sharp fifth (e.g. C and F#; 6 semitone apart) sound a bit spicy... could you recreate these by changing HIGH_OCTAVE_MOD or LOW_OCTAVE_MOD?
5. - Other intervals, like a major third (e.g. C and E; 4 notes apart) or a perfect fifth (e.g. C and G; 7 notes apart) sound quite pleasing... could you recreate these by changing HIGH_OCTAVE_MOD or LOW_OCTAVE_MOD?
6. - Why limit yourself to one octave? Can you take HIGH_OCTAVE_MOD or LOW_OCTAVE_MOD into higher or lower realms to create a synthesiser that does Bass, Lead and Harmony lines simultaneously?
7. - Using Chords and Octave Mods, what is the biggest chord you can make? What does this do to the sound of the synthesiser?

### A challenge?
If you're thinking 'Amazing! This is great and I want to delve in further!' then here are a few challenges to try. NOTE: you are NOT expected to complete these challenge tasks, they're there if you want more! That said, by the end of IAP, we promise these will be trivial to you; delve in at your own peril!!!
* Can you change the chord intervals to make new chords?
* In many Western tuning systems, it is suggested that the note A is 440Hz as a frequency and we calculate other notes based on this. Can you find this number in the IAP.h file and change it to something else? What happens?
* In the same area that we use 440, we also divide by 12 to organise our keyboard into octaves, what happens if we change THIS number?
* We have deliberately limited the BPM to max out at 1000... you can change this limit if you like! What happens?

* Try cutting slices from the sounds provided in [this UWE OneDrive link here](https://uweacuk-my.sharepoint.com/:f:/g/personal/philip3_phelps_uwe_ac_uk/EkEZ-XX7PwNMr_RuA7siG8MBbKoqiaUR-0cM__XpEPhF4Q)

## Wrapping up - preparing for next week

Now that we're at the end of this session you should be familiar with: 

1.	The Apple workstations in the faculty labs. 
2.	The Xcode development environment.
3.	The Aserve application and some of its features.

### A little more about the module

Throughout this module you will learn important fundamental programming skills and concepts by writing programs that perform audio and music related tasks. 

All IAP learning materials are provided upfront - organised so that you can work at your own pace - but we will examine topics in classes on a week by week schedule. Each tutorial introduces a new programming concept which will be explored and exercised in the C++ programming language. 

Programmed electronic devices are abundant in every sector of the music industry. In whichever area you choose to focus your studies - in the creation or use of audio technology - an intimate understanding of the inner workings of these devices will naturally enhance your abilities.

See you next week!
