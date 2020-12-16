#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
    if( a == 0){
        if(b == 0){
            cout<<"INF";
        }else{
            cout<<"NO";
        }
    }else{
        if(b == 0){
            cout<<fixed<<setprecision(2)<<"0.00";
        }else{
            cout<<fixed<<setprecision(2)<<(-(float)b)/a;
        }
    }
    return 0;
}
