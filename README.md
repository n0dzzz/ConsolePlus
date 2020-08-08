# ConsolePlus

<h1>About</h1>

ConsolePlus is a library for C++ that contains functions to help develop C++ Console Projects.

<h1> Installation </h1>

Step 1: Download the current release version.

Step 2: Find a C++ Console Project you would like to use ConsolePlus in.

Step 3: Place the folder you downloaded into your C++ Console Project

Step 4: Then go to your projects settings in your IDE find your linker settings then under <h3>Additional Library Directorys</h3> and then paste the file path of where your ConsolePlus is located

Step 5: Then in your Linker settings find a place for additional dependencies and put in <h3> ConsolePlus.lib </h3> in visual studio its under Linker > Input

Step 6: Find a cpp or header file you would like to use ConsolePlus in then at the top of the file entering this code

``` #include ConsolePlus/ConsolePlus.h ```
                                



<h1> Documentation </h1>

<h2> Functions </h2>

```

clear(); // Clears the entire console

delayClear(int time); // The Clear function that takes a parameter for a delay before clearing

space(); // Spaces a line in the console

typingText(std::string message); // A function that takes a message parameter you can put a string into, it will have a delay between each letter and will make a typing like effect

Epilepsy(); // Something I did on accident it looks pretty cool but can cause alot of strain on the eyes use with caution

```
