#include<iostream>

using namespace std;

int main(){
    int n, x;
    cin>>n>>x;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int dem = 0;
    for(int i=0; i<n; i++){
        if(a[i] ==x){
            dem++;
        }
    }
    cout<<dem;
    return 0;
}