#pragma once
#include "User.h"
#include<iostream>
#include<string>

using namespace std;

class Teacher : public User
{
private:
	string teacher_subject; // The subject taught by the teacher

public:
	Teacher(); // Default constructor
	Teacher(string name, int id, vector<int> borrow_books_id, string subject); // Parameterized constructor
	void display() const; // Displays teacher information 
	string get_type() const; // Returns the type of user
};

