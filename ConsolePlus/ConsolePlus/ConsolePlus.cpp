#include <iostream>
#include "ConsolePlus.h"

namespace console 
{
	void clear()
	{
		system("CLS");
	}

	void delayClear(int time)
	{
		Sleep(time);
		console::clear();
	}
	
	void space()
	{
		printf("");
	}

	void typingText(std::string message)
	{
		for (int i = 0; i < message.length(); ++i )
		{ 
			Sleep(300);
			std::cout << message[i];

		}
	}

	void Epilepsy(std::string message)
	{
		for (int i = 0; i < message.length(); i)
		{
			std::cout << red << message[i];
			std::cout << orange << message[i];
			std::cout << yellow << message[i];
			std::cout << green << message[i];
			std::cout << blue << message[i];
			std::cout << darkblue << message[i];
			std::cout << purple << message[i];
		}
	}

	void randNum(int var, int limit)
	{
		srand(time(0));
		var = rand() % limit + 1;
		std::cout << var << std::endl;
	}

	/*void cin(std::string inputVar)
	{
		std::getline(std::cin, inputVar);
	}
	*/

	/* void rainbowText(std::string message)
	{
		for (int i = 0; i < message.length(); ++i)
		{
			std::cout << red << message[i];
			std::cout << orange << message[i];
			std::cout << yellow << message[i];
			std::cout << green << message[i];
			std::cout << blue << message[i];
			std::cout << darkblue << message[i];
			std::cout << purple << message[i];
		}
	}
	*/
}