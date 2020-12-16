#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    float r;
    cin>>r;
    cout<<fixed<<setprecision(3)<<2*3.14*r<<" ";
    cout<<fixed<<setprecision(3)<<3.14*r*r;
    scanf("%f", &r);
    return 0;
}
