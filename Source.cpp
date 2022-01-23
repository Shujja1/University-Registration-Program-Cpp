#include<iostream>
#include"Data.h" // Includes main header files and derived header files.
#include<string>

/*    If program is Giving error or not playing sound Just go to project Properties/Linker/Input and add an additional Dependency (Winmm.lib) Just Write there 
      This is to Run the sound effects    */


int main()
{
	Data d;
	d.signup(); // Signup Function 
	d.Login();  // Calls the login and registration info .. rests of the functions are call using this function.
}
