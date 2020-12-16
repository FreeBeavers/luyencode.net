#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int n;
    cin>>n;

    double sum =0;
    for(double i=1; i<=n; i++){
        sum+=1/(i*(i+1));
    }
    cout<<fixed<<setprecision(5)<<sum;
    return 0;
}
