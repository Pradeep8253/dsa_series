#include<iostream>
using namespace std ;


int main()
{

int n ; 
int marks[100] = {0};

cout<<"Enter the number ";
cin>>n ;

// input 
for(int i=0; i<n; i++){
    cin>>marks[i] ;
   
}

// Output
for(int i=0; i<n; i++)
{
    cout<<marks[i]<<" " << endl ;

}

return 0 ;

}