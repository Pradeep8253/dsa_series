#include<iostream> 
using namespace std ; 

// Brote Force approch o(n^3) 

int LargestSubArraySum(int arr[], int n ){
    int largest_sum = 0 ;

    for(int i=0 ; i<n ; i++){
        for(int j = i ; j<n ; j++){

            int subarraysum =0 ; 
            for(int k= i ; k<=j ; k++){
                subarraysum+= arr[k];
            }
            // put a check is subarraysum > largest_sum
            largest_sum = max(largest_sum, subarraysum);
        }
    }
    return largest_sum ;
}

int main (){

    int arr[]={ -2, 3, 4, -3, -12, 20 , 15, 1, 5};
    int n = sizeof(arr)/sizeof(int);

    cout<<LargestSubArraySum(arr, n ) << endl;

    return 0 ;

}