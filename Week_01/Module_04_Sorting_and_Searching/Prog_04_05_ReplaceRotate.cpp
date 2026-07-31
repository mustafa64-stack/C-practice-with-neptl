#include <iostream>
#include <algorithm>
using namespace std ;
int main(){
    int arr[]={1,2,3,3,5};
    replace(arr,arr+5,3,4);
    cout<<"After replace :";
    for(int i:arr){
        cout<<i<<" ";
    }rotate(arr,arr+3,arr+5);
    cout<<endl<<"After rotation :";
    for(int i:arr){
        cout<<i<<" ";
    }
}