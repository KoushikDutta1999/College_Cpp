//Create a class UNIT. Take one data member item in code. 
//Create single parameter constructor to initialize the value of item. 
//Also create and define copy constructor. In main(), create an object A of code and initialize it by 100. 
//Now call the copy constructor to create another object B and initialize it by A. Display the corresponding id’s to verify. 

#include<iostream> 
using namespace std; 
class complex{ 
public: 
int real; 
complex(int a){ 
real=a; 
cout<<"paramitarize constructor:"<<"real="<< real<<endl; } 
complex(const complex &abc){ 
real=abc.real; 
cout<<"copy constructor:"<<"real="<< real<<endl; 
} 
}; 
int main(){ 
complex A(100); 
complex B=A; 
return 0;
} 

