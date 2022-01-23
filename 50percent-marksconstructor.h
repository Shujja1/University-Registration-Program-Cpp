#include<iostream>
#include<fstream>
using namespace std;
class marks50percent 
{
protected:
	int obtainedSSC;
	int obtainedHSSC;
	float totalHSSC;
	float totalSSC;
	float grandtotal;
	float percentagehssc;
	float percentagessc;

public:

	marks50percent()  // constructor of class marks made 
	{

		void getdata();
		{
		retryssc:
			try   // EXCEPTION HANDLER
			{
				cout << "\t\t\t\t |> Enter Total marks Of SSC : ";
				cin >> totalSSC;
				cout << "\n\t\t\t\t |> Enter Obtained Marks Of SSC : ";
				cin >> obtainedSSC;
				if (obtainedSSC <= totalSSC && obtainedSSC > 0)
				{
					percentagessc = obtainedSSC / totalSSC * 100;
					cout << " \n\t\t\t\t  --------------------------------------------" << endl;
					cout << " \t\t\t\t {>  Your percentage of SSSC marks = " << percentagessc << "% " << endl;
					cout << " \t\t\t\t  ____________________________________________" << endl;
				}
				else
				{
					throw 0;
				}
			}
			catch (...)  // Default catch
			{
				cout << "\n\n\t\t\t _________________________________________________________________ \n" << endl;
				cout << "\t\t\t |*** ERROR!!! Obtained MArks Cant be greater Than Total ***| ";
				cout << "\n\n\t\t\t\t\t |*** Please TRY AGAIN ***| " << endl;
				cout << "\t\t\t _________________________________________________________________ \n\n\n";
				goto retryssc;
			}
		retryhssc:
			try
			{
				cout << "\n\t\t\t\t |> Enter Total marks Of HSSC : ";
				cin >> totalHSSC;
				cout << "\n\t\t\t\t |> Enter Obtained Marks Of HSSC : ";
				cin >> obtainedHSSC;
				if (obtainedHSSC <= totalHSSC && obtainedHSSC > 0)
				{
					percentagehssc = obtainedHSSC / totalHSSC * 100;
					cout << " \n\t\t\t\t  ------------------------------------------" << endl;
					cout << " \t\t\t\t {>  Your percentage of HSSC marks = " << percentagehssc << "%  " << endl;
					cout << " \t\t\t\t  __________________________________________" << endl;
				}
				else
				{
					throw 0;
				}
			}
			catch (...)
			{
				cout << "\n\n\t\t\t _________________________________________________________________ \n" << endl;
				cout << "\t\t\t |*** ERROR!!! Obtained MArks Cant be greater Than Total ***| ";
				cout << "\n\n\t\t\t\t\t |*** Please TRY AGAIN ***| " << endl;
				cout << "\t\t\t _________________________________________________________________ \n\n\n";
				goto retryhssc;
			}
			ofstream percentage1; // Saves the Percentage in the database
			percentage1.open("Permenant Data.txt", ios::app);
			percentage1 << "\nSSC Percentage = " << percentagessc <<"%" << endl;
			percentage1 << "HSSC Percentage = " << percentagehssc<<"%" << endl;
			percentage1.close();
		}
		void markscal();
		{
			if (percentagehssc < 50)
			{
				cout << "\n\n\t\t\t\t--------------------------------------------------" << endl;
				cout << "\t\t\t\t |> Sorry you are not Eligible for this Course <|" << endl;
				cout << " \t\t\t\t___________________________________________________\n\n" << endl;
				ofstream sorry;
				sorry.open("Permenant Data.txt", ios::app);
				sorry << "----> NOT REGISTERED DUE TO LESS MARKS <----" << endl;
				sorry.close();
			}
			else
			{
				cout << "\n\n\t\t\t-------------------------------------------------------------------" << endl;
				cout << "\t\t\t |> Congratulation You got registered To This Course successfully <|" << endl;
				cout << " \t\t\t___________________________________________________________________\n\n" << endl;
				ofstream registered;
				registered.open("Permenant Data.txt", ios::app);
				registered << "----> Successfully REGISTERED To this course  <----" << endl;
				registered.close();
				string name, lastname, email;
				ifstream read;
				read.open("Temporary Data.txt", ios::in);
				if (!read)
				{
					cout << "Error Data file not detected" << endl;
				}
				else
				{
					while (!read.eof())
					{
						read >> name;
						read >> lastname;
						cout << "\n\n\t\t\t-------------------------------------------------------------------" << endl;
						cout << "\t\t\t" << "|> " << name << " " << lastname << " Successfully Got registered To This course <|" << endl;
						cout << " \t\t\t___________________________________________________________________\n\n" << endl;
						read >> email;
						cout << "\n\n\t\t-----------------------------------------------------------------------------------------" << endl;
						cout << "\n\t\t |>  We will contact The Provided email " << email << " As soon as possible <|" << endl;
						cout << " \t\t__________________________________________________________________________________________\n\n" << endl;
						break;
					}
					read.close();
				}
				cout << "\n\n\n" << endl;
			}
		}
	}
};
