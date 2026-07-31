#include <iostream>
#include <vector>
using namespace std;
int main(){
    int temp;
    int n;
    cout<<"Enter the number of elements in array :";
    cin>>n;

    int data[n];
    cout<<"Enter the elements of array to get them sorted :";
    for(int i=0;i<n;i++){
        cin>>data[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(data[j]>data[j+1]){
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }

        }
    }cout<<"Elements sorted in ascending order :";
    for(int i=0;i<n;i++){
            cout<<data[i]<<" ";
        }cout<<endl;
}