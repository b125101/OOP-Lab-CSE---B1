/*
5. Dynamic Object – Book Details
Create a class named Book containing the following data members:
• Book ID
• Book Title
• Author
• Price
Dynamically create a single Book object using the new operator. Write member functions
to accept and display the book details. Finally, release the dynamically allocated object.
*/

#include <iostream>
#include <string>
using namespace std;

class Book{
    int id;
    string title, author;
    float price;

    public:
        void input(){
            cout << "Enter Book ID: ";
            cin >> id;
            cout << "Enter Book Title: ";
            cin.ignore();
            getline (cin, title);
            cout << "Enter Book Author: ";
            getline (cin, author);
            cout << "Enter Price: ";
            cin >> price;
        }
        void display(){
            cout << "Book ID:       " << id << endl;
            cout << "Book Title:    " << title << endl;
            cout << "Book Author:   " << author << endl;
            cout << "Book Price:    " << price << endl;
        }
};

int main (){
    Book *b = new Book();
    b->input();
    b->display();
    delete b;
    return 0;
}
