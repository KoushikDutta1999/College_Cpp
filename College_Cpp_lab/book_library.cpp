//Define a class called Library with the following description : Instance variables/data members : 
//int acc_num — stores the accession number of the book 
//String title — stores the title of the book 
//String author — stores the name of the author 
//Member methods: 
//(i) void input ( ) — To input and store the accession number, title and author. 
//(ii) void compute ( ) — To accept the number of days late, calculate the display the fine charged at the rate of Rs. 2 per day. 
//(iii) void display( ) — To display the details in the following format: Accession Number Title Author 
//Write a program in C++ to solve the above problem. 

#include<iostream> 
using namespace std; 
class Library{ 
public: 
int acc_num,fine; 
string title,author; 
void input(){ 
cout<<"Enter the title of the book: "<<endl; 
cin>>title; 
cout<<"Enter the author name: "<<endl; 
cin>>author; 
cout<<"Enter the number of the book: "<<endl; 
cin>>acc_num; 
}
void compute(){ 
int n; 
cout<<"Enter the number of days of late submission: "<<endl; cin>>n; 
fine=2*n; 
} 
void display(){ 
cout<<"The book title is: "<<title<<endl; 
cout<<"The book author is: "<<author<<endl; 
cout<<"The book number is: "<<acc_num<<endl; 
cout<<"The book fine is: "<<fine<<endl; 
} 
}; 
int main(){ 
Library std; 
std.input(); 
std.compute(); 
std.display(); 
return 0; 
} 

