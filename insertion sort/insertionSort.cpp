#include<iostream>
#include<climits>
#include<algorithm>

using namespace std;
int main(){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // insertion sort
    for(int i=1; i<n; i++){
        int j = i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}