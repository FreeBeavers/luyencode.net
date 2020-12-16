#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i =0; i<n; i++){
        cin>>a[i];
    }

    int max = a[n-1] + a[0];
    int iB = a[n-1];
    int iF = a[0];

    for(int i=n-1; i>0; i--){
        if(max < (a[i] + a[i-1])){
            max = a[i] + a[i-1];
            iB =  a[i-1];
            iF = a[i];
        }
    }
    cout<<iB<<" "<<iF;
    return 0;
}
