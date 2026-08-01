#include <iostream>
#include <algorithm>
using namespace std ;

#define square(x) (x)*(x)//if we do x*x .error !!!
int main(){
    int a;
    cout<<"Enter no. :";
    cin>>a;
    cout<<square(a+1)<<endl;
}