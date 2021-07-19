//C++ program to find the factorial of 1-10 number 

#include <iostream> 
using namespace std; 
int main() 
{ 
int i,j,fact=1; 
for(i=1;i<=10;i++) 
{ 
fact=1; 
for(j=1;j<=i;j++) 
{ 
fact=fact*j; 
} 
cout<<"Factorial of " <<i<<" is: "<<fact<<"\n"; 
} 
return 0; 
}

