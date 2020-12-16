#include<iostream>

using namespace std;

int max1 (int a[], int n){
    int max1 = a[0];
    for(int i=1; i<n; i++){
        if(max1 < a[i]){
            max1 = a[i];
        }
    }
    return max1;
}

void max2 (int a[], int n){
    int dem = 0;
    for(int i = 1; i<n; i++){
        if(a[0] == a[i]){
            dem++;
        }
    }

    if(dem == n-1){
        cout<<"NOT FOUND";
    }else{
        int max2 = a[0];
        for(int i=1; i<n ;i++){
            if(max2 < a[i] && a[i] < max1(a,n)){
                max2 = a[i];
            }
        }
        cout<<max2;
    }
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    max2(a, n);
    return 0;
}
