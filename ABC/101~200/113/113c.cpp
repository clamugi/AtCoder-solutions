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
    int N, M;
    cin >> N >> M;

    vector<vector<int>>ken(N+1,vector<int>());
    vector<pair<int,int>>A(M);

    rep(i,M){
        int p, y;
        cin >> p >> y;

        A[i] = make_pair(p,y);
        ken[p].push_back(y);
    }

    rep(i,N+1){
        sort(ken[i].begin(),ken[i].end());
    }


    for(int i = 0; i<M; i++){
        int p = A[i].first;
        int y = A[i].second;

        auto itr = lower_bound(ken[p].begin(),ken[p].end(),y);
        int sita = distance(ken[p].begin(),itr)+1; 

        printf("%06d",p);
        printf("%06d",sita);
        cout << endl;
    }
}