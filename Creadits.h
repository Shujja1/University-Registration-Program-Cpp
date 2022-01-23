#include<iostream>
#include<Windows.h>
using namespace std;
class Credits
{
public:
	void credits()
	{
		system("CLS");
		PlaySound(TEXT("Credits.wav"), NULL, SND_ASYNC);  // Play's Credit Song (Gta 3 Theme Song)
		system("color 0F");
		cout << "\t\t\t\t |-----------------------------------|" << endl;
		cout << "\t\t\t\t |***|Program Details And Credits|***| " << endl;
		cout << "\t\t\t\t |___________________________________| \n\n" << endl;
		cout << "\t\t |> Thank you For taking intrest in Program Details. \n" << endl;
		Sleep(1500);
		cout << " |> This Program Was Made by 2 Members And as of now consists of 812 Total Lines " << endl;
		Sleep(1500);
		cout << "\n |> Work on this Project was started on 6th December 2021 " << endl;
		Sleep(1500);
		cout << "\n |> Concept of OOP  and other C++ Concepts Covered In this Project Are : \n" << endl;
		Sleep(1500);
		cout << "1.Working Registration and Login Method . \n" << endl;
		Sleep(1500);
		cout << " 2.Multiple Inheritance. \n" << endl;
		Sleep(1500);
		cout << "  3.Use of 4x Header Files. \n" << endl;
		Sleep(1500);
		cout << "   4.Exception Handler / Error handler.\n" << endl;
		Sleep(1500);
		cout << "    5.PlaySound function to play different type of sounds. \n" << endl;
		Sleep(1500);
		cout << "     6.Color function to change colors of this program .\n" << endl;
		Sleep(1500);
		cout << "       7.2x Hidden Easter Eggs \n" << endl;
		Sleep(1500);
		cout << "\t 8.Use of Goto Statement. \n" << endl;
		Sleep(1500);
		cout << "\t  9.Use of Sleep statement to provide real-time experience. \n" << endl;
		Sleep(1500);
		cout << "\t   10.Use of Functions to Restart and put the program in loop where goto scope was ended.\n" << endl;
		Sleep(1500);
		cout << "\t    11.Massive use of switch and if else statement to give best user experience. \n" << endl;
		Sleep(1500);
		cout << "\t     12.Default Constructor Made in Header file and called. \n" << endl;
		Sleep(1500);
		cout << "\t      13.Each Course Having different Colors While 2 Courses having different Percentage like IRL. \n" << endl;
		Sleep(1500);
		cout << "\t\t14.Working Credits and Details system at the end. \n" << endl;
		Sleep(1500);
		cout << "\t\t 15.Use of Concept Of File Handling Open,Close,Read and Write. \n" << endl;
		Sleep(1500);
		cout << "\t\t  16.File reading done through different header files and classes. \n" << endl;
		Sleep(1500);
		cout << "\t\t ----> The Following Concept Was Removed From The Program  <---- \n" << endl;
		Sleep(1500);
		cout << "\t\t  16.Use of Random Number generator which creates random number and plays 1 of 2 Outro's. \n" << endl;
		Sleep(1500);

		cout << "\n\n\n\t\t\t |--------------------------------------------------|" << endl;
		cout << "\t\t\t |Program Made By Shujja Ehtesham And Badar Sohail..|" << endl;
		cout << "\t\t\t |__________________________________________________| \n\n" << endl;
		Sleep(1500);
	}
};