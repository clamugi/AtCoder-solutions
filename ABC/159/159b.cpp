#include <bits/stdc++.h> 
using namespace std;
 
#define repr(i,a,b) for (int i=a; i<b; i++)
#define rep(i,n) for (int i=0; i<  n; i++)
#define PI 3.14159265359  
const long long INF = 1LL << 60;
long long MOD = 1000000007;
long long gcd(long long a, long long b) { return b ? gcd(b, a%b) : a; }
long long lcm (int a, int b){return  (long long) a*b /gcd(a,b);}
double radian(double degree){return degree * PI /180.0;}
double degree(double radian){return radian * 180.0/PI;}

bool kaibun(string s){
    string r = s;
    reverse(r.begin(),r.end());
    
    bool kaibun = true;
    for(int i =0; i<(s.size()/2)+1; i++){
        if(r[i] != s[i]){
            kaibun = false;
            return kaibun;
        }
    } 
    return kaibun;
}


int main(){
    string s;
    cin >> s;
 
    bool ans = false;
    ans = kaibun(s);
    if(ans){
        string s2;
        rep(i,(s.size()-1)/2){
            s2 += s[i];
        }
        ans = kaibun(s2);
    }
    if(ans){
        string s3;
        repr(i,(s.size()+3)/2-1,s.size()){
            s3 += s[i];
        }
        ans = kaibun(s3);
    }
    if(ans)cout << "Yes" << endl;
    else cout <<"No" << endl;
 
}