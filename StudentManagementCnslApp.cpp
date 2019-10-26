#include <iostream>
#include <stdio.h>
#include "Student.h"								//Including student structure and function prototypes

int main()
{
	Student stu;									//Creating student object to access non static functions
	char choice;

	stu.start_stream();								//A function that creates a file and establishing the connection 

	while (1)
	{
		system("cls");								//Clearing the console display of all text and positioning the text cursor in the home location

		cout << "\t\t====== STUDENT DATABASE MANAGEMENT SYSTEM ======";
		cout << "\n\n                                          ";
		cout << "\n\n";
		cout << "\n \t\t\t 1. Add    Records";
		cout << "\n \t\t\t 2. List   Records";
		cout << "\n \t\t\t 3. Search Records";
		cout << "\n \t\t\t 4. Modify Records";
		cout << "\n \t\t\t 5. Delete Records";
		cout << "\n \t\t\t 6. Exit   Program";
		cout << "\n\n";
		cout << "\t\t\t Select Your Choice :=> ";
		fflush(stdin);								//Flushes the output buffer and move the buffered data to console (in case of stdout) or disk (in case of file output stream)
		cin >> choice;

		switch (choice)								//A switch statement for option handling
		{
		case '1':
			stu.add_record();						
			break;
		case '2':
			stu.list_records();			
			break;
		case '3':
			system("cls");
			stu.search_record();
			break;
		case '4':
			system("cls");
			stu.modify_record();
			break;
		case '5':
			system("cls");
			stu.delete_record();
			break;

		case '6':
			stu.close_stream();						//A function that ends up the file stream and makes resources available again
			break;
		}
	}

	return 0;
}
