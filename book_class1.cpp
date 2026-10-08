#include<iostream>
using namespace std;
class Book
{
    string title,author;

public:
    Book(string t,string a)
    {
        title = t;
        author = a;
    }
    void display()
    {
        cout<<"Title:"<<title<<endl;
        cout<<"Author:"<<author<<endl;
    }
};
int main()
{
    Book b1("Captain America","Joe Simon & Jack Kirby");
    Book b2("Spider-Man","Stan Lee");

    cout<<"Book 1:"<<endl;
    b1.display();
    cout<<"\nBook 2:"<<endl;
    b2.display();
    return 0;
}
