#include <iostream>
#include <vector>
using namespace std;
#define MAX 100
int main(){
    vector<int> arr(MAX);
    int n,sum=0;
    cout<<"Enter number count for dyanmic aarray:";
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>arr[i]; sum+=arr[i];
    }cout<<"Sum of array is :"<<sum<<endl;
}