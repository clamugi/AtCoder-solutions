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
    long long K;
    cin >> N >> K;

    vector<pair<int,int>>A(N+1);
    rep(i,N){
        int a;
        cin >> a;
        A[i+1]=make_pair(a,0);
    }

    vector<int>roop;
    int i = 1;
    
    int yobun = 0;
    while(true){
        int next = A[i].first;
        int check = A[i].second;

        if(check){
            for(auto x: roop){
                if(i != x){
                    yobun ++;
                }
                else break;
            }

            break;
        }
        else{
            roop.push_back(i);
            A[i].second = 1;
            i = next;
        }
    }


   
    if(K<=yobun)cout << roop[K]<<endl;
    else {
        K-=yobun;
        int roopsize= roop.size()-yobun;
        cout <<roop[yobun +K%roopsize] << endl;
    }

}