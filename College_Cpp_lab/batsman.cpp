//Define a class batsman with the following specifications: 
//Private members: 
//bcode 4 digits code number 
//bname 20 characters 
//innings, notout, runs integer type 
//batavg it is calculated according to the formula 
//calcavg() Function to compute batavg 
//batavg=runs/(innings-notout) 
//Public members: 
//readdata() Function to accept value from bcode, name, innings, notout, runs and invoke the function calcavg() displaydata() 
//Function to display the data members on the screen.

#include<iostream> 
using namespace std; 
class batsman{ 
int bcode; 
char bname[20];
int innings,notout,runs; 
int batavg; 
void calcavg() 
{ 
batavg=runs/(innings-notout); 
} 
public: 
void readdata() 
{ 
cout<<"Enter batsman No. "; 
 cin>> bcode; 
 cout<<"Enter batsman name: "; 
 cin>>bname; 
 cout<<"Enter Innings , Notout and Runs "; 
 cin>>innings>>notout>>runs; 
 calcavg(); 
} 
void displaydata() 
{ 
cout<<"Batsman code "<<bcode<<"\nBatsman name  
"<<bname<<"\nInnings "<<innings<<"\nNot out "<<notout<<"\nRuns  "<<runs<<"\nBatting Average "<<batavg;
} 
}; 
int main() 
{ 
batsman obj; 
obj.readdata(); 
obj.displaydata(); 
return 0; 
} 

