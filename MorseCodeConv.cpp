//*****************************************************************************
//*                                                                           *
//*  --------------------Letter to Morse Code Converter---------------------- *
//*                                                                           *
//*                 Original Code by Remus Vlad : 8/5/2020                    *
//*                      Last Updated : 11/30/2020                            *
//*                            Version 0.90                                   *
//*                                                                           *
//*  To-Do For Future Versions:                                               *
//*                                                                           *
//*    1. Dot/Dash Speed.                                                     *
//*    2. User Frequency Change                                               *
//*    3. Fix volume toggle.                                                  *
//*                                                                           *
//*****************************************************************************

#include <iostream>
#include <string>
#include <Windows.h>
#include <ctype.h>

// Converter takes string, frequency, dotspeed, dashspeed.
void converter(char a, int b, int dotSpeed, int dashSpeed)
{
	// Don't Look In Here, (I Warned You)
	switch (a)
	{
	case 'a':
		std::cout << ".-";
		Beep(b, dotSpeed);
		Beep(b, dashSpeed);
		break;
	case 'b':
		std::cout << "-...";
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		break;
	case 'c':
		std::cout << "-.-.";
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		break;
	case 'd':
		std::cout << "-..";
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		break;
	case 'e':
		std::cout << ".";
		Beep(b, dotSpeed);
		break;
	case 'f':
		std::cout << "..-.";
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		break;
	case 'g':
		std::cout << "--.";
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		break;
	case 'h':
		std::cout << "....";
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		break;
	case 'i':
		std::cout << "..";
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		break;
	case 'j':
		std::cout << ".---";
		Beep(b, dotSpeed);
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		break;
	case 'k':
		std::cout << "-.-";
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		Beep(b, dashSpeed);
		break;
	case 'l':
		std::cout << ".-..";
		Beep(b, dotSpeed);
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		break;
	case 'm':
		std::cout << "--";
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		break;
	case 'n':
		std::cout << "-.";
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		break;
	case 'o':
		std::cout << "---";
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		break;
	case 'p':
		std::cout << ".--.";
		Beep(b, dotSpeed);
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		break;
	case 'q':
		std::cout << "--.-";
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		Beep(b, dashSpeed);
		break;
	case 'r':
		std::cout << ".-.";
		Beep(b, dotSpeed);
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		break;
	case 's':
		std::cout << "...";
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		break;
	case 't':
		std::cout << "-";
		Beep(b, dashSpeed);
		break;
	case 'u':
		std::cout << "..-";
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		Beep(b, dashSpeed);
		break;
	case 'v':
		std::cout << "...-";
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		Beep(b, dashSpeed);
		break;
	case 'w':
		std::cout << ".--";
		Beep(b, dotSpeed);
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		break;
	case 'x':
		std::cout << "-..-";
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		Beep(b, dashSpeed);
		break;
	case 'y':
		std::cout << "-.--";
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		break;
	case 'z':
		std::cout << "--..";
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		break;
	/////UpperCase////////
	case 'A':
		std::cout << ".-";
		Beep(b, dotSpeed);
		Beep(b, dashSpeed);
		break;
	case 'B':
		std::cout << "-...";
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		break;
	case 'C':
		std::cout << "-.-.";
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		break;
	case 'D':
		std::cout << "-..";
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		break;
	case 'E':
		std::cout << ".";
		Beep(b, dotSpeed);
		break;
	case 'F':
		std::cout << "..-.";
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		break;
	case 'G':
		std::cout << "--.";
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		break;
	case 'H':
		std::cout << "....";
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		break;
	case 'I':
		std::cout << "..";
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		break;
	case 'J':
		std::cout << ".---";
		Beep(b, dotSpeed);
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		break;
	case 'K':
		std::cout << "-.-";
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		Beep(b, dashSpeed);
		break;
	case 'L':
		std::cout << ".-..";
		Beep(b, dotSpeed);
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		break;
	case 'M':
		std::cout << "--";
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		break;
	case 'N':
		std::cout << "-.";
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		break;
	case 'O':
		std::cout << "---";
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		break;
	case 'P':
		std::cout << ".--.";
		Beep(b, dotSpeed);
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		break;
	case 'Q':
		std::cout << "--.-";
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		Beep(b, dashSpeed);
		break;
	case 'R':
		std::cout << ".-.";
		Beep(b, dotSpeed);
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		break;
	case 'S':
		std::cout << "...";
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		break;
	case 'T':
		std::cout << "-";
		Beep(b, dashSpeed);
		break;
	case 'U':
		std::cout << "..-";
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		Beep(b, dashSpeed);
		break;
	case 'V':
		std::cout << "...-";
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		Beep(b, dashSpeed);
		break;
	case 'W':
		std::cout << ".--";
		Beep(b, dotSpeed);
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		break;
	case 'X':
		std::cout << "-..-";
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		Beep(b, dashSpeed);
		break;
	case 'Y':
		std::cout << "-.--";
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		break;
	case 'Z':
		std::cout << "--..";
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		break;
	case ' ':
		std::cout << "";
		break;
	case '0':
		std::cout << "-----";
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		break;
	case '1':
		std::cout << ".----";
		Beep(b, dotSpeed);
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		break;
	case '2':
		std::cout << "..---";
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		break;
	case '3':
		std::cout << "...--";
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		break;
	case '4':
		std::cout << "....-";
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		Beep(b, dashSpeed);
		break;
	case '5':
		std::cout << ".....";
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		break;
	case '6':
		std::cout << "-....";
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		break;
	case '7':
		std::cout << "--...";
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		break;
	case '8':
		std::cout << "---..";
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		break;
	case '9':
		std::cout << "----.";
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		break;
	case '&':
		std::cout << ".-...";
		Beep(b, dotSpeed);
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		break;
	case '@':
		std::cout << ".--.-.";
		Beep(b, dotSpeed);
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		break;
	case '.':
		std::cout << ".-.-.-";
		Beep(b, dotSpeed);
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		Beep(b, dashSpeed);
		break;
	case ',':
		std::cout << "--..--";
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		Beep(b, dotSpeed);
		Beep(b, dotSpeed);
		Beep(b, dashSpeed);
		Beep(b, dashSpeed);
		break;
	case '$':
		std::cout << "..--..";
		Beep(587.33, 434);  // D
		Beep(698.46, 326);  // F
		Beep(587.33, 217);  // D
		Beep(587.33, 108);  // D
		Beep(783.99, 217);  // G
		Beep(587.33, 217);  // D
		Beep(523.25, 217);  // C
		Beep(587.33, 434);  // D
		Beep(880.00, 326);  // A
		Beep(587.33, 217);  // D
		Beep(587.33, 108);  // D
		Beep(932.33, 217);  // A#
		Beep(880.00, 217);  // A
		Beep(698.46, 217);  // F
		Beep(587.33, 217);  // D
		Beep(880.00, 217);  // A
		Beep(1174.66, 217); // D^1
		Beep(587.33, 108);  // D
		Beep(523.25, 217);  // C
		Beep(523.25, 108);  // C
		Beep(440.00, 217);  // A
		Beep(659.25, 217);  // E
		Beep(587.33, 434);  // D
		break;
	
	}
}

void mainMenu(std::string &firstInput)
{
	firstInput = "0"; // Resets value to 0, mainly after the second go round.
	std::cout << " Morse Code Machine" << std::endl << std::endl;

	std::cout << " 1. Start" << std::endl;
	std::cout << " 2. Options" << std::endl;
	std::cout << " 3. Quit" << std::endl << std::endl;

	std::cout << " Enter Number: ";
	std::cin >> firstInput;
}

int main()
{
	// CONTROL VARIABLES
	bool masterLoop = true;            // Main Loop, stops when user presses 3.
	std::string firstInput = "0";      // User to choice: 1.Tran, 2.Op, 3.Quit.
	std::string line;                  // Line the user will want translated.
	std::string repeat = "1";          // If user wants to go again.
	int lineSize;                      // Stores the size of the line.
	bool option2 = true;               // Option choice 2 loop.

	// MISC VARIABLES
	int frequency = 1300;              // Beep Frequency
	int dotSpeed = 200;                // Dot Speed miliseconds
	int dashSpeed = 500;               // Dash Speed miliseconds
	bool soundToggle = true;           // Toggles sound output.
	std::string soundRes = "Enabled";  // Shows user if sound is enabled.
	std::string optionResponse = "0";  // Response the user picks in options.         
	int delay = 1000;                  // Delay between sounds.


	//This while-loop loops the program until the user is done.
	while (masterLoop)
	{
		//Reset Values
		option2 = true;
		repeat = "1";

		// Program Starts Here
		mainMenu(firstInput);
		system("cls");

		if (firstInput == "1")
		{
			while (repeat == "1")
			{
				line = "";
				system("cls");
				std::cout << "What do you want to translate? : ";
				std::cin.ignore();
				std::getline(std::cin, line);
				lineSize = line.length();
				std::cout << line << std::endl;

				for (int i = 0; i < lineSize; i++)
				{
					converter(line[i], frequency, dotSpeed, dashSpeed);
					std::cout << " ";
					Sleep(delay);
				}

				std::cout << "\nWant to go again? ( 1 = Yes : 0 = No ):: ";
				std::cin >> repeat;
				while (repeat != "1" && repeat != "0")
				{
					std::cout << "Input a valid response: ";
					std::cin >> repeat;
				}
			}
			system("cls");
		}
		else if (firstInput == "2")
		{
			while (option2)
			{
				std::cout << " Morse Code Machine - Options" << std::endl << std::endl;
				std::cout << " 1. Toggle Sound(WIP) (" << soundRes << ")" << std::endl;
				std::cout << " 2. Sound Speed(WIP) (" << delay << ")" << std::endl;
				std::cout << " 3. Back" << std::endl << std::endl;
				std::cout << " Input a valid response: ";
				std::cin >> optionResponse;
				if (optionResponse == "1")
				{
					system("cls");
					soundToggle = !soundToggle;
					if (soundToggle == true)
					{
						soundRes = "Enabled";
						frequency = 1300;
					}
					else
					{
						soundRes = "Disabled";
						frequency = 0;
					}
				}
				else if (optionResponse == "2")
				{
					system("cls");
					std::cout << "Set sound speed: ";
					std::cin >> delay;
				}
				else if (optionResponse == "3")
				{
					system("cls");
					option2 = false;
				}
				else
				{
					system("cls");
					std::cout << "Invalid Response" << std::endl << std::endl;
				}
			}
		}
		else if (firstInput == "3")
		{
			masterLoop = false;
		}
		else
		{
			system("cls");
			std::cout << "Invalid Response. Try Again." << std::endl << std::endl;
			std::cin.clear();
		}
	}
	return 0;
}