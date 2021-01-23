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

    vector<int>A(N+1);
    rep(i,N)cin >> A[i];
    A[N] = 0;

    stack<pair<int,int>>rect;
    long long maxv = 0;

    for(int i = 0; i<=N; i++){
        int rect_height = A[i];
        int rect_pos = i;
        if( rect.empty() ){
            rect.push( make_pair(rect_height,rect_pos) );
        }
        else {
            if(rect.top().first <rect_height){
                rect.push(make_pair(rect_height,rect_pos));
            }
            else if(rect.top().first >rect_height){
                int target = i;
                while( !rect.empty() && rect.top().first >= rect_height){
                    pair<int,int> pre = rect.top();
                    rect.pop();
                    long long area = pre.first * (i-pre.second);
                    maxv = max(maxv, area);
                    target = pre.second;
                }
                rect_pos = target;
                rect.push( make_pair(rect_height,rect_pos));

            }
        }
    }

    cout << maxv << endl;





}