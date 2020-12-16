#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int a;
    cin>>a;
        int dem = 0;
        for(int i = 1; i<= abs(a); i++){
            if( a % i == 0){
                dem++;
            }
        }
        cout<< dem;
    return 0;
}
