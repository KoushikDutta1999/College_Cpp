//Define a class Student that has following attributes: Name: allocated dynamically by a character pointer. 
//Roll no: an integer. 
//Marks: a double type array of 5 elements. 
//Percentage: a float 
//Include a constructor that takes values of Name, Rollno and Marks from the user as input. 
//Also include following methods: CalculatePercentage: that adds all 5 elements of array Marks and calculate percentage according to formula Percentage = (Total marks/ 500 )*100 
//and stores result in member variable Percentage. Grade: that calls CalculatePercentage method and displays the grade accordingly. 

#include<iostream> 
using namespace std; 
class student{ 
public: 
string name; 
int roll; 
double arr[5]; 
float per,grade; 
float total; 
student(){ 
cout<<"Enter the name:"<<endl; 
cin>>name; 
cout<<"Enter the roll:"<<endl; 
cin>>roll; 
cout<<"Enter the marks"<<endl; 
for(int i=0;i<5;i++){ 
cin>>arr[i]; 
} 
for(int i=0;i<5;i++){ 
total=total+arr[i]; 
}
per=(total/500)*100; 
} 
void display(){ 
cout<<"Name : "<<name<<endl; cout<<"Roll : "<<roll<<endl; 
cout<<"Percentage : "<<per<<endl; 
if(per<=30){ 
cout<<"Grade = C"<<endl; 
} 
else if(per<=45){ 
cout<<"Grade = B"<<endl; 
} 
else if(per<=60){ 
cout<<"Grade = A"<<endl; 
} 
else if(per<=80){ 
cout<<"Grade = A+"<<endl; 
} 
else 
cout<<"Grade = O"<<endl; 
} 
}; 
int main(){ 
student s; 
s.display(); 
return 0; 
} 

