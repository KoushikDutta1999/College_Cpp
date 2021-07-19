//Define a class String that could work as a user-defined string type. Include constructors that will enable us to create uninitialized string. Also initialize a string object with a string constant at the time of creation. 
//Include a function that adds two strings to make a third string. Write a complete program to test your class to see that it does the following tasks: 
//a)Creates uninitialized string objects 
//b)Creates objects with string constants 
//c)Concatenates two strings properly 
//d)Display a desired string object 
//Design a simple string manipulation solution in C++ that creates two string objects and tests the same using the ==,!=,>,>=,<,<=operators.

#include<iostream> 
using namespace std; 
class student{ 
public: 
string a,b; 
void getdata(){ 
cout<<"Enter the string : "<<endl; 
cin>>a; 
} 
void add(student t1,student t2){ 
b=t1.a+t2.a; 
} 
void display(){ 
cout<<"result = "<<b;
} 
}; 
int main(){ 
student t1,t2,t3; 
t1.getdata(); 
t2.getdata(); 
t3.add(t1,t2); 
t3.display(); 
return 0; 
} 

