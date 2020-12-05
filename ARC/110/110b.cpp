#include <bits/stdc++.h> 
using namespace std;
 
#define repr(i,a,b) for (int i=a; i<b; i++)
#define rep(i,n) for (int i=0; i<  n; i++)
#define PI 3.14159265359  
const long long INF = 1LL << 60;
long long MOD = 1000000007;
long long gcd(long long a, long long b) { return b ? gcd(b, a%b) : a; }
long long lcm (int a, int b){return  (long long) a*b /gcd(a,b);}

int main(){
    int N;
    string T;
    cin >> N >> T;
    long long ans = 10000000000;

    if(N == 1){
        if(T == "1")ans *= 2;
        cout << ans << endl;
        return 0;
    }
    if(N == 2){
        if(T == "00")ans = 0;
        else if(T == "01")ans--;
        cout << ans << endl;
        return 0;

    }


    bool check = true;;
    for(int i = 2; i<N; i++){
        if(T[i] == '1'){
            if(T[i-1] == '1' && T[i-2] == '1')check = false;
            else if(T[i-1] == '0' && T[i-2] == '0')check = false;
        }
        else{
            if(!(T[i-1] == '1' && T[i-2] == '1') )check = false;
        }     
    }
    if(!check){
        cout << 0 << endl;
        return 0;
    }

    ans -= N/3;
    if(N%3 == 0 && T[0] == '1' && T[1] == '1')ans += 1;
    else if(N%3 == 2 && T[0] == '0')ans--;


    cout << ans << endl;






}

