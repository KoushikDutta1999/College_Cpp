#include<iostream> 
using namespace std; 
class Figure{ 
public: 
double x,y; 
void setdata(){ 
cout<<"Enter the parameters: "; 
cin>>x>>y; 
} 
virtual void showarea(){} 
}; 
class rectangle: public Figure{ 
public: 
void showarea(){ 
cout<<"Area: \n"<<x*y; 
} 
}; 
class triangle: public Figure{ 
public: 
void showarea(){ 
cout<<"Area: \n"<<0.5*x*y; 
} 
}; 
int main(){ 
rectangle r; 
triangle t; 
cout<<"\nRectangle: \n"; 
r.setdata(); 
r.showarea(); 
cout<<"\nTriangle: \n"; 
t.setdata();
t.showarea(); 
} 

