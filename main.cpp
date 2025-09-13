#include<iostream>
#include<string>
#include<vector>
#include "Book.h"
#include "User.h"
#include "Teacher.h"
#include "Student.h"
#include "Library.h"

using namespace std;

//--------------------------------------------------------------------
//########### Prototype Functions ############
void change_book_id(Library& lib, int old_id, int new_id);
void change_teacher_id(Library& lib, int old_id, int new_id);
void change_student_id(Library& lib, int old_id, int new_id);
//--------------------------------------------------------------------


int main()
{
	Library l;
	int choice;

	/*Teacher t1("Ahmed", 44444, "pl");
	Teacher t2("Abdo", 55555, "is");
	Teacher t3("hessin", 66666, "cs");

	l.add_teacher(t1);
	l.add_teacher(t2);
	l.add_teacher(t3);

	l.display_teachers();*/

	/*Student s1("Osama", 20240561, 2, "Genaral");
	Student s2("Abdullah", 20240571, 2, "Genaral");
	Student s3("Ahmed", 20240551, 2, "Genaral");

	l.add_student(s1);
	l.add_student(s2);
	l.add_student(s3);

	l.display_students();*/

	/*Book b1("clean", 5667, "osama", 2023, 5);
	Book b2("hoe", 3333, "eman", 2024, 6);

	l.add_book(b1);
	l.add_book(b2);

	l.display_books();*/

	do
	{
		cout << "\n============= Library Management System =============\n";
		cout << "\n Please select the number of process you want:\n";
		cout << "--------------------------------------------------\n";
		cout << "\t\t Book Process \t\t\n";
		cout << "1- Add Book.\n";
		cout << "2- Remove Book.\n";
		cout << "3- Borrow Book.\n";
		cout << "4- Return Book.\n";
		cout << "5- Display Currnt Books.\n";
		cout << "--------------------------------------------------\n";

		cout << "\n--------------------------------------------------\n";
		cout << "\t\t Teacher Process \t\t\n";
		cout << "6- Add Teacher.\n";
		cout << "7- Remove Teacher.\n";
		cout << "8- Display Currnt Teachers.\n";
		cout << "--------------------------------------------------\n";

		cout << "\n--------------------------------------------------\n";
		cout << "\t\t Student Process \t\t\n";
		cout << "9- Add Student.\n";
		cout << "10- Remove Student.\n";
		cout << "11- Display Currnt Students.\n";
		cout << "--------------------------------------------------\n";

		cout << "\n--------------------------------------------------\n";
		cout << "\t\t Other Process \t\t\n";
		cout << "12- Change Book ID.\n";
		cout << "13- Change Teacher ID.\n";
		cout << "14- Change Student ID.\n";
		cout << "--------------------------------------------------\n";

		cout << "\n--------------------------------------------------\n";
		cout << "0- Exit\n";
		cout << "--------------------------------------------------\n";

		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			string name, author;
			int id, date, copies;

			cout << "Enter book name: ";
			cin.ignore();
			getline(cin, name);

			cout << "Enter book id: ";
			cin >> id;

			cout << "Enter book author: ";
			cin.ignore();
			getline(cin, author);

			cout << "Enter publication year: ";
			cin >> date;

			cout << "Enter book copies: ";
			cin >> copies;

			l.add_book(Book(name, id, author, date, copies));
			//l.display_books(); // test
			break;
		}
		case 2:
		{
			int id;

			cout << "Enter book id: ";
			cin >> id;

			l.remove_book(id);
			//l.display_books(); // test
			break;
		}
		case 3:
		{
			int id;

			cout << "Enter book id: ";
			cin >> id;

			l.borrow_book(id);
			//l.display_books(); // test
			break;
		}
		case 4:
		{
			int id;

			cout << "Enter book id: ";
			cin >> id;

			l.return_book(id);
			//l.display_books(); // test
			break;
		}
		case 5:
		{
			l.display_books();
			break;
		}
		case 6:
		{
			string name, subject;
			int id, num;
			vector<int> id_books_borrow;

			cout << "Enter teacher name: ";
			cin.ignore();
			getline(cin, name);

			cout << "Enter teacher id: ";
			cin >> id;

			cout << "Enter teacher subject: ";
			cin.ignore();
			getline(cin, subject);

			cout << "Enter the number of books teacher borrowed: ";
			cin >> num;

			for (int i = 0; i < num; i++)
			{
				int book_id;
				cout << "Enter " << i + 1 << "st id book teacher borrowed: ";
				cin >> book_id;

				id_books_borrow.push_back(book_id);
			}

			l.add_teacher(Teacher(name, id, id_books_borrow, subject));
			//l.display_teachers(); // test
			break;
		}
		case 7:
		{
			int id;

			cout << "Enter teacher id: ";
			cin >> id;

			l.remove_teacher(id);
			//l.display_teachers(); // test
			break;
		}
		case 8:
		{
			l.display_teachers();
			break;
		}
		case 9:
		{
			string name, department;
			int id, level, num;
			vector<int> id_books_borrow;


			cout << "Enter student name: ";
			cin.ignore();
			getline(cin, name);

			cout << "Enter student id: ";
			cin >> id;

			cout << "Enter student level: ";
			cin >> level;

			cout << "Enter student department: ";
			cin.ignore();
			getline(cin, department);

			cout << "Enter the number of books student borrowed: ";
			cin >> num;

			for (int i = 0; i < num; i++)
			{
				int book_id;
				cout << "Enter " << i + 1 << "st id book student borrowed: ";
				cin >> book_id;

				id_books_borrow.push_back(book_id);
			}

			l.add_student(Student(name, id, id_books_borrow, level, department));
			//l.display_students(); // test
			break;
		}
		case 10:
		{
			int id;

			cout << "Enter student id: ";
			cin >> id;

			l.remove_student(id);
			//l.display_students(); // test
			break;
		}
		case 11:
		{
			l.display_students();
			break;
		}
		case 12:
		{
			int old_id, new_id;

			cout << "Enter the current book id: ";
			cin >> old_id;

			cout << "Enter the new book id: ";
			cin >> new_id;

			change_book_id(l, old_id, new_id);
			//l.display_books(); // test
			break;
		}
		case 13:
		{
			int old_id, new_id;

			cout << "Enter the current teacher id: ";
			cin >> old_id;

			cout << "Enter the new teacher id: ";
			cin >> new_id;

			change_teacher_id(l, old_id, new_id);
			//l.display_teachers(); // test
			break;
		}
		case 14:
		{
			int old_id, new_id;

			cout << "Enter the current student id: ";
			cin >> old_id;

			cout << "Enter the new student id: ";
			cin >> new_id;

			change_student_id(l, old_id, new_id);
			//l.display_students(); // test
			break;
		}
		case 0:
			break;
		default:
			cout << "Invalid choice. Try again.\n";
		}
	}while (choice != 0);
}

 
//--------------------------------------------------------------------
//########### Friend Function In Library ############

// Change the current book id with another one
void change_book_id(Library& lib, int old_id, int new_id)
{
	for (Book& b : lib.books)
	{
		if (b.get_book_id() == new_id)
		{
			cout << "The new id you entred it already registered for another book. Please enter new id not found." << endl;
			return;
		}
	}

	for (Book& b : lib.books)
	{
		if (b.get_book_id() == old_id)
		{
			b.set_book_id(new_id);
			cout << "ID changed successfully." << endl;
			return;
		}
	}
	cout << "The old id you entered does not have a book available.Try again." << endl;
}

// Change the current teacher id with another one
void change_teacher_id(Library& lib, int old_id, int new_id)
{
	for (Teacher& t : lib.teachers)
	{
		if (t.get_user_id() == new_id)
		{
			cout << "The new id you entred it already registered for another teacher. Please enter new id not found." << endl;
			return;
		}
	} 

	for (Teacher& t : lib.teachers)
	{
		if (t.get_user_id() == old_id)
		{
			t.set_user_id(new_id);
			cout << "ID changed successfully." << endl;
			return;
		}
	}
	cout << "The old id you entered does not have a teacher available.Try again." << endl;
}

// Change the current student id with another one
void change_student_id(Library& lib, int old_id, int new_id)
{
	for (Student& s : lib.students)
	{
		if (s.get_user_id() == new_id)
		{
			cout << "The new id you entred it already registered for another student. Please enter new id not found." << endl;
			return;
		}
	}

	for (Student& s : lib.students)
	{
		if (s.get_user_id() == old_id)
		{
			s.set_user_id(new_id);
			cout << "ID changed successfully." << endl;
			return;
		}
	}
	cout << "The old id you entered does not have a student available.Try again." << endl;
}
//--------------------------------------------------------------------
