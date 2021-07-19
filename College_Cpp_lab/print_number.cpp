//Write a program in C++ create the following function void fun1(char a, int n); 
//when we pass both a and n it will print required character n times. 
//when a is only pass to the function then required character print 20 times. 
//else by default it will print “ * ” 20 times. 

#include<iostream> 
using namespace std; 
void fun(char a,int n) 
{ 
for(int i=0;i<n;i++) 
cout<<" "<<a; 
cout<<endl; 
}
void fun(char a) 
{ 
for(int i=0;i<20;i++) 
cout<<" "<<a; 
cout<<endl; 
} 
void fun() 
{ 
for(int i=0;i<20;i++) 
cout<<" * "; 
} 
int main() 
{ 
char a; 
int n; 
cout<<"Enter value of a and n "; 
cin>>a>>n; 
cout<<"When value of both a and n are passed "; fun(a,n); 
cout<<"When value of a is passed "; 
fun(a); 
cout<<"When no value is passed ";
fun(); 
} 

