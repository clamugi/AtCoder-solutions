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

    map<string,pair<int,int>>word;

    rep(i,N){
        string s;
        cin >> s;

        if(s[0] == '!'){
            word[s.substr(1)].second = 1;
        }
        else word[s].first = 1;
    }

    for(auto s: word){
        if(s.second.first == s.second.second){
              cout << s.first << endl;
              return 0;
        }
    }
    cout << "satisfiable" << endl; 

}