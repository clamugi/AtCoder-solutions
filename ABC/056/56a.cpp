#include <bits/stdc++.h> 
using namespace std;

int main (){
    string a, b;
    cin >> a >> b;
    if(a == "H"){
        cout << (b == "H"? 'H':'D') << endl;
    }
    else cout << (b == "H"? 'D': 'H') << endl;

}