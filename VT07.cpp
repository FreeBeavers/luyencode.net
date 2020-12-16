#include<iostream>
 
using namespace std;

int main(){

    int a[12];
    for(int i = 1; i <= 11; i++){
        cin>> a[i];
    }

    int n = a[11];
    int dem = 0;
    for(int i = 1; i <= 10; i++){
        if(n == a[i]){
            cout<<i<<" ";
            dem++;
        }
    }
    if(dem == 0){
        cout<<-1;
    }
    return 0;
}
