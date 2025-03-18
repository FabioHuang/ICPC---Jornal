// STATUS: ACC
// TIME: 08:29 MIN

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;

        int total = 0;
        for(int j = 0; j<n; j++){
            int a;
            cin >> a;
            total += a - 1 * (j != 0);
        }
        cout << total << endl;
    }

    return 0;
}