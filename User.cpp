#include "User.h"
#include<iostream>
#include<string>

using namespace std;

User::User():user_name("Unknown"), user_id(0), borrow_books_id()
{
}

User::User(string name, int id, vector<int> borrow_books_id):user_name(name), user_id(id), borrow_books_id(borrow_books_id)
{
}

int User::get_user_id() const
{
    return user_id;
}

void User::set_user_id(int new_id)
{
    user_id = new_id;
}
