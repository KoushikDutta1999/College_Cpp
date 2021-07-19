//write a function using reference variables as arguments to swap the  values of a pair of integers 

#include<iostream> 
using namespace std;  
void swap(int &x,int &y){ 
int temp; 
temp=x; 
x=y;  
y=temp; 
} 
Int main() 
{ 
int a,b; 
cout<<"Enter the 2 numbers to swap:\n"; 
cin>>a>>b; 
cout<<"Before swap,value of a:"<<a<<"\n"; 
cout<<"Before swap,value of b:"<<b<<"\n"; 
swap(a,b);
cout<<"After swap,value of a:"<<a<<"\n";  
cout<<"After swap,value of b:"<<b<<"\n";  
return 0; 
} 

