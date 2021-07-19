//Define a class BOOK with the following specifications : Private members of the class BOOK are 
//BOOK NO : integer type 
//BOOK TITLE : 20 characters 
//PRICE : float (price per copy) 
//TOTAL_COST() : A function to calculate the total cost for N number of copies where N is passed to the function as argument. Public members of the class BOOK are 
//INPUT() : function to read BOOK_NO. BOOKTITLE, PRICE PURCHASE() : function to ask the user to input the number of copies to be purchased. It invokes TOTAL_COST() and prints the total cost to be paid by the user. 

#include<iostream> 
using namespace std; 
class BOOK{ 
int bookno; 
string booktitle; 
float price; 
public: 
float cost; 
void INPUT(int a,string b,float c){ 
bookno=a;
booktitle=b; 
price=c; 
cout<<"Book No: "<<bookno<<endl<<"Book Title: "<<booktitle<<endl; } 
void TOTAL_COST(int n){ 
cost=price*n; 
} 
void PURCHASE(){ 
cout<<"TOTAL COST PAID BY USER IS: Rs. "<<cost<<endl; } 
}; 
int main(){ 
int no,copy; 
string title; 
float cost; 
cout<<"ENTER THE BOOK NO: "<<endl; 
cin>>no; 
cout<<"ENTER THE BOOK TITLE: "<<endl; 
cin>>title; 
cout<<"ENTER THE BOOK COST: "<<endl; 
cin>>cost; 
cout<<"ENTER THE TOTAL COPY: "<<endl; 
cin>>copy; 
BOOK std; 
std.INPUT(no,title,cost); 
std.TOTAL_COST(copy); 
std.PURCHASE(); 
return 0; 
} 

