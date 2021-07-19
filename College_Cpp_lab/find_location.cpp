//Write a program to initialize the seven Wonders of the World along with their locations in two different arrays. Search for a name of the country input by the user. 
//If found, display the name of the country along with its Wonder, otherwise display “Sorry Not Found!” Seven wonders – 
//CHICHEN ITZA, CHRIST THE REDEEMER, TAJMAHAL, GREAT WALL OF CHINA, MACHU PICCHU, PETRA, COLOSSEUM 
//Locations – 
//MEXICO, BRAZIL, INDIA, CHINA, PERU, JORDAN, ITALY Example – Country Name: INDIA Output: INDIA – TAJ MAHAL Country Name: USA Output: Sorry Not Found! 

#include <iostream> 
#include <string> 
using namespace std; 
void searchString(string ARR[],string A[],int size, string target) { 
int i,j ; 
for(i=0; i < size; i++) 
if(ARR[i] == target){ 
j=i; 
cout << ARR[i]<<" -- "<< A[j]<< endl; 
} 
else 
cout << "Sorry Not Found!!!" << endl;
} 
int main ( ) 
{ 
string arr[7] = { 
"MEXICO","BRAZIL","INDIA","CHINA","PERU","JORDAN","ITALY" }; string a[7]={"CHICHEN ITZA","CHRIST THE REDEEMER","TAJMAHAL","GREAT WALL OF CHINA","MACHU PICCHU","PETRA","COLOSSEUM"}; 
string target; 
cout<<"Enter the country you want to search: "<<endl; cin>>target; 
searchString( arr,a, 7, target ); 
return 0; 
}

