#include<iostream>

using namespace std;

int main(){
  int a,b;
  cin>> a>>b;
  if(a <= b && a>= -10000 && b<= 10000){
    int s = 0;
    for(int i = a; i<=b; i++){
      if(i %2 == 0){
        s +=i;
      }
    }
    cout<< s;
  }
  return 0;
}
