#pragma once
#include "User.h"
#include<iostream>
#include<string>
#include<vector>


using namespace std;

class Student : public User
{
private:
	int student_level; // Current level of the student
	string student_department; // Current department of the student

public:
	Student(); // Default constructor
	Student(string name, int id, vector<int> borrow_books_id, int level, string department); // Parameterized constructor
	void display() const; // Displays student information
	string get_type() const; // Returns the type of user
};

