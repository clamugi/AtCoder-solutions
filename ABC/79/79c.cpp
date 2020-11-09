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
    string s;
    cin >> s;

    vector<int>num(4);
    rep(i,4)num[i] = s[i]-'0';
    int ope = 3;

    for(int bit = 0; bit< 1<<3 ; bit++){
        vector<int>ope(4,0);
        for(int i = 0; i<3; i++){
            if( bit & (1<<i) ){
                ope[i+1] = 1;
            }
        }

        int ans=num[0];
        for(int i = 1; i<=3; i++){
            if(ope[i] == 0){
                ans += num[i];
            }
            else ans -= num[i];
        }

        if(ans == 7){
            cout << num[0];
            for(int i = 1; i<=3; i++){
                if(ope[i] == 0)cout << "+";
                else cout << "-";
                cout << num[i];
            }
            cout << "=7" <<endl;
            return 0;
        }


    }

}