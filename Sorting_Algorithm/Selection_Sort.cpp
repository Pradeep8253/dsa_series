#include<iostream>
using namespace std ; 

// Sort the elements in the increasing order 
void selecton_sort(int a[] , int n ){
    for(int pos=0; pos<=n-2; pos++){
        int current = a[pos];
        int min_position =pos ;
        
        // find out the minimum elements 
        for(int j =pos ; j<n ; j++){
        if (a[j]<a[min_position]){
            min_position= j ;
        }
        }
        // Swap outside the loop 
        swap(a[min_position], a[pos]);
    }
}

int main (){
    int arr[]= { -4 , 5, -8, 2, 8 , 9, 11, -12 , 4};
    int n = sizeof(arr)/ sizeof(int);
    selecton_sort(arr, n );

    for(auto x : arr){
        cout<< x << " , " ;
    }

    cout<< endl ;

    return 0 ;

}