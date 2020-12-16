#include<iostream>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int ab = abs(a*b);
    for(int i =1 ;i<=ab; i++){
        if(i%a ==0 && i%b ==0){
            cout<<i;
            break;
        }
    }
    return 0;
}
