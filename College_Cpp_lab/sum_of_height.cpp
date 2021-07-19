//Create a class height with data member feet and inch, and declare  member functions to assign and display values. Now find out the sum of  two heights and display the result. 

#include <iostream> 
using namespace std; 
class height 
{ 
private: 
int feet; 
int inches;
public: 
void getdata() 
{ 
cout<<"Enter feet: "; 
cin>>feet; 
cout<<"Enter inches: "; 
cin>>inches; 
} 
void display() 
{ 
cout<<"Height is "<<feet<<" feet "<<inches<<" inches"<<endl; } 
void add(height h1,height h2) 
{ 
feet = h1.feet + h2.feet; 
inches = h1.inches + h2.inches; 
feet = feet + (inches / 12); 
inches = inches % 12; 
} 
}; 
int main() 
{
height h1, h2, h3; 
h1.getdata(); 
h2.getdata(); 
h3.add(h1, h2); 
h3.display(); 
return 0; 
} 

