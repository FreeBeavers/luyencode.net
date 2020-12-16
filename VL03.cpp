#include<iostream>

using namespace std;

int main (){
  int n;
  cin>>n;
  
  if(n >= 2){
    int sum = 0;
    for(int i = 2; i <= n; i++){
      sum+=i;
    }
    int s= sum+ 2*n;
    cout<<s;
  }
  return 0;
  
}
