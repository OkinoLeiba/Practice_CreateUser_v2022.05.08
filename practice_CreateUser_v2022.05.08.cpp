//practice_CreateUser_v2022.05.08.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Project Practice: practice_v2022.05.08 login and password creation 


#include <iostream>
#include <fstream>
#include <string>
#include <utility>
#include <cstring>
#include <vector>
#include "PASSCHECK.h"
#include "PASSREADACCESS.h"
using namespace std;



struct struct_pass_check 
{

		/*
		


			//convert user_name to char array
			for (int i = 0; sizeof user_name; i++)
			{

				string input_string(user_name);
				char* charC = &input_string[i];
				string user_name[] = { charC };
			}



			//convert password to char array
			char* charc;
			string input_string(password);
			charc = &input_string[0];
			string password[] = { charc };
		*/


string user_name, password;
public:
	static char* macro_userC(string* user_name)
	{
		//convert user name to char array
		string str_obj(*user_name);
		char* char_user = &str_obj[0];
		return char_user;
	}
public:
	static char* macro_passwordC(string* password)
	{
		//convert password to char array
		string str_obj(*password); //keep for conversation of other types
		char* char_password = &str_obj[0]; 
		return char_password;
		


		string& password
		constexpr string input_string(password);
		//declare convert char array
		char charC[input_string.length(password)];

		//convert string to char array
		for (size_t i = 0; sizeof(password); i++)
		{
			password[i] = charC[i];
		}
	
	}
public:
	static string char_convert_str(char* char_user, char* char_password)
	{
		//convert char to string
		string str_user(char_user); string str_pass(char_password);
		return str_user, str_pass;

	}
};


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


struct std_error
{
	static void func_danger() { printf("Danger Will Robinson."); }
};

	



	int main()
	{
		int i = 0; string user_name, password; int func_pass_chec(); 
		

		bool is_input;
		{
			//prompt user for user_name and password
			
				cout << "Please Input User Name: "; cin >> user_name; cout << "Please Input Password: "; cin >> password;


				struct_pass_check struct_pass_check;
				
				
				//call function to convert argument to char array and cast to static and return char pointer
				char* char_user_name = static_cast<char*>(struct_pass_check.macro_userC(&user_name));
				char* char_password = static_cast<char*>(struct_pass_check.macro_passwordC(&password));

				//access to provide to outer scope for file write stream
				//auto& put_CharUserName = char_user_name;
				
				
				//for (size_t i = 0; sizeof(char_password); i++)
				
				
					while (isalnum(char_password[i]))
					{
					//char* password = &password[i]; char* user_name = &user_name[i];
					if (!isupper(char_password[i])) { func_pass_check(1); }
					if (!isdigit(char_password[i])) { func_pass_check(2); }
					if (!islower(char_password[i])) { func_pass_check(3); }
					if (!ispunct(char_password[i])) { func_pass_check(4); }
					}
			    
			
			
		};

		//output string user_name and password to file
		fstream op;
		ofstream output;
		string cur_dir = "C:\\";
		string full_path = "Users\\Owner\\source\\repos\\practice_CreateUser_v2022.05.08\\practice_CreateUser_v2022.05.08\\";
		string file = cur_dir + full_path + "log_in" + ".csv";

		op.open(file, ios_base::out);
		if (op.is_open())
		{

			struct_pass_check struct_pass_check;
			//call function to convert argument to char array and cast to static and return char pointer
			char* char_user_name = static_cast<char*>(struct_pass_check.macro_userC(&user_name));
			char* char_password = static_cast<char*>(struct_pass_check.macro_passwordC(&password));

		    /*
			pair <string, string> user_pass;
			user_pass = make_pair(char_user_name, char_password);
	       */

		   // get size of file
			ifstream ifs(file, ios_base::beg);
			ifs.seekg (0, ifs.end);
			long size = ifs.tellg();
			ifs.seekg(0);

			// allocate memory for file content
			char* buffer = new char[size];

			output << char_user_name << ',' << char_password << '\n'; 
			//vector< unsigned char > buffer;
			//write some data into buffer and binary to the output stream
			//output.write(buffer, size); 
			op.close();
		}

		//confirmation to user 
		if (is_input = true) { printf("User has been successfully created.\n"); system("PAUSE"); return 0; }
		else if (is_input = false) { printf("User was not sucessfully created.\n"); system("PAUSE"); return 1; }
		else {std_error::func_danger();}



		return 0;
	}
