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
    int n;
    cin >> n;

    vector<int>v1;
    vector<int>v2;
    rep(i,n){
        int v;
        cin >> v;
        if(i %2  == 0)v1.push_back(v);
        else v2.push_back(v);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    priority_queue<pair<int,int>>que1;
    priority_queue<pair<int,int>>que2;


    for(int i = 0; i<v1.size();i++){
        int a = 1;
        while(v1[i]== v1[i+1]){
            a++;
            i++;
        }
        que1.push(make_pair(a,v1[i]));
    } 
        
    for(int i = 0; i<v2.size();i++){
        int a = 1;
        while(v2[i]== v2[i+1]){
            a++;
            i++;
        }
        que2.push(make_pair(a,v2[i]));
    } 


    
    int ans = 0;
    auto ans11 = que1.top();
    auto ans21 = que2.top();
    if(ans11.second == ans21.second){
        int ans12, ans22;
        que1.pop();que2.pop();
        if(que1.empty())ans12 = 0;
        else ans12 = que1.top().first;

        if(que2.empty())ans22 = 0;
        else ans22 = que2.top().first;

        ans = min(((n/2 - ans11.first) +(n/2 - ans22)),(n/2 - ans12) +(n/2 - ans21.first));        
    }
    else{
        ans = (n/2 - ans11.first) +(n/2 - ans21.first);
    }

    cout << ans << endl;

    

}