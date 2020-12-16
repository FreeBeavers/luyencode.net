#include<iostream>
#include<iomanip>

using namespace std;

int main(){
  int n;
  cin>>n;

  if(n>=2 && n<= 10000){
    float sum = 0;
    for(int i = 2; i<=n; i++){
      sum+=(double)1.0/i;
    }
    cout<<fixed<<setprecision(4)<< sum;
  }
  return 0;
}
