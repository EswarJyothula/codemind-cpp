#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int p,r,t;
    cin >> p >> r >> t;
    double res = p * pow((1 + (0.01 * r)),t);
    printf("%.2f", res);
    return 0;
}