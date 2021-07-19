//Define a class named BookFair with the following description: Instance variables/Data members: 
//String Bname – stores the name of the book. 
//double price – stores the price of the book. 
//Member Methods: 
//(i) BookFair() – Default constructor to initialize data members. 
//(ii) void Input() – To input and store the name and the price of the book. 
//(iii) void calculate() – To calculate the price after discount. Discount is calculated based on the 
//following criteria. 
//PRICE DISCOUNT 
//Less than or equal to Rs 1000 2% of price 
//More than Rs 1000 and less than or equal to Rs 3000 10% of price More than Rs 3000 15% of price 
//(iv) void display() – To display the name and price of the book after discount. 
//Write a program in C++ to create an object of the class and call the above member methods. 

#include<iostream> 
using namespace std; 
class BookFair{ 
public: 
string Bname; 
double price; 
int p; 
BookFair(){ 
Bname="The Hobbit"; 
price= 300; 
}
void Input(){ 
cout<<"Enter the name of the book :"<<endl; cin>>Bname; 
cout<<"Enter the price of the book :"<<endl; cin>>price; 
} 
void calculate(){ 
int b; 
if(price<=1000){ 
b=(price*2/100); 
p=price-b; 
} 
else if(price>1000 && price<=3000){ b=(price*10/100); 
p=price-b; 
} 
else if(price>=3000){ 
b=(price*15/100); 
p=price-b; 
} 
} 
void display(){ 
cout<<"Book name = "<<Bname<<endl; cout<<"Book price = Rs. "<<p<<endl; } 
}; 
int main(){ 
BookFair std; 
std.Input(); 
std.calculate(); 
std.display(); 
return 0; 
}

