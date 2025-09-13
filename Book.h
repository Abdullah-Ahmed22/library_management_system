#pragma once
#include<iostream>
#include<string>

using namespace std;

class Book
{
private:
	string book_name; // Title of the book
	int book_id; // Unique id for the book
	string book_author;  // Author of the book
	int book_publication_date; // Year of publication
	int book_numbers_copies; // Number of copies available in the library

public:
	Book(); // Default constructor
	Book(string name,int id, string author, int publication_date, int numbers_copies); // Parameterized constructor
	void book_borrow(); //borrowing book from library
	void book_return(); // Returns book to library
	int get_book_id(); // Returns the current Id of the book
	void set_book_id(int new_id); // Updates the book Id
	void display(); // Displays the book information
};

