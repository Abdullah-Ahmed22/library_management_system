#include "Library.h"
#include<iostream>
#include<string>

using namespace std;

int Library::number_books = 0;

//------------------------------------------------
//###### Method Book ######
void Library::add_book(Book b)
{
	books.push_back(b);
	cout << "The adding book process is successfully." << endl;
	number_books++;
	cout << "Numbers of books now is: " << number_books << endl;
}

void Library::remove_book(int id)
{
	for (int i = 0; i < books.size(); i++)
	{
		if (books.at(i).get_book_id() == id)
		{
			books.erase(books.begin() + i);
			cout << "The removeing book process is successfully." << endl;
			number_books--;
			cout << "Numbers of books now is: " << number_books << endl;
			return;
		}
	}
	cout << "The id you entered does not have a book available.Try again." << endl;

}

void Library::borrow_book(int id)
{
	for (Book& b : books)
	{
		if (b.get_book_id() == id)
		{
			b.book_borrow();
			//cout << "The borrowing book process is successfully." << endl;
			return;
		}
	}
	cout << "The id you entered does not have a book available.Try again." << endl;

}

void Library::return_book(int id)
{
	for (Book& b : books)
	{
		if (b.get_book_id() == id)
		{
			b.book_return();
			//cout << "The borrowing book process is successfully." << endl;
			return;
		}
	}
	cout << "The id you entered does not have a book available.Try again." << endl;
}

void Library::display_books()
{
	if (books.empty())
	{
		cout << "No books available." << endl;
	}

	for (int i = 0; i < books.size(); i++)
	{
		books.at(i).display();
	}
}
//-------------------------------------------------


//-------------------------------------------------
//###### Method Teacher ######
void Library::add_teacher(Teacher t)
{
	teachers.push_back(t);
	cout << "The adding teacher process is successfully." << endl;
}

void Library::remove_teacher(int id)
{
	for (int i = 0; i < teachers.size(); i++)
	{
		if (teachers.at(i).get_user_id() == id)
		{
			teachers.erase(teachers.begin() + i);
			cout << "The removeing teacher process is successfully." << endl;
			return;
		}
	}
	cout << "The id you entered does not have a teacher available.Try again." << endl;
}

void Library::display_teachers()
{
	if (teachers.empty())
	{
		cout << "No teachers available." << endl;
	}

	for (int i = 0; i < teachers.size(); i++)
	{
		teachers.at(i).display();
	}
}
//-------------------------------------------------


//-------------------------------------------------
//###### Method Student ######
void Library::add_student(Student s)
{
	students.push_back(s);
	cout << "The adding student process is successfully." << endl;
}

void Library::remove_student(int id)
{
	for (int i = 0; i < students.size(); i++)
	{
		if (students.at(i).get_user_id() == id)
		{
			students.erase(students.begin() + i);
			cout << "The removeing student process is successfully." << endl;
			return;
		}
	}
	cout << "The id you entered does not have a student available.Try again." << endl;
}

void Library::display_students()
{
	if (students.empty())
	{
		cout << "No students available." << endl;
	}

	for (int i = 0; i < students.size(); i++)
	{
		students.at(i).display();
	}
}
//-------------------------------------------------