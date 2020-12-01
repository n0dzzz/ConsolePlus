# ConsolePlus

<h1>About</h1>

I decided to unprivate this. Has a few useful functions. I would like to continue work on this one day but probably won't for awhile 

<h1> Installation </h1>

Step 1: Download the current release version.

Step 2: Find a C++ Console Project you would like to use ConsolePlus in.

Step 3: Place the folder you downloaded into your C++ Console Project

Step 4: Find a cpp or header file you would like to use ConsolePlus in then at the top of the file entering this code

``` #include ConsolePlus/ConsolePlus.h ```
                                



<h1> Documentation </h1>

<h3> The namespace for this library is console, if you would like you can use * using namespace console; * </h3>

<h2> Functions </h2>

```

clear(); // Clears the entire console

delayClear(int time); // The Clear function that takes a parameter for a delay before clearing

space(); // Spaces a line in the console

typingText(std::string message); // A function that takes a message parameter you can put a string into, it will have a delay between each letter and will make a typing like effect

Epilepsy(); // Something I did on accident it looks pretty cool but can cause alot of strain on the eyes use with caution

randNum(int var, int limit) // Generates a random number that get stored in a varible that then can be output . Needs a varible and a limit for the value of the number generated. 

loadingText(std::string message, int delay) // A function that outputs your message with three dots at the end. Takes in a string for a message and a int for a delay between dots

print() // Prints your message and dosen't end line. Only useful if your using namespace console

println() // Prints your message and ends the line. Only useful if your using namespace console

```
