/*Find the minimum value out of all elements in the array.*/

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    int arr[n];
    //input
    for(int i = 0; i<=n-1; i++){
        cin>>arr[i];
    }

    // int min = arr[0];
    int min = INT_MAX;
    for(int i = 0; i<=n-1; i++){
        if(min>arr[i]) min = arr[i];
    }
    cout<<min;
}