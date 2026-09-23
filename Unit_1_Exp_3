#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
int productId;
string productName;
float price;
int monthlySales[12];
int totalQuantity;
float totalBill;

public:

int acceptDetails()
{
cout<<"Enter Product ID: ";
cin>>productId;

cout<<"Enter Product Name: ";
cin>>productName;

cout<<"Enter Price per unit: ";
cin>>price;

cout<<"Enter monthly sales for 12 months: ";

totalQuantity=0;

for(int i=0;i<12;i++)
{
cin>>monthlySales[i];
totalQuantity=totalQuantity+monthlySales[i];
}

totalBill=totalQuantity*price;

return 0;
}

int displayDetails()
{
cout<<"\nProduct ID: "<<productId<<endl;
cout<<"Product Name: "<<productName<<endl;
cout<<"Price: "<<price<<endl;
cout<<"Total Quantity Sold: "<<totalQuantity<<endl;
cout<<"Total Bill: "<<totalBill<<endl;

return 0;
}
};

int main()
{
Product products[2];

cout<<"Enter number of products: 2"<<endl;

cout<<"\n--- Product 1 Details ---"<<endl;
products[0].acceptDetails();

cout<<"\n--- Product 2 Details ---"<<endl;
products[1].acceptDetails();

cout<<"\n--- Product 1 Details ---"<<endl;
products[0].displayDetails();

cout<<"\n--- Product 2 Details ---"<<endl;
products[1].displayDetails();

return 0;
}
