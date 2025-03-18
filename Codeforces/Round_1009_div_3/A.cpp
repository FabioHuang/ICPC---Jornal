// STATUS: ACC
// TIME: 05:36 MIN

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for(int i = 0; i<t; i++){
        int l, r, d, u;
        cin >> l >> r >> d >> u;
        if(l == r && d == u && l == d){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}