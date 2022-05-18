// practice_CreateUser_v2022.05.08.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Project Practice: practice_v2022.05.08 login and password creation 


#include <iostream>
#include <istream>
#include <fstream>
#include <string>
#include "PASSCHECK.h"
#include "PASSREADACCESS.h"
using namespace std;



	
void macro_charC(string user_name, string password)
{

	/*string& s;
	constexpr string input_string(s);
	//declare convert char array
	 char charC[input_string.length()];

	//convert string to char array
	for (int i = 0; sizeof(s); i++)
	{
		s[i] = charC[i];
	}*/

	{
		//convert user_name to char array
		for (int i = 0; sizeof user_name; i++)
		{
		
			string input_string(user_name);
			char* charC = &input_string[i];
			string user_name[] = { charC };
		}
	}

	//{
	//	//convert password to char array
	//	char* charc;
	//	string input_string(password);
	//	charc = &input_string[0];
	//	string password[] = { charc };
	//}
}
void func_pass_check(int pass_check)
{
	using namespace pass_check;

	switch (pass_check)
	{
	case 1: { printf("Password requires 1 upper case letter."); }
			break;
	case 2: { printf("Password requires 1 number."); }
			break;
	case 3: { printf("Password requires 1 lower case letter"); }
			break;
	case 4: { printf("Password requires 1 non-number."); }
	}
}
string func_danger(string err_prompt) { printf("Danger Will Robinson."); }
		
	

	int main()
	{
		int i = 0; char user_name, password; int func_pass_chec(); char* c;
		

		


		bool is_input;
		{
			//prompt user for user_name and password
			do
			{
				cout << "Please Input User Name: "; cin >> user_name; cout << "Please Input Password: "; cin >> password;
				char user_name[] = {user_name};
				
				
	
				//call function to convert argument to char array 
				void macro_charC(string user_name, string password);
				
				

				
				while (isalnum(password[i]))
				{
					char* password = &password[i]; char* user_name = &user_name[i];
					if (!isupper(password[i])) { func_pass_check(1); }
					if (!isdigit(password[i])) { func_pass_check(2); }
					if (!islower(password[i])) { func_pass_check(3); }
					if (!ispunct(password[i])) { func_pass_check(4); }
					i++;
				}
				
			
			} while (isalpha(user_name), isalnum(password));
		};

		//output string user_name and password to file
		fstream op;
		string cur_dir = "C:\\";
		string full_path = "Users\\Owner\\source\\repos\\practice_CreateUser_v2022.05.08\practice_CreateUser_v2022.05.08\\";
		string file = cur_dir + full_path + "log_in" + ".csv";

		op.open(file);
		if (op.is_open())
		{
			//char user[] = make_pair(user_name, password);
			do { op.put(user_name + "," + password); } while (password != "\n");
			op.close();
		}

		//confirmation to user 
		if (is_input = true) { printf("User has been successfully created."); system("PAUSE"); return 0; }
		else if (is_input = false) { printf("User was not sucessfully created."); system("PAUSE"); return 1; }
		else {func_danger("Danger");}



		return 0;
	}
