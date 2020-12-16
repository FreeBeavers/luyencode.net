#include<iostream>

using namespace std;

int main() {

    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n;i++){
        cin>>a[i];
    }
    int vMax = a[0];
    int  iMax= 0;
    for(int i = 1; i <n; i++){
        if(vMax <= a[i]){
            vMax = a[i];
            iMax = i;
            
        }
    }
    cout<<iMax;
    return 0;
}
