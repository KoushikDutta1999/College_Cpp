//Write a program in C++ find multiplication of two integers and fractional values using function overloading. 

#include<iostream> 
using namespace std; 
int two(int a , int b) 
{ 
 int m=a*b; 
 cout<<"Multiplication "<<m; 
} 
int two(double c , double d) 
{ 
double fra = c/d;
cout<<"fraction value of "<<c<<"/"<<d<<" = " <<fra; } 
int main() 
{ 
int a,b; 
double x,y; 
cout<<"\nEnter two numbers to multiply "; 
cin>>a>>b; 
two(a,b); 
cout<<"\nEnter two numbers to find fractional value "; cin>>x>>y; 
two(x,y); 
} 

