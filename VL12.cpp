#include<iostream>
#include<math.h>

using namespace std;

void input(int &n){
    cin>>n;
}

void list(int n){
    int dem = 0;
    for(int i = abs(n); i>=1; i--){
    if(n%i == 0 ){
        cout<<i<<" ";
        dem++;
    }
  }
  if(dem == 0 || n == 0){
    cout<<"None";
  }
}

int main(){
    int n;
    input(n);
    list(n);
    return 0;
}
