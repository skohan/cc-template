
#include <bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;

#define nl "\n"

const int N = 3 * 1e5 + 2;
// const int mod = 1e9 + 7;
const ll mod = 998244353;

int smalla = 97;
int biga = 65;


void solve()
{
    bool sp = false;

    for (int i = 0; i < 3; i++){
        int x; cin >> x;
        if (x == 7)
            sp = true;
    }

    cout << (sp ? "YES" : "NO") << nl;
}
   
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t = 1;
    cin>>t;

    int c = 1;

    while(t--)
    {
        // cout << "Case #" << c <<": " ;

        solve();
        c++;
    }
}


// Binary Search

// int a = 0, b = n-1;
// while (a <= b){
//     int m = a + (b-a)/2;
//     if (arr[m] == x){
//         // found it
//     }

//     if (arr[m] > x) b = m-1;
//     else            a = m+1;
// }
 