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
    cin >> N;

    map<string,int>person;
    rep(i,N){
        string s;
        cin >> s;
        person[s]++;
    }
    
    string ans;
    int num = 0;
    for(auto x: person){
        if(x.second > num){
            num = x.second;
            ans = x.first;
        }
    }
    cout << ans << endl;

}