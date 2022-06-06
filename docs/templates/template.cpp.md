---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"templates\\\\template.cpp\"\n/* \r\n * Author: hemis, Kalpesh\
    \ Patel\r\n * \u092E\u0928\u0941\u0937\u094D\u092F \u0905\u092A\u0928\u0947 \u0935\
    \u093F\u0936\u094D\u0935\u093E\u0938 \u0938\u0947 \u0928\u093F\u0930\u094D\u092E\
    \u093F\u0924 \u0939\u094B\u0924\u093E \u0939\u0948\u0964 \u091C\u0948\u0938\u093E\
    \ \u0935\u0939 \u092E\u093E\u0928\u0924\u093E \u0939\u0948, \u0935\u0948\u0938\
    \u093E \u0939\u0940 \u0935\u0939 \u0939\u0948\u0964\r\n*/\r\n\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n\r\n#define i64             long long\r\n#define pii\
    \             pair<int, int>\r\n#define pll             pair<i64, i64>\r\n#define\
    \ vi              vector<int> \r\n#define vll             vector<i64>\r\n#define\
    \ vvi             vector<vector<int>>\r\n#define vvll            vector<vector<i64>>\r\
    \n#define pb              push_back\r\n#define eb              emplace_back\r\n\
    #define endl            \"\\n\"\r\n#define sz(a)           (int) a.size()\r\n\
    #define REP(i, a, b)    for (int i = (a); i <= (b); i++)\r\n#define INF      \
    \       (i64) 1e18\r\n\r\nvoid __print(int x)             { cout << x; }\r\nvoid\
    \ __print(long x)            { cout << x; }\r\nvoid __print(i64 x)           \
    \  { cout << x; }\r\nvoid __print(unsigned x)        { cout << x; }\r\nvoid __print(unsigned\
    \ long x)   { cout << x; }\r\nvoid __print(unsigned i64 x)    { cout << x; }\r\
    \nvoid __print(float x)           { cout << x; }\r\nvoid __print(double x)   \
    \       { cout << x; }\r\nvoid __print(long double x)     { cout << x; }\r\nvoid\
    \ __print(char x)            { cout << x; }\r\nvoid __print(const char *x)   \
    \  { cout << x; }\r\nvoid __print(const string &x)   { cout << x; }\r\nvoid __print(bool\
    \ x)            { cout << (x ? \"true\": \"false\"); }\r\n\r\ntemplate<class T,\
    \ class U> \r\nvoid __print(pair<T, U>& p) {\r\n    cout << \"(\" << p.first <<\
    \ \", \" << p.second << \")\";\r\n}\r\n\r\ntemplate<class T> \r\nvoid __print(vector<T>&\
    \ v) {\r\n    cout << \"[\";\r\n    bool f = false;\r\n    for (auto d : v) {\r\
    \n        if (f) cout << \", \";\r\n        f = true;\r\n        cout << d;\r\n\
    \    }\r\n    cout << \"]\";\r\n}\r\n\r\ntemplate<class T, size_t N>\r\nvoid __print(array<T,\
    \ N>& a) {\r\n    cout << \"[\";\r\n    bool f = false;\r\n    for (auto d : a)\
    \ {\r\n        if (f) cout << \", \";\r\n        f = true;\r\n        cout <<\
    \ d << endl;\r\n    }\r\n    cout << \"]\";\r\n}\r\n\r\ntemplate<class T>\r\n\
    void __print(deque<T>& v) {\r\n    cout << \"[\";\r\n    bool f = false;\r\n \
    \   for (auto d : v) {\r\n        if (f) cout << \", \";\r\n        f = true;\r\
    \n        cout << d;\r\n    }\r\n    cout << \"]\";\r\n}\r\n\r\ntemplate<class\
    \ T> \r\nvoid __print(set<T>& s) {\r\n    cout << \"[\";\r\n    bool f = false;\r\
    \n    for (auto d : s) {\r\n        if (f) cout << \", \";\r\n        f = true;\r\
    \n        cout << d;\r\n    }\r\n    cout << \"]\";\r\n}\r\n\r\ntemplate<class\
    \ T>\r\nvoid __print(multiset<T>& s) {\r\n    cout << \"[\";\r\n    bool f = false;\r\
    \n    for (auto d : s) {\r\n        if (f) cout << \", \";\r\n        f = true;\r\
    \n        cout << d;\r\n    }\r\n    cout << \"]\";\r\n}\r\n\r\ntemplate<class\
    \ T, class U>\r\nvoid __print(map<T, U>& m) {\r\n    cout << \"[\";\r\n    bool\
    \ f = false;\r\n    for (auto p : m) {\r\n        if (f) cout << \", \";\r\n \
    \       f = true;\r\n        cout << p.first << \": \" << p.second;\r\n    }\r\
    \n    cout << \"]\";\r\n}\r\n\r\nvoid _print() { cout << \"}\\n\"; }\r\n\r\ntemplate<class\
    \ T, class... Args>\r\nvoid _print(T t, Args... args) {\r\n    __print(t); \r\n\
    \    if (sizeof... (args)) cout << \", \";\r\n    _print(args...);\r\n}\r\n\r\n\
    #define debug(x...) cout << \"{\" << #x << \"} = {\"; _print(x)\r\n\r\n/* =========================\
    \ END OF TEMPLATE ========================= */\r\n \r\nbool multi_test = 1;\r\n\
    \r\nvoid solve() {\r\n\r\n}\r\n\r\nint main() {\r\n    ios::sync_with_stdio(false);\
    \ \r\n    cin.tie(0);\r\n    int tests = 1;\r\n    if (multi_test) cin >> tests;\r\
    \n    while (tests--) solve();\r\n    return 0;\r\n}\r\n\r\n"
  code: "/* \r\n * Author: hemis, Kalpesh Patel\r\n * \u092E\u0928\u0941\u0937\u094D\
    \u092F \u0905\u092A\u0928\u0947 \u0935\u093F\u0936\u094D\u0935\u093E\u0938 \u0938\
    \u0947 \u0928\u093F\u0930\u094D\u092E\u093F\u0924 \u0939\u094B\u0924\u093E \u0939\
    \u0948\u0964 \u091C\u0948\u0938\u093E \u0935\u0939 \u092E\u093E\u0928\u0924\u093E\
    \ \u0939\u0948, \u0935\u0948\u0938\u093E \u0939\u0940 \u0935\u0939 \u0939\u0948\
    \u0964\r\n*/\r\n\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n\r\n#define\
    \ i64             long long\r\n#define pii             pair<int, int>\r\n#define\
    \ pll             pair<i64, i64>\r\n#define vi              vector<int> \r\n#define\
    \ vll             vector<i64>\r\n#define vvi             vector<vector<int>>\r\
    \n#define vvll            vector<vector<i64>>\r\n#define pb              push_back\r\
    \n#define eb              emplace_back\r\n#define endl            \"\\n\"\r\n\
    #define sz(a)           (int) a.size()\r\n#define REP(i, a, b)    for (int i =\
    \ (a); i <= (b); i++)\r\n#define INF             (i64) 1e18\r\n\r\nvoid __print(int\
    \ x)             { cout << x; }\r\nvoid __print(long x)            { cout << x;\
    \ }\r\nvoid __print(i64 x)             { cout << x; }\r\nvoid __print(unsigned\
    \ x)        { cout << x; }\r\nvoid __print(unsigned long x)   { cout << x; }\r\
    \nvoid __print(unsigned i64 x)    { cout << x; }\r\nvoid __print(float x)    \
    \       { cout << x; }\r\nvoid __print(double x)          { cout << x; }\r\nvoid\
    \ __print(long double x)     { cout << x; }\r\nvoid __print(char x)          \
    \  { cout << x; }\r\nvoid __print(const char *x)     { cout << x; }\r\nvoid __print(const\
    \ string &x)   { cout << x; }\r\nvoid __print(bool x)            { cout << (x\
    \ ? \"true\": \"false\"); }\r\n\r\ntemplate<class T, class U> \r\nvoid __print(pair<T,\
    \ U>& p) {\r\n    cout << \"(\" << p.first << \", \" << p.second << \")\";\r\n\
    }\r\n\r\ntemplate<class T> \r\nvoid __print(vector<T>& v) {\r\n    cout << \"\
    [\";\r\n    bool f = false;\r\n    for (auto d : v) {\r\n        if (f) cout <<\
    \ \", \";\r\n        f = true;\r\n        cout << d;\r\n    }\r\n    cout << \"\
    ]\";\r\n}\r\n\r\ntemplate<class T, size_t N>\r\nvoid __print(array<T, N>& a) {\r\
    \n    cout << \"[\";\r\n    bool f = false;\r\n    for (auto d : a) {\r\n    \
    \    if (f) cout << \", \";\r\n        f = true;\r\n        cout << d << endl;\r\
    \n    }\r\n    cout << \"]\";\r\n}\r\n\r\ntemplate<class T>\r\nvoid __print(deque<T>&\
    \ v) {\r\n    cout << \"[\";\r\n    bool f = false;\r\n    for (auto d : v) {\r\
    \n        if (f) cout << \", \";\r\n        f = true;\r\n        cout << d;\r\n\
    \    }\r\n    cout << \"]\";\r\n}\r\n\r\ntemplate<class T> \r\nvoid __print(set<T>&\
    \ s) {\r\n    cout << \"[\";\r\n    bool f = false;\r\n    for (auto d : s) {\r\
    \n        if (f) cout << \", \";\r\n        f = true;\r\n        cout << d;\r\n\
    \    }\r\n    cout << \"]\";\r\n}\r\n\r\ntemplate<class T>\r\nvoid __print(multiset<T>&\
    \ s) {\r\n    cout << \"[\";\r\n    bool f = false;\r\n    for (auto d : s) {\r\
    \n        if (f) cout << \", \";\r\n        f = true;\r\n        cout << d;\r\n\
    \    }\r\n    cout << \"]\";\r\n}\r\n\r\ntemplate<class T, class U>\r\nvoid __print(map<T,\
    \ U>& m) {\r\n    cout << \"[\";\r\n    bool f = false;\r\n    for (auto p : m)\
    \ {\r\n        if (f) cout << \", \";\r\n        f = true;\r\n        cout <<\
    \ p.first << \": \" << p.second;\r\n    }\r\n    cout << \"]\";\r\n}\r\n\r\nvoid\
    \ _print() { cout << \"}\\n\"; }\r\n\r\ntemplate<class T, class... Args>\r\nvoid\
    \ _print(T t, Args... args) {\r\n    __print(t); \r\n    if (sizeof... (args))\
    \ cout << \", \";\r\n    _print(args...);\r\n}\r\n\r\n#define debug(x...) cout\
    \ << \"{\" << #x << \"} = {\"; _print(x)\r\n\r\n/* ========================= END\
    \ OF TEMPLATE ========================= */\r\n \r\nbool multi_test = 1;\r\n\r\n\
    void solve() {\r\n\r\n}\r\n\r\nint main() {\r\n    ios::sync_with_stdio(false);\
    \ \r\n    cin.tie(0);\r\n    int tests = 1;\r\n    if (multi_test) cin >> tests;\r\
    \n    while (tests--) solve();\r\n    return 0;\r\n}\r\n\r\n"
  dependsOn: []
  isVerificationFile: false
  path: templates\template.cpp
  requiredBy: []
  timestamp: '2022-06-06 14:39:31-07:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: templates\template.cpp
layout: document
redirect_from:
- /library\templates\template.cpp
- /library\templates\template.cpp.html
title: templates\template.cpp
---
