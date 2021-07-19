//Create a class called 'TIME' that has 
//three integer data members for hours, minutes and seconds - constructor to initialize the object to zero 
//constructor to initialize the object to some constant value - member function to add two TIME objects 
//member function to display time in HH:MM:SS format Write a main function to create two TIME objects, add them and display the result in HH:MM:SS format. 

#include <iostream> 
using namespace std; 
class Time { 
public: 
int hours; 
int minutes; 
int seconds; 
void getTime(){ 
cout << "Enter time:" << endl; 
cout << "Hours "; cin>>hours; 
cout << "Minutes "; cin>>minutes; 
cout << "Seconds "; cin>>seconds; 
} 
void putTime(){ 
cout << endl; 
cout << "Time after add: "; 
cout << hours << ":" << minutes << ":" << seconds << endl;
} 
void addTime(Time T1,Time T2){ 
seconds=T1.seconds+T2.seconds; 
minutes=T1.minutes+T2.minutes + this->seconds/60;; 
hours= T1.hours+T2.hours + (this->minutes/60); 
minutes %=60; 
seconds %=60; 
} 
}; 
int main(){ 
Time T1,T2,T3; 
T1.getTime(); 
T2.getTime(); 
T3.addTime(T1,T2); 
T3.putTime(); 
return 0; 
} 

