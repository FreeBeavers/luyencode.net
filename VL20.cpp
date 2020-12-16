#include<iostream>
#include<math.h>

using namespace std;

int main(){
    char a,b;
    cin>>a>>b;

    if(a<=b && a >= 'a' && a <= 'z' && a>= 'a' && b <= 'z' ){
        for(int i = (int)a -32; i<= (int)b -32; i++){
            cout<<(char)i<<" ";
        }
    }
    return 0;
}
