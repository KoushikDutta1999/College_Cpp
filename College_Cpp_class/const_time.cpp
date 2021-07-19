//Create a class Time with member 
//private 
//hour, min 
//Define constructor functions to initialize and assigned values and find out sum of two time objects using

#include<iostream> 
using namespace std; 
class complex{ 
private: 
int hour; 
int min; 
public: 
int a; 
int b; 
void get(){ 
cout<<"enter hour part"<<endl; 
cin>>a; 
cout<<"enter min part"<<endl; 
cin>>b; 
} 
void set(){ 
hour=a; 
min=b; 
} 
void sum(complex p,complex q){ 
complex std; 
std.hour=p.hour+q.hour; 
std.min=p.min+q.min;
cout<<"hour="<<std.hour<<endl<<"min="<<std.min; } 
}; 
int main(){ 
complex p,q,r; 
p.get(); 
q.get(); 
p.set(); 
q.set(); 
r.sum(p,q); 
return 0; 
} 

