#pragma once
#include<iostream>
#include<string>
#include<vector>
#include "Book.h"
#include "User.h"
#include "Teacher.h"
#include "Student.h"



using namespace std;

class Library
{
private:
	vector<Book> books; // all books in the library
	vector<Teacher> teachers; // all current teachers registered
	vector<Student> students; // all current students registered

	static int number_books; //  total number of books in the library

public:
	// function of vector books
	void add_book(Book b);
	void remove_book(int id);
	void borrow_book(int id);
	void return_book(int id);
	void display_books();

	// function of vector teachers
	void add_teacher(Teacher t);
	void remove_teacher(int id);
	void display_teachers();

	// function of vector students
	void add_student(Student s);
	void remove_student(int id);
	void display_students();

	// Friend functions from main.cpp
	friend void change_book_id(Library& lib, int old_id, int new_id);
	friend void change_teacher_id(Library& lib, int old_id, int new_id);
	friend void change_student_id(Library& lib, int old_id, int new_id);
};

