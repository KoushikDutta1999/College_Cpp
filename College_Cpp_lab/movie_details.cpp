//Define a class named movieMagic with the following description: 
//Instance variables/data members: 
//int year – to store the year of release of a movie 
//String title – to store the title of the movie. 
//float rating – to store the popularity rating of the movie. (minimum rating = 0.0 and maximum rating = 5.0) 
//Member Methods: 
//(i) movieMagic() Default constructor to initialize numeric data members to 0 and String data member to “”. 
//(ii) void accept() To input and store year, title and rating. 
//(iii) void display() To display the title of a movie and a message based on the rating as per the table below. 
//RATING MESSAGE TO BE DISPLAYED 0.0 to 2.0 Flop 2.1 to 3.4 Semi-hit 3.5 to 4.5 Hit 4.6 to 5.0 Super Hit 
//Write a main method to create an object of the class and call the above member methods. 

#include<iostream> 
using namespace std; 
class movieMagic{ 
public: 
int year; 
string title; 
float rating; 
movieMagic(){
year=2010; 
title="abc"; 
rating=3.5; 
} 
void accept(){ 
cout<<"Enter the year : "<<endl; 
cin>>year; 
cout<<"Enter the title : "<<endl; 
cin>>title; 
cout<<"Enter the rating : "<<endl; 
cin>>rating; 
} 
void display(){ 
cout<<"Title = "<<title<<endl<<"Year = "<<year<<endl; 
if(rating<=2.0){ 
cout<<"Flop"<<endl; 
} 
else if(rating>=2.1&&rating<=3.4){ 
cout<<"Semi-Hit"<<endl; 
} 
else if(rating>=3.5&&rating<=4.5){ 
cout<<"Hit"<<endl; 
} 
else if(rating>=4.6&&rating<=5.0){ 
cout<<"Super-Hit"<<endl; 
} 
} 
}; 
int main(){ 
movieMagic std; 
std.accept(); 
std.display();
return 0; 
} 

