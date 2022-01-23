#include <iostream>
#include<fstream>
#include<string>
#include <windows.h>
#include"50percent-marksconstructor.h"  // Includes the header file of 50% marks class and its constructor
#include"60percent-marksconstructor.h" // Includes the header file of 60% marks class and its constructor
#include"Creadits.h"  // includes Header file of Credits to include credits function
using namespace std;

class Information  // First Class to get Data Members
{
protected:
	string firstname, lastname, email, city, nationality, qualifications, number, gender; // essential data
	int course, passingyear;
};

class Login  // Contains Data Members to  save login details.
{
protected:
	string username;  // for registration	
	string password; // for registration
	string userlogin; // for login
	string passlogin; // for login
}; 

class Data : public Information, Login , Credits // Second Class to get Data (Multiple Inheritance)
{
public:
	void signup()
	{
		system("CLS");
		PlaySound(TEXT("Signup.wav"), NULL, SND_ASYNC);  // Plays in Sign in Sound
		system("color B");  // Light Aqua Color
		cout << "\t\t\t\t\t___________________________________" << endl;
		cout << "\t\t\t\t\t|                                 | " << endl;
		cout << "\t\t\t\t\t|**** Welcome To Signup Page  ****|" << endl;
		cout << "\t\t\t\t\t|_________________________________| \n" << endl;
		cout << "\t\t\t______________________________________________________________________" << endl;
		cout << "\t\t\t|                                                                     | " << endl;
		cout << "\t\t\t|**** Already Registered? Enter Login to head towards Login Page  ****|" << endl;
		cout << "\t\t\t|_____________________________________________________________________| \n\n" << endl;
		ofstream signup; // write
		signup.open("Signup.txt", ios::app);
		if (!signup)
		{
			cout << "File not created";
		}
		else
		cout << "\n\t\t\t\t  |> Enter your Username to get registered : ";
		cin >> username;
		if (username == "login" || username == "Login")  // To switch to login page if registered
		{
			system("CLS");
			cout << "\n\n\n\t\t\t\t\t____________________________________" << endl;
			cout << "\t\t\t\t\t|                                  | " << endl;
			cout << "\t\t\t\t\t|**** Switching to Login Page  ****|" << endl;
			cout << "\t\t\t\t\t|__________________________________| " << endl;
			Sleep(800);
			Login();
		}
		signup << username << "  ";
		cout << "\n\t\t\t\t  |> Enter your Password to registered : ";
		cin >> password;
		signup << password << " ";
		Sleep(500);
		cout << "\n\n\t\t\t\t |* You have been registered sucessfully *|" << endl;
		Sleep(700);  // 700 Milli Seconds (0.7 second)
		signup.close();
		Login();  // Jumps to GetData
	}
	void Login()
	{
		system("CLS");
		ofstream tempwrite; // temporary File Handling
		tempwrite.open("Temporary Data.txt"); // Creates Temporary Data to Show at The end of the Program
		if (!tempwrite)
		{
			cout << "Temporary File Not Created" << endl;
		}
		ofstream permwrite; // File Handling
		permwrite.open("Permenant Data.txt", ios::app);  //Creates a File Named Permenant Data.txt and saves registration info
		if (!permwrite)
		{
			cout << "Permenant File Not Created" << endl;
		}

		system("CLS");
	  tryagain:  // label  Login Page starts here
		ifstream login;
		login.open("Signup.txt");
		if (!login)
		{
			cout << "file not found";
		}
		else
		system("Color 79");  // Registration color White and light blue
		cout << "\t\t\t\t\t_________________________________" << endl;
		cout << "\t\t\t\t\t|                               | " << endl;
		cout << "\t\t\t\t\t|**** Welcome To Login PAGE ****|" << endl;
		cout << "\t\t\t\t\t|_______________________________| \n\n" << endl;
		cout << "\t\t\t_____________________________________________________________________" << endl;
		cout << "\t\t\t|                                                                   | " << endl;
		cout << "\t\t\t|**** NOT Registered? Enter signup to head towards Signup Page  ****|" << endl;
		cout << "\t\t\t|___________________________________________________________________| \n\n" << endl;
		cout << "\n\t\t\t\t | Enter username to login : ";
		cin >> userlogin;
		if (userlogin == "signup" || userlogin == "Signup")
		{
			system("CLS");
			cout << "\n\n\n\t\t\t\t\t_____________________________________" << endl;
			cout << "\t\t\t\t\t|                                   | " << endl;
			cout << "\t\t\t\t\t|**** Switching to Signup Page  ****|" << endl;
			cout << "\t\t\t\t\t|___________________________________| " << endl;
			Sleep(800);
			signup(); // back to signup
		}
		cout << "\n\t\t\t\t | Enter password to login : ";
		cin >> passlogin;
		while (!login.eof())
		{
			login >> username;
			login >> password;
			if (username == userlogin && password == passlogin)
			{
					cout << "\n\n\t\t\t\t\t |**** Login SuccessFull ****| " << endl;
					Sleep(600);
					system("Color E"); // Light Yellow color after login
					system("CLS");
					cout << "\t\t\t\t___________________________________________________" << endl;
					cout << "\t\t\t\t|                                                 | " << endl;
					cout << "\t\t\t\t|**** Welcome To University Registration Form ****|" << endl;
					cout << "\t\t\t\t|_________________________________________________| \n\n" << endl;
					cout << "\t\t\t\t |> Enter your First Name  : ";
					cin >> firstname;
					permwrite << "______________________________________________________\n" << endl;
					permwrite << "First Name = " << firstname << endl;
					tempwrite << firstname << endl;
					cout << "\n\t\t\t\t |> Enter your Last Name : ";
					cin >> lastname;
					permwrite << "Last Name = " << lastname << endl;
					tempwrite << lastname << endl;
					cout << "\n\t\t\t\t |> Enter your Gender : ";
					cin >> gender;
					permwrite << "Gender = " << gender << endl;
					cout << "\n\t\t\t\t |> Enter your Email : ";
					cin >> email;
					permwrite << "Email = " << email << endl;
					tempwrite << email << endl;
					cout << "\n\t\t\t\t |> Enter your Contact number : ";
					cin >> number;
					permwrite << "Number = " << number << endl;
					cout << "\n\t\t\t\t |> Enter Your city : ";
					cin >> city;
					permwrite << "City = " << city << endl;
					cout << "\n\t\t\t\t |> Enter your Nationality : ";
					cin >> nationality;
					permwrite << "Nationality = " << nationality << endl;
					cout << "\n\t\t\t\t |> Enter your Qualifications e.g (SSC/FSC,Masters) : ";
					cin >> qualifications;
					permwrite << "Qualifications = " << qualifications << endl;
					cout << "\n\t\t\t\t |> Enter Passing year : ";
					cin >> passingyear;
					permwrite << "Passing Year = " << passingyear << endl;
					permwrite.close();      // Closes the File.
		            tempwrite.close();  // Closes the temp file
					login.close();  // Cloes login file
					Sleep(400);
					getcourse();  // calls the get course function to get all function details
			}
		}
		login.close(); // Cloes login file
		permwrite.close();      // Closes the File.
		tempwrite.close();  // Closes the temp file
			system("CLS");
			cout << "\n\n" << "\t\t\t  -----------------------------------------------------------------" << endl;
			cout << "\t\t\t   |****ERROR!!!! Wrong Username Or PAssword Please try again ****| " << endl;
			cout << "\t\t\t   ________________________________________________________________" << endl;
			for (int i = 0; i <= 10; i++)
			{
				system("Color C");   // Red Color
				system("Color F"); // white color
				system("Color C");
			}
			PlaySound(TEXT("Error.wav"), NULL, SND_SYNC);  // Plays error sound
			system("CLS");
			Login();
		
	}

	                                // COURSES DETAILS START FROM HERE 
	void greet()
	{
		system("CLS");
		PlaySound(TEXT("Welcome.wav"), NULL, SND_ASYNC);  // Plays Welcome to registration sound 
		system("Color A"); // Light green For choosing course
		cout << "\n\n " << "\t\t\t\t\t--------------------------------" << endl;
		cout << "\t\t\t\t\t  Welcome  : " << firstname << " " << lastname << endl;
		cout << "\t\t\t\t\t________________________________\n\n" << endl;
	}
	void restartfunc()
	{
		Sleep(700);
	sad:  //Label Named Sad For the Sake of some humour
		int choice;
		cout << "\t\t=====================================================================================\n" << endl;
		cout << "\t\t\t\t\t    --------------------------" << endl;
		cout << "\t\t\t\t\t    |***|Enter 0 to Exit |***| " << endl;
		cout << "\t\t\t\t\t    |________________________| \n\n";
		cout << "\t\t\t\t\t   ------------------------------" << endl;
		cout << "\t\t\t\t\t   |***|Enter 1 to SIGN OUT |***| " << endl;
		cout << "\t\t\t\t\t   |____________________________| \n\n" << endl;
		cout << "\t\t\t\t   -------------------------------------------------" << endl;
		cout << "\t\t\t\t   |***|Enter 2 to Go Back to Course Selection |***| " << endl;
		cout << "\t\t\t\t   |_______________________________________________| \n\n" << endl;
		cout << "\t\t\t   --------------------------------------------------------------------" << endl;
		cout << "\t\t\t   |***|Enter 3 to Check This Program Details And Program Credits |***| " << endl;
		cout << "\t\t\t   |__________________________________________________________________| \n" << endl;
		cout << "\t\t=====================================================================================" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0: // Send's To the Second switch statement within this loop to decide between 1 of 2 exit's
		{
			system("CLS");
			PlaySound(TEXT("shutdown.wav"), NULL, SND_ASYNC); // plays shutdown sound effect (Windows XP Shutdown Sound) 
			cout << "\t\t\t\t\t    --------------------------------" << endl;
			cout << "\t\t\t\t\t    |***|Program SHUTTING DOWN |***| " << endl;
			cout << "\t\t\t\t\t    |______________________________|\n\n";
			for (int i = 0; i <= 7; i++)
			{
				cout << "\t\t\t\t\t\t*           *           *" << endl;;
				Sleep(400);
			}
			cout << "\n\t\t\t\t\t\t  ---------------------" << endl;
			cout << "\t\t\t\t\t\t  |***|BYE BYE !! |***| " << endl;
			cout << "\t\t\t\t\t\t  |___________________|\n\n";
			exit(0); // exit the program
		}
		case 1:
		{
			system("CLS");
			cout << "\n\n\n\t\t\t\t\t__________________________" << endl;
			cout << "\t\t\t\t\t|                        | " << endl;
			cout << "\t\t\t\t\t|---->  Signing Out <----|" << endl;
			cout << "\t\t\t\t\t|________________________| " << endl;
			Sleep(800);
			signup(); // Goes Back to top of the Program
			
		}
		case 2:
		{
			getcourse();  //Jumps To getcourse Function 
		}
		case 3:
		{
			credits();  // credits function call from Credits.h
			goto sad;
		}
		default:
		{
			system("CLS");
			cout << "\n\n\n\t\t\t\t|-------------------------------------------------|" << endl;
			cout << "\t\t\t\t|**** Error !! Invalid Input Please Try Again ****|" << endl;
			cout << "\t\t\t\t|_________________________________________________| \n\n" << endl;
			for (int i = 0; i <= 10; i++)
			{
				system("Color C");   // Red Color
				system("Color F"); // white color
				system("Color C");
			}
			PlaySound(TEXT("Invalid input.wav"), NULL, SND_SYNC);

			system("CLS");
			goto sad; //Jump's to sad label must be hard to decide between 3 buttons
		}
		}
	}
		void getcourse()
		{
		courses:
			greet(); // Greet Function Called
			cout << "\t\t\t_____________________________________________________________________" << endl;
			cout << "\t\t\t|                                                                    | " << endl;
			cout << "\t\t\t|****  Available Courses 'BSCS' 'BSSE' 'BEE' 'BSMLT 'BBA' 'DPT'  ****|" << endl;
			cout << "\t\t\t|____________________________________________________________________| \n\n" << endl;
			cout << "\t\t\t\t ____________________________________________ " << endl;
			cout << "\t\t\t\t |**** Enter 1 for Registration of BSCS ****| " << endl;
			cout << "\t\t\t\t |__________________________________________| " << endl;
			cout << "\t\t\t\t |**** Enter 2 for Registration of BSSE ****| " << endl;
			cout << "\t\t\t\t |__________________________________________| " << endl;
			cout << "\t\t\t\t |**** Enter 3 for Registration of BEEE ****| " << endl;
			cout << "\t\t\t\t |__________________________________________| " << endl;
			cout << "\t\t\t\t |**** Enter 4 for Registration of BSMLT ***| " << endl;
			cout << "\t\t\t\t |__________________________________________| " << endl;
			cout << "\t\t\t\t |**** Enter 5 for Registration of BBA  ****|" << endl;
			cout << "\t\t\t\t |__________________________________________| " << endl;
			cout << "\t\t\t\t |**** Enter 6 for Registration of DPT  ****|" << endl;
			cout << "\t\t\t\t |__________________________________________|";
			cout << "\n\t\t\t\t   _______________________________" << endl;
			cout << "\t\t\t\t  |                              | " << endl;
			cout << "\t\t\t\t  |----> Enter 0 To Signout <----|" << endl;
			cout << "\t\t\t\t  |______________________________| " << endl;
			ofstream writecourse;  // To save Course Details in File
			writecourse.open("Permenant Data.txt", ios::app);
			cin >> course;
			switch (course)
			{
			case 1:  // Goes TO registration OF BSCS
			{
				system("CLS");
				system("Color 4F");  //Red Back Ground (4) And Bright White text (F)
				cout << "\t\t\t\t\t |---------------------------|" << endl;
				cout << "\t\t\t\t\t |***| You Selected BSCS |***| " << endl;
				cout << "\t\t\t\t\t |___________________________| \n\n" << endl;
				cout << "\t\t\t\t|--------------------------------------------------|" << endl;
				cout << "\t\t\t\t|**** Minimum Marks Required For BSCS Are 50%  ****|" << endl;
				cout << "\t\t\t\t|__________________________________________________| \n\n" << endl;
				writecourse << "Course Selected [----> BSCS <----]";   // To save Course Details in File
				writecourse.close();
				marks50percent m;  // constructor called for 50% Marks
				restartfunc();  // Restart function called at  the closing point
				break;
			}
			case 2:  // Goes TO registration OF BSSE
			{
				system("CLS");
				system("Color 1F");  // Blue Background (1) And Bright White text (F)
				cout << "\t\t\t\t\t |---------------------------|" << endl;
				cout << "\t\t\t\t\t |***| You Selected BSSE |***| " << endl;
				cout << "\t\t\t\t\t |___________________________| \n\n" << endl;
				cout << "\t\t\t\t|--------------------------------------------------|" << endl;
				cout << "\t\t\t\t|**** Minimum Marks Required For BSSE Are 50%  ****|" << endl;
				cout << "\t\t\t\t|__________________________________________________| \n\n" << endl;
				writecourse << "Course Selected [----> BSSE <----]";  // To save Course Details in File
				writecourse.close();
				marks50percent m;  // constructor called for 50% Marks
				restartfunc();  // Restart function called at  the closing point
				break;
			}
			case 3:  // Goes TO registration OF BEEE
			{
				system("CLS");
				system("Color 71");  // White Background (7) And Blue Text (1).
				cout << "\t\t\t\t\t |---------------------------|" << endl;
				cout << "\t\t\t\t\t |***| You Selected BEEE |***| " << endl;
				cout << "\t\t\t\t\t |___________________________| \n\n" << endl;
				cout << "\t\t\t\t|--------------------------------------------------|" << endl;
				cout << "\t\t\t\t|**** Minimum Marks Required For BEEE Are 60%  ****|" << endl;
				cout << "\t\t\t\t|__________________________________________________| \n\n" << endl;
				writecourse << "Course Selected [----> BEEE <----]";  // To save Course Details in File
				writecourse.close();
				marks60percent s;  //Constructor Called for 60% marks
				restartfunc();   // Restart function called at  the closing point
				break;
			} 
			case 4: // Goes TO registration OF BSMLT
			{
				system("CLS");
				system("Color 5F");  // Purple (5) With Bright white Text (F).
				cout << "\t\t\t\t\t |----------------------------|" << endl;
				cout << "\t\t\t\t\t |***| You Selected BSMLT |***| " << endl;
				cout << "\t\t\t\t\t |____________________________| \n\n" << endl;
				cout << "\t\t\t\t|---------------------------------------------------|" << endl;
				cout << "\t\t\t\t|**** Minimum Marks Required For BSMLT Are 50%  ****|" << endl;
				cout << "\t\t\t\t|___________________________________________________| \n\n" << endl;
				writecourse << "Course Selected  [----> BSMLT <----]"; // To save Course Details in File
				writecourse.close();
				marks50percent m;  // constructor called for 50% Marks
				restartfunc();   // Restart function called at  the closing point
				break;
			}
			case 5:   // Goes TO registration OF BBA
			{
				system("CLS");
				system("Color E0");  // Yellow Background (E) And Black Text (0).
				cout << "\t\t\t\t\t |--------------------------|" << endl;
				cout << "\t\t\t\t\t |***| You Selected BBA |***| " << endl;
				cout << "\t\t\t\t\t |__________________________| \n\n" << endl;
				cout << "\t\t\t\t|--------------------------------------------------|" << endl;
				cout << "\t\t\t\t|**** Minimum Marks Required For BBA Are 50%  **** |" << endl;
				cout << "\t\t\t\t|__________________________________________________| \n\n" << endl;
				writecourse << "Course Selected [----> BBA  <----]";  // To save Course Details in File
				writecourse.close();
				marks50percent m;  // constructor called for 50% Marks
				restartfunc();   // Restart function called at  the closing point
				break;
			}
			case 6:    // Goes TO registration OF DPT
			{
		
				system("CLS");
				system("Color 8B");  // Gray Background (8) with Light Aqua Text (B).
				cout << "\t\t\t\t\t |--------------------------|" << endl;
				cout << "\t\t\t\t\t |***| You Selected DPT |***| " << endl;
				cout << "\t\t\t\t\t |__________________________| \n\n" << endl;
				cout << "\t\t\t\t|-------------------------------------------------|" << endl;
				cout << "\t\t\t\t|**** Minimum Marks Required For DPT Are 60%  ****|" << endl;
				cout << "\t\t\t\t|_________________________________________________| \n\n" << endl;
				writecourse << "Course Selected [----> DPT <----]";
				writecourse.close();
				marks60percent s;  //Default constructor Called 60%
				restartfunc();    // Restart function called at  the closing point
				break;
			}

			case 7:  //Easter EGG Number 1 :D
			{
				system("CLS");
				cout << "\n\n\n\t\t\t\t_______________________________________________________" << endl;
				cout << "\t\t\t\t|-----------------------------------------------------|" << endl;
				cout << "\t\t\t\t|                                                     |" << endl;
				cout << "\t\t\t\t|****!!! SHEESH !!!  Wrong Input Please TRY AGAIN ****|" << endl;
				cout << "\t\t\t\t|_____________________________________________________| \n\n" << endl;
				for (int i = 0; i <= 5; i++)
				{
					system("Color 1");   // GREEN Color
					system("Color 6");
					system("Color F"); // white color
				}
				PlaySound(TEXT("Sheesh.wav"), NULL, SND_SYNC);

				goto courses;
			}
			case 1883:  //Easter EGG Number 2
			{
				system("CLS");
				system("Color F"); // white color
				cout << "\n\n\n\n  ___________________________________________________________________________________________________________" << endl;
				cout << "  |---------------------------------------------------------------------------------------------------------|" << endl;
				cout << "  |                                                                                                         |" << endl;
				cout << "  |---> The first computer programming language was created in 1883,                                        |" << endl;
				cout << "  | When a woman named Ada Lovelace worked with Charles Babbage on his very early mechanical computer,      |" << endl;
				cout << "  | Ada Lovelace's 'Algorithm for the Analytical Engine' is the first computer language ever created.  <----|" << endl;
				cout << "  |_________________________________________________________________________________________________________| \n\n" << endl;
				PlaySound(TEXT("1883.wav"), NULL, SND_SYNC);
				restartfunc();
			}
			case 0:  // Signout means send back's to start
				system("CLS");
				{
					system("CLS");
					cout << "\n\n\n\t\t\t\t\t__________________________" << endl;
					cout << "\t\t\t\t\t|                        | " << endl;
					cout << "\t\t\t\t\t|---->  Signing Out <----|" << endl;
					cout << "\t\t\t\t\t|________________________| " << endl;
					Sleep(800);
					signup();  // Goes to the Top of the program
				}
			default:  //Error
			{
				system("CLS");
				cout << "\n\n\n\t\t\t\t|-------------------------------------------------|" << endl;
				cout << "\t\t\t\t|**** Error !! Invalid Input Please Try Again ****|" << endl;
				cout << "\t\t\t\t|_________________________________________________| \n\n" << endl;
				for (int i = 0; i <= 10; i++)
				{
					system("Color C");   // Red Color
					system("Color F"); // white color
					system("Color C");
				}
				PlaySound(TEXT("Invalid input.wav"), NULL, SND_SYNC);

				system("CLS");
				goto courses;
			}
			}
		}
	
};
