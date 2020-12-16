#include<iostream>

using namespace std;

int main(){
  int n;
  cin>>n;

  if(n>0 && n<=12){
    int gt = 1;
    for(int i = 1; i<= n; i++){
      gt*=i;
    }
    cout << gt;
  }else if(n==0){
    cout<<1;
  }
  return 0;
}
