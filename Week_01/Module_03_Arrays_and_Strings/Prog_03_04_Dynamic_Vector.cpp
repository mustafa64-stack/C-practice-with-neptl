#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr;
    int count,sum=0;
    cin>>count;
    arr.resize(count);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];sum+=arr[i];
    }cout<<"Sum :"<<sum<<endl;
}