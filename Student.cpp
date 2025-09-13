#include "Student.h"
#include<iostream>
#include<string>

using namespace std;

Student::Student()
{
	student_level = 0;
	student_department = "Unknown";
}

Student::Student(string name, int id, vector<int> borrow_books_id, int level, string department):User(name, id, borrow_books_id), student_level(level), student_department(department)
{
}

void Student::display() const
{
	cout << "--------------------------------------------------" << endl;
	cout << "Student Name is: " << user_name << endl;
	cout << "Student id is: " << user_id << endl;
	cout << "Student level is: " << student_level << endl;
	cout << "Student department is: " << student_department << endl;
	cout << "The number of books student borrowed is: " << borrow_books_id.size() << endl;
	for (int i = 0; i < borrow_books_id.size(); i++)
	{
		cout << "ID book borrow " << i + 1 << ": " << borrow_books_id.at(i) << endl;
	}
	cout << "--------------------------------------------------" << endl;
	
}

string Student::get_type() const
{
	return "Student";
}
