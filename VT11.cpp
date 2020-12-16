#include<iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i =0; i<n; i++){
        cin>>a[i];
    }

    int c;
    for(int i = 1; i<n-1; i++){
        for(int j = i+1 ; j<n-1; j++){
            if(a[i]>a[j]){
                c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
