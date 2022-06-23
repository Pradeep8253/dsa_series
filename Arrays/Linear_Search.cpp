#include<iostream>
using  namespace std ;

int linear_search(int arr[], int n , int key)
{
    for(int i=0 ; i<n ; i++)
    {
        // check the element is matched with key 
        if(arr[i]==key){
            return i ;
        }
        
    }
  // out of the index
  return -1 ;
}

int main(){
    int arr[] = {22, 35, 88 , 78 , 25 , 30 , 34} ;
    int n = sizeof(arr)/sizeof(int) ;

    int key ; 
    cin>>key ;

    int index = linear_search(arr , n , key);
    if (index!=-1){
        cout<<key << "  is found at index   "<< index<< endl ;
    }
    else{
        cout<<key << "  is not found  "<< endl ;

    }
    return 0 ;

}