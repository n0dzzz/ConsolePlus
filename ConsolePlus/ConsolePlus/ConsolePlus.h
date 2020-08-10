#pragma once
#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include "Color.h"
#include <string>
#include <time.h>

namespace console 
 {

	void clear();

	void delayClear(int time);

	void space();

	void typingText(std::string message, int delay);

	void Epilepsy(std::string message);

	void randNum(int var, int limit);

	void loadingText(std::string message, int delay);

	void print(std::string message);

	void println(std::string message);



	// void cin( std::string inputVar);
	// void rainbowText(std::string message);


}