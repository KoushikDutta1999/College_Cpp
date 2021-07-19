//Write a generic function to sort a list of integer, float and character type values using the Bubble sort method. 

#include <iostream> 
using namespace std; 
template <class Type> void swapitems( Type &a, Type &b){ Type t; 
t=a; 
a=b; 
b=t; 
} 
template <class Type> void bubbleSort( Type arr[], int n){ int i, j; 
for (i = 0; i < n-1; i++) 
for (j = 0; j < n-i-1; j++) 
if (arr[j] > arr[j+1]) 
swapitems(arr[j],arr[j+1]); 
} 
template <class Type> void printArray( Type arr[], int size){ int i; 
for (i = 0; i < size; i++) 
cout << arr[i] << " "; 
cout << endl; 
} 
int main(){ 
int arr[] = {69 , 96 , 55 , 44 , 22 , 11 , 33 , 77}; 
float frr[]={1.3 , 4.5 , 3.2 , 6.7 , 1.1 , 4.3 , 3.2 , 1.5}; 
char crr[]={'C','A','B','D','F','G','E','H'}; 
int n = 8; 
cout<<"Sort list of integers.....";
bubbleSort(arr, n); 
cout<<"Sorted array : "; 
printArray(arr, n); 
cout<<"Sort list of float values....."; 
bubbleSort(frr, n); 
cout<<"Sorted array : "; 
printArray(frr, n); 
cout<<"Sort list of CHAR values....."; 
bubbleSort(crr, n); 
cout<<"Sorted array : "; 
printArray(crr, n); 
return 0; 
} 

