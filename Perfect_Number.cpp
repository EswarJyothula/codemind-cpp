#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    vector<int>V;
    cin >> n;
    for (int i = 1; i < n; i++){
        if (n % i == 0){
            V.push_back(i);
        }
    }
    int sum = 0;
    for (int j = 0; j < V.size(); j++){
        sum = sum + V[j];
    }
    if (sum == n){
        cout << "True";
    }
    else{
        cout << "False";
    }
    return 0;
}