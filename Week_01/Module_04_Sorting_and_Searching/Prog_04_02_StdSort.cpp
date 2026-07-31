#include <iostream>
#include <algorithm>
bool compare(int a ,int b){
    return a>b;
}
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n,compare);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}