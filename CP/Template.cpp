#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    using ll = long long;
    const ll INF = 1e18;
    const int MOD = 1'000'000'007;

    auto gcdll = [&](ll a, ll b) {
        while (b) { a %= b; swap(a, b); }
        return a;
    };

    auto lcmll = [&](ll a, ll b) {
        return a / gcdll(a, b) * b;
    };

    function<ll(ll,ll,ll)> modpow = [&](ll a, ll e, ll m) {
        ll r = 1;
        while (e) {
            if (e & 1) r = r * a % m;
            a = a * a % m;
            e >>= 1;
        }
        return r;
    };

    auto modinv = [&](ll a) {
        return modpow(a, MOD - 2, MOD);
    };
    
    cin >> t;      
    while (t--) {
        //START
        // write your solution here
        

    }

    return 0;
}
