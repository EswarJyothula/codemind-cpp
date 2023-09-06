#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long x;
    cin >> x;
    if (x < 0){
        long double res = x/10.0;
        cout << floor(res);
    }
    else{
        cout << x/10;
    }
    return 0;
}