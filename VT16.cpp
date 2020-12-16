#include<iostream>

using namespace std;

int main(){
    int a[10000];
    int dem=0;
    int j =0;
    int u = 0;
        do{
            cin>>a[dem];
            if(a[dem]==0){
                break;
            }
            j = a[dem]; 
            dem++;
        }while(j != 0);

    for(int i = 0; i< dem; i++){
        if(a[i]< 0){
            cout<<a[i]<<" ";
            u++;
        }
    }

    if(u == 0){
        cout<<"NOT FOUND";
    }
    return 0;
}
