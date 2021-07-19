//Create a class Height with data member feet and inch, and declare constructor functions to assign and member function to display values. Now compare two Height class Objects using operator overloading. Height H1(5,6), H2(5,8); 
//if(H1>H2) 
//cout<<"H1 is greater than" 
//else 
//cout<<"H2 is greater than" 

#include<iostream> 
using namespace std; 
class Height{ 
public: 
int feet; 
int inch; 
void getdata(int feet,int inch){ 
} 
void com(Height H1,Height H2){ 
if(H1.feet&H1.inch > H2.feet&H2.inch){ 
cout<<"H1 is greater."<<endl; 
} 
else 
cout<<"H2 is greater."<<endl; 
} 
}; 
int main(){ 
Height H1,H2,H3; 
H1.getdata(5,6); 
H2.getdata(5,8);
H3.com(H1,H2); return 0; 
} 

