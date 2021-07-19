//Create a class Temperature which holds the temperature of two  cities.Input the temperature from user and display the temperature of  two cities. 

#include<iostream> 
using namespace std; 
class Temperature 
{ 
int c1,c2; 
public: 
void get() 
{ 
cout<<"Enter Temperature of city 1 :"; 
cin>>c1; 
cout<<"Enter Temperature of city 2 :"; 
cin>>c2; 
} 
void display()
{ 
cout<<"Temperature of city 1 : "<<c1<<" Deg. C."<<"\nTemperature of city  2 : "<<c2<<" Deg. C."; 
} 
}; 
int main() 
{ 
Temperature a; 
a.get(); 
a.display(); 
return 0; 
} 

