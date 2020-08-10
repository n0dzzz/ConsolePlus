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
		std::cout << "\n";
	}

	void typingText(std::string message, int delay)
	{
		for (int i = 0; i < message.length(); ++i )
		{ 
			Sleep(delay);
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

	void loadingText(std::string message, int delay)
	{
		std::cout << message;
		
		Sleep(delay);
		std::cout << ".";

		Sleep(delay);
		std::cout << ".";

		Sleep(delay);
		std::cout << ". \n";
	}

	void print(std::string message)
	{
		std::cout << message;
	}

	void println(std::string message)
	{
		std::cout << message << std::endl;
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