#include "Teacher.h"
#include<iostream>
#include<string>

using namespace std;

Teacher::Teacher()
{
	teacher_subject = "Unknown";
}

Teacher::Teacher(string name, int id, vector<int> borrow_books_id, string subject):User(name, id, borrow_books_id)
{
	teacher_subject = subject;
}

void Teacher::display() const
{
	cout << "--------------------------------------------------" << endl;
	cout << "Teacher Name is: " << user_name << endl;
	cout << "Teacher id is: " << user_id << endl;
	cout << "Teacher subject is: " << teacher_subject << endl;
	cout << "The number of books teacher borrowed is: " << borrow_books_id.size() << endl;
	for (int i = 0; i < borrow_books_id.size(); i++)
	{
		cout << "ID book borrow " << i + 1 << ": " << borrow_books_id.at(i) << endl;
	}
	cout << "--------------------------------------------------" << endl;
}

string Teacher::get_type() const
{
	return "Teacher";
}
