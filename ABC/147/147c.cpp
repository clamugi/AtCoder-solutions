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

int main(){
    int N;
    cin >> N;

    vector<vector<pair<int,int>>>T(N,vector<pair<int,int>>());
    rep(i,N){
        int A;
        cin >> A;

        rep(j,A){
            int x, y;
            cin >> x >> y;
            x--;

            T[i].push_back(make_pair(x,y));
        }
    }

    int ans = 0;
    for(int bit = 0; bit < (1<<N); bit++){

        vector<int>person(N,0);
        bool check = true;
        for(int i = 0; i<N; i++){
            /*正直者と仮定*/
            if(bit & (1<<i)){
                person[i]=1;
            }
        }
        /* 矛盾チェック*/
        for(int i = 0; i<N; i++){
            for(auto ts:T[i]){
            if(person[i] == 0){
                continue;
            }
            else{
                int x = ts.first;
                int y = ts.second;
                if(person[x] != y)check = false;
            }
        }

        }
        /* 人数チェック*/
        if(check){
            int nums = 0;
            for(auto num:person){
                if(num == 1)nums++;
            }
            ans = max(nums,ans);
        }
    }

    cout << ans << endl;



}