#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int data[]={12,89,10,5,4};
    int k=4;
    sort(data,data+5);
    if(binary_search(data,data+5,k)){
        cout<<"Found !"<<endl;
    }else cout<<"Not Found !"<<endl;
}