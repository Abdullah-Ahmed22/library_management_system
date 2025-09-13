#pragma once
#include<iostream>
#include<string>
#include<vector>

using namespace std;

// Abstract Class
class User
{
protected:
	string user_name; // Name of user (teacher or student)
	int user_id; // Current user id (teacher or student)
	vector<int> borrow_books_id;


public:
	User(); // Default constructor
	User(string name, int id, vector<int> borrow_books_id);// Parameterized constructor

	// Virtual Functions
	virtual void display() const = 0; 
	virtual string get_type() const = 0;

	// Not overrid functions
	virtual int get_user_id() const final ; 
	virtual void set_user_id(int new_id) final;
};

