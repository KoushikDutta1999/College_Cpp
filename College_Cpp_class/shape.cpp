//Design a class to overload a function polygon() as follows (i) void polygon(int n, char ch) — with one integer argument and one character type argument that draws a filled square of side n using the character stored in ch. 
//(ii) void polygon(int x, int y) — with two integer arguments that draws a filled rectangle of length x and breadth y, using the symbol ‘@’. 
//(iii) void polygon( ) — with no argument that draws a filled an angle shown below. 

#include<iostream> 
using namespace std; 
class Shape{ 
public: 
int n,x,y; 
string ch; 
void polygon(string ch,int n){ 
cout<<"The square is:"<<endl; 
int i,j; 
for(i=1;i<=n;i++){ 
for(j=1;j<=n;j++){ 
cout<<ch<<" "; 
} 
cout<<endl; 
} 
}
void polygon(int x,int y){ 
cout<<"The rectengle is:"<<endl; for(int i=1;i<=x;i++) 
{ 
for(int j=1;j<=y;j++) 
{ 
cout<<" @ "; 
} 
cout<<endl; 
} 
} 
void polygon(){ 
cout<<"The angle is:"<<endl; int i,j,b=6; 
for(i=1;i<=b;i++){ 
for(j=1;j<=i;j++){ 
cout<<" # "; 
} 
cout<<endl; 
} 
} 
}; 
int main(){ 
Shape std; 
std.polygon(4,6); 
std.polygon(" s ",5); 
std.polygon(); 
return 0; 
}

