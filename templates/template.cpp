/* 
 * Author: hemis, Kalpesh Patel
 * मनुष्य अपने विश्वास से निर्मित होता है। जैसा वह मानता है, वैसा ही वह है।
*/

#include <bits/stdc++.h>
using namespace std;

#define i64             long long
#define pii             pair<int, int>
#define pll             pair<i64, i64>
#define vi              vector<int> 
#define vll             vector<i64>
#define pb              push_back
#define eb              emplace_back
#define endl            "\n"
#define sz(a)           (int) a.size()
#define REP(i, a, b)    for (int i = (a); i <= (b); i++)
#define INF             (i64) 1e18

void __print(int x)             { cout << x; }
void __print(long x)            { cout << x; }
void __print(i64 x)             { cout << x; }
void __print(unsigned x)        { cout << x; }
void __print(unsigned long x)   { cout << x; }
void __print(unsigned i64 x)    { cout << x; }
void __print(float x)           { cout << x; }
void __print(double x)          { cout << x; }
void __print(long double x)     { cout << x; }
void __print(char x)            { cout << x; }
void __print(const char *x)     { cout << x; }
void __print(const string &x)   { cout << x; }
void __print(bool x)            { cout << (x ? "true": "false"); }

template<class T, class U> 
void __print(pair<T, U>& p) {
    cout << "(" << p.first << ", " << p.second << ")";
}

template<class T> 
void __print(vector<T>& v) {
    cout << "[";
    bool f = false;
    for (auto d : v) {
        if (f) cout << ", ";
        f = true;
        cout << d;
    }
    cout << "]";
}

template<class T, size_t N>
void __print(array<T, N>& a) {
    cout << "[";
    bool f = false;
    for (auto d : a) {
        if (f) cout << ", ";
        f = true;
        cout << d << endl;
    }
    cout << "]";
}

template<class T>
void __print(deque<T>& v) {
    cout << "[";
    bool f = false;
    for (auto d : v) {
        if (f) cout << ", ";
        f = true;
        cout << d;
    }
    cout << "]";
}

template<class T> 
void __print(set<T>& s) {
    cout << "[";
    bool f = false;
    for (auto d : s) {
        if (f) cout << ", ";
        f = true;
        cout << d;
    }
    cout << "]";
}

template<class T>
void __print(multiset<T>& s) {
    cout << "[";
    bool f = false;
    for (auto d : s) {
        if (f) cout << ", ";
        f = true;
        cout << d;
    }
    cout << "]";
}

template<class T, class U>
void __print(map<T, U>& m) {
    cout << "[";
    bool f = false;
    for (auto p : m) {
        if (f) cout << ", ";
        f = true;
        cout << p.first << ": " << p.second;
    }
    cout << "]";
}

void _print() { cout << "}\n"; }

template<class T, class... Args>
void _print(T t, Args... args) {
    __print(t); 
    if (sizeof... (args)) cout << ", ";
    _print(args...);
}

#define debug(x...) cout << "{" << #x << "} = {"; _print(x)

/* ========================= END OF TEMPLATE ========================= */
 
bool multi_test = 1;

void solve() {

}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);
    int tests = 1;
    if (multi_test) cin >> tests;
    while (tests--) solve();
    return 0;
}

