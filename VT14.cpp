#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int max = a[0]*a[1];
    for(int i=0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(max < a[i]*a[j]){
                max = a[i]*a[j];
            }
        }
    }
    cout<< max;
    return 0;
}
