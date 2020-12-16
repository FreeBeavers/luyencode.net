#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    char n;
    float a, b;
	cin>>a>>n>>b;
    switch(n){
        case '+':
			cout<<fixed<<setprecision(2)<<a+b;
            break;
        case '-':
            cout<<fixed<<setprecision(2)<<a-b;
            break;
        case '*':
            cout<<fixed<<setprecision(2)<<a*b;
            break;
        case '/':
            if(b == 0){
                cout<<"Math Error";
            }else{
                cout<<fixed<<setprecision(2)<<a/b;
            }
            break;
        default:
           break;
    }
	return 0;
}
