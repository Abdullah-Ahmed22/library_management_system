#include "Book.h"
#include<iostream>
#include<string>
#include "User.h"

using namespace std;

Book::Book():book_name("Unknown"), book_id(0), book_author("Unknown"), book_publication_date(0), book_numbers_copies(0)
{
}

Book::Book(string name, int id, string author, int publication_date, int numbers_copies)
	:book_name(name),
	book_id(id),
	book_author(author),
	book_publication_date(publication_date),
	book_numbers_copies(numbers_copies)
{
}

void Book::book_borrow()
{
	try
	{
		if (book_numbers_copies > 0)
		{
			book_numbers_copies--;
			cout << "The borrowing process is successful." << endl;
		}
		else
		{
			throw "NO copies available";
		}
	}

	catch (const char* msg)
	{
		cout << msg << endl;
	}

	cout << "The number of book copies available is: " << book_numbers_copies << endl;
}

void Book::book_return()
{
	book_numbers_copies++;
	cout << "The returning process is successfully.\n";
	cout << "The number of book copies available is: " << book_numbers_copies << endl;
}

int Book::get_book_id()
{
	return book_id;
}

void Book::set_book_id(int new_id)
{
	book_id = new_id;
}

void Book::display()
{
	cout << "--------------------------------------------------" << endl;
	cout << "Book name is: " << book_name << endl;
	cout << "Book id is: " << book_id << endl;
	cout << "Book author is: " << book_author << endl;
	cout << "Book publication date is: " << book_publication_date << endl;
	cout << "Book numbers copies is: " << book_numbers_copies << endl;
	cout << "--------------------------------------------------" << endl;
}
