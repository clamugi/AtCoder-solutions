#include <bits/stdc++.h> 
using namespace std;

long long MOD = 1000000007;
int main(){
    int N;
    cin >> N;

    long long ans = 1;
    for(int i = 1; i<=N; i++){
        ans =  ans * i % MOD;
    }

    cout << ans << endl;
}