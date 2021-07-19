//Create a class called 'TIME' that has 
//three integer data members for hours, minutes and seconds - constructor to initialize the object to zero 
//constructor to initialize the object to some constant value - member function to add two TIME objects 
//member function to display time in HH:MM:SS format Write a main function to create two TIME objects, add them and display the result in HH:MM:SS format. 
//Now add two TIME object using the friend function. 

#include<iostream> 
using namespace std; 
class time1{ 
int hours; 
int minute; 
int second; 
public: 
void getdata(int h,int m,int n){ 
hours=h; 
minute=m; 
second=n; 
} 
void putdata(void){ 
cout<<"HH:MM:SS = "<<hours<<":"<<minute<<":"<<second; } 
void sum(time1,time1); 
}; 
void time1::sum(time1 t1,time1 t2){ 
second=t1.second+t2.second; 
minute=second/60;
second=second%60; 
minute=t1.minute+t2.minute; 
hours=minute/60; 
minute=minute%60; 
hours=hours+t1.hours+t2.hours; 
} 
int main(){ 
time1 t1,t2,t3; 
t1.getdata(2,30,40); 
t2.getdata(1,45,10); 
t3.sum(t1,t2); 
t3.putdata(); 
return 0; 
} 

