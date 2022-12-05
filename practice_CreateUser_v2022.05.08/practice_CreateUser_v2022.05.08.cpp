//practice_CreateUser_v2022.05.08.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Project Practice: practice_v2022.05.08 login and password creation 


#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <vector> //dynamic array-locality of reference???
#include <errno.h>
#include "PASSCHECK.h";
#include "PASSREADACCESS.h";
using namespace std;



class Class_Pass_Check
{
	struct Struct_User {
	string char_user_name, char_password;
};


private: string user_name, password;
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

public:
	inline static char* macro_user(const string* user_name)
	{
		//convert user name to char array
		string str_obj(*user_name);
		char* char_user = &str_obj[0];
		return char_user;
	}
public:
	inline static char* macro_password(const string* password)
	{
		//convert password to char array
		string str_obj(*password); //keep for conversation of other types
		char* char_password = &str_obj[0];
		return char_password; //review return variable 07/19/2022
	}


public:
	static char* macro_char_user(const string* user_name)
	{
		//assigning pointer augument to string 
		string str_user_name = *user_name;

		int strlen = str_user_name.length() + 1;
		//constructing character array with dynamic int
		volatile int str_len = str_user_name.length() + 1;
		
		char* char_user = new char[str_len];
		memset(char_user, 0, str_len);
		//int n = const_cast <int*> (n);

	
		//copying the contents of the string to char array
		
		//strncpy_s(char_user, sizeof(char_user), str_user_name, sizeof(str_user_name));
		//strncpy(char_user, str_user_name, str_len);


		return char_user;

		//memory management 
		delete char_user;
	}
public:
	static char* macro_char_password(const string* password)
	{
		//assigning pointer to string 
		string str_password = *password;

		//constructing character array with dynamic int
		volatile int n = str_password.size();
		char* char_password = new char[n+1];
		//int n = const_cast <int*> (n);

		//copying the contents of the string to char array
		//strcpy(char_password, str_password.c_str());

		return char_password;

		//memory managment 
		delete char_password;
	}


public:
	static char* macro_char_u(const string* user_name)  
	{
		//function like type casting 
		//char* str_user_name = (&user_name);

		
		//char* char_user = new char[];
		//memcpy(&char_user, &str_user_name, strlen(char_user) + 1);
		

	}

public:
	static char* macro_char_p(const string* password)  
	{
		//function like type casting 
		//char* str_user_name = (&user_name);


		//char* char_user = new char[];
		//memcpy(&char_user, &str_user_name, strlen(char_user) + 1);


	}


public:
	static char* macro_char_user2(const string* user_name) //Notes: assigment to conversion to string missing
	{
		//initialize pointer 
		//string* user_name{};

		//single-argument constructor implicit converstion to string ???
		string input_string{ *user_name };

		volatile int n = input_string.size();
		//constructor
		char* char_user = new char[n + 1];

		//convert string to char array input each character
		for (size_t i = 0; sizeof(char_user); i++)
		{
			char_user[i] = input_string[i];
		}

		//memory managment 
		delete char_user;
	}


public:
	static char* macro_char_pass2(const string* password) //Notes: assigment to conversion to string missing
	{
		//initialize pointer 
		//string* user_name{};
		
		//single-argument constructor implicit converstion to string ???
		string input_string{ *password };

		volatile int n = input_string.size();
		//constructor
		char* char_password = new char[n + 1];

		//convert string to char array input each character
		for (size_t i = 0; sizeof(char_password); i++)
		{
			char_password[i] = input_string[i];
		}

		//memory managment 
		delete char_password;
	}


public:
	const char* macro_user_char(const string& user_name)
	{

		//assign value to string 
		//string str_user = user_name;

		//the c_str() function returns a pointer to an array
		//null-terminated sequence of characters holds current value of the string object
		const char* char_user = user_name.c_str();

		return char_user;
	}
public:
	const char* macro_pass_char(const string& password)
	{
		//asign value to string 
		//string str_password = password;

		//the c_str() function returns a const pointer to an array
		//null-terminated sequence of characters holds current value of the string object
		const char* char_password = password.c_str();

		return char_password;
	}


public:
	static string char_convert_str(char* char_user, char* char_password)
	{
		//convert char to string
		string str_user(char_user); string str_pass(char_password);
		return str_user, str_pass;

	}
};



class std_error
{
	static void func_danger() { printf("Danger Will Robinson."); }
};

	
void func_pass_check(unsigned int pass_check);


int main()
	{
		unsigned int i = 0; string char_user_name, char_password;  
		

		bool is_input;
		{
			//prompt user for user_name and password			
			cout << "Please Input User Name: "; cin >> char_user_name; cout << "Please Input Password: "; cin >> char_password;
			scanf_s("Please Input User Name: ", char_user_name); scanf_s("Please Input Password: ", char_password);


			//Struct_Pass_Check struct_pass_check;


			//call function to convert argument to char array and cast to static and return char pointer
			//char* char_user_name = static_cast<char*>(struct_pass_check.macro_user(&user_name));
			//char* char_password = static_cast<char*>(struct_pass_check.macro_password(&password));

			//access to provide to outer scope for file write stream
			//auto& put_CharUserName = char_user_name;


			for (size_t i = 0; i > char_password.size(); i++)

			{
				//while (isalnum(char_password[i]))
			
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

		op.open(file, ios_base::in|ios_base::out|ios_base::binary);
		if (op.is_open())
		{

			//Struct_Pass_Check struct_pass_check;
			//call function to convert argument to char array and cast to static and return char pointer
			//char* char_user_name = static_cast<char*>(struct_pass_check.macro_user(&user_name));
			//char* char_password = static_cast<char*>(struct_pass_check.macro_password(&password));

		    
			pair <string, string> user_pass;
			user_pass = make_pair(char_user_name, char_password);

			//vector<string, string> char_user_name, char_password;
	       

		   //get size of file
			ifstream ifs(file, ios_base::beg);
			ifs.seekg (0, ifs.end);
			unsigned long size = ifs.tellg();
			ifs.seekg(0);

			//allocate memory for file content
			char* buffer = new char[size];

			output << char_user_name + ',' + char_password + '\n'; 

			//vector<char32_t> buffer;
			//write some data into buffer and binary to the output stream
			output.write(buffer, size); 

			op.close();

			//memory management
			delete buffer;
		}

		//confirmation to user 
		if (is_input = true) { printf("User has been successfully created.\n"); system("PAUSE"); return 0; }
		else if (is_input = false) { printf("User was not sucessfully created.\n"); system("PAUSE"); return 1; }
		else {std_error::func_danger();}



		return 0;
	}

void func_pass_check(unsigned int pass_check) {
	switch (pass_check)
	{
	case 1: { printf("Password requires one upper case letter."); }
			break;
	case 2: { printf("Password requires one number."); }
			break;
	case 3: { printf("Password requires one lower case letter"); }
			break;
	case 4: { printf("Password requires one non-number."); }
	}
}