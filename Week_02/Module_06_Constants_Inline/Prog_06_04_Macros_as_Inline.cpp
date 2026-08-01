#include <iostream>
using namespace std;
inline double sq(double x){
    return x*x;
}
int main(){
    double a;
    cout<<"Enter the number to get sq. :";
    cin>>a;
    cout<<sq(a)<<endl;
}