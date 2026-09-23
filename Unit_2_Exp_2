#include <iostream>
#include <string>
using namespace std;
class Book
{
private:
int bookId;
string bookName;
float price;
public:
Book()
{
bookId=0;
bookName="Not Available";
price=0;
}
Book(int id,string name,string author,float p)  
{
bookId=id;
bookName=name;
price=p;
}
Book(Book &b)
{
bookId=b.bookId;
bookName=b.bookName;
price=b.price;
}
int display()
{
cout<<"\nBook ID: "<<bookId<<endl;
cout<<"Book Name: "<<bookName<<endl;
cout<<"Price: "<<price<<endl;
return 0;
}
};
int main()
{
Book b1(101,"C++ Programming","Bjarne Stroustrup",4500);
Book b2(b1);
cout<<"--- Original Book Details ---"<<endl;
b1.display();
cout<<"\n--- Copied Book Details ---"<<endl;
b2.display();
return 0;
}
