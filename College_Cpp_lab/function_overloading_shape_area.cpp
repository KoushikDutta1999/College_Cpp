//Write a program in C++ to calculate the area of A square A rectangle A circle Using function overloading. 

#include<iostream> 
using namespace std; 
void area(int s) 
{ 
int area=s*s; 
cout<<"Area of square "<<area; 
} 
void area(int l,int b) 
{ 
int area=l*b; 
cout<<"\nArea of rectangle "<<area; 
}
void area(double r) 
{ 
double area=3.141*(r*r); 
cout<<"\nArea of circle "<<area; 
} 
int main() 
{ 
int s,l,b; 
double r; 
cout<<"Enter length of side of square "; 
cin>>s; 
cout<<"Enter length and breadth of rectangle "; cin>>l>>b; 
cout<<"Enter radious of circle "; 
cin>>r; 
area(s); 
area(l,b); 
area(r); 
} 

