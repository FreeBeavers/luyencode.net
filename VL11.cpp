#include<iostream>
#include<math.h>

using namespace std;

bool check(int n){
  if(n<2){
    return false;
  }else{
    int dem = 0;
    for(int i = 2; i<= sqrt(n); i++){
      if(n % i == 0 ){
        dem++;
      }
    }

    if(dem == 0){
      return true;
    }
    return false;
  }
}

int main(){
  int n;
  cin>>n;
    if(check(n)){
      cout<<"YES";
    }else{
      cout<<"NO";
    }
  return 0;
}
