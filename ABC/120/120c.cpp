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
    string S;
    cin >> S;


    stack<int>a;

    int ans = 0;
    for(int i = 0; i<S.length(); i++){
        if(a.empty()){
            a.push(S[i]);
            continue;
        }
        
        if(a.top() != S[i]){
            ans +=2;
            a.pop();
        }
        else{
            a.push(S[i]);
        }
    }
    cout << ans << endl;





}


/*

    vector<int>kazu(2,0)
    rep(i,S.length()){
        kazu[S[i]-'0'] ++;
    }

    cout << min(kazu[0],kazu[1]) << endl;


*/