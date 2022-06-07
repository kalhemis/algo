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
  bundledCode: "#line 1 \"templates/template.cpp\"\n/* \n * Author: hemis, Kalpesh\
    \ Patel\n * \u092E\u0928\u0941\u0937\u094D\u092F \u0905\u092A\u0928\u0947 \u0935\
    \u093F\u0936\u094D\u0935\u093E\u0938 \u0938\u0947 \u0928\u093F\u0930\u094D\u092E\
    \u093F\u0924 \u0939\u094B\u0924\u093E \u0939\u0948\u0964 \u091C\u0948\u0938\u093E\
    \ \u0935\u0939 \u092E\u093E\u0928\u0924\u093E \u0939\u0948, \u0935\u0948\u0938\
    \u093E \u0939\u0940 \u0935\u0939 \u0939\u0948\u0964\n*/\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n\n#define i64             long long\n#define pii       \
    \      pair<int, int>\n#define pll             pair<i64, i64>\n#define vi    \
    \          vector<int> \n#define vll             vector<i64>\n#define vvi    \
    \         vector<vector<int>>\n#define vvll            vector<vector<i64>>\n#define\
    \ pb              push_back\n#define eb              emplace_back\n#define endl\
    \            \"\\n\"\n#define sz(a)           (int) a.size()\n#define REP(i, a,\
    \ b)    for (int i = (a); i <= (b); i++)\n#define INF             (i64) 1e18\n\
    \nvoid __print(int x)             { cout << x; }\nvoid __print(long x)       \
    \     { cout << x; }\nvoid __print(i64 x)             { cout << x; }\nvoid __print(unsigned\
    \ x)        { cout << x; }\nvoid __print(unsigned long x)   { cout << x; }\nvoid\
    \ __print(unsigned i64 x)    { cout << x; }\nvoid __print(float x)           {\
    \ cout << x; }\nvoid __print(double x)          { cout << x; }\nvoid __print(long\
    \ double x)     { cout << x; }\nvoid __print(char x)            { cout << x; }\n\
    void __print(const char *x)     { cout << x; }\nvoid __print(const string &x)\
    \   { cout << x; }\nvoid __print(bool x)            { cout << (x ? \"true\": \"\
    false\"); }\n\ntemplate<class T, class U> \nvoid __print(pair<T, U>& p) {\n  \
    \  cout << \"(\" << p.first << \", \" << p.second << \")\";\n}\n\ntemplate<class\
    \ T> \nvoid __print(vector<T>& v) {\n    cout << \"[\";\n    bool f = false;\n\
    \    for (auto d : v) {\n        if (f) cout << \", \";\n        f = true;\n \
    \       cout << d;\n    }\n    cout << \"]\";\n}\n\ntemplate<class T, size_t N>\n\
    void __print(array<T, N>& a) {\n    cout << \"[\";\n    bool f = false;\n    for\
    \ (auto d : a) {\n        if (f) cout << \", \";\n        f = true;\n        cout\
    \ << d << endl;\n    }\n    cout << \"]\";\n}\n\ntemplate<class T>\nvoid __print(deque<T>&\
    \ v) {\n    cout << \"[\";\n    bool f = false;\n    for (auto d : v) {\n    \
    \    if (f) cout << \", \";\n        f = true;\n        cout << d;\n    }\n  \
    \  cout << \"]\";\n}\n\ntemplate<class T> \nvoid __print(set<T>& s) {\n    cout\
    \ << \"[\";\n    bool f = false;\n    for (auto d : s) {\n        if (f) cout\
    \ << \", \";\n        f = true;\n        cout << d;\n    }\n    cout << \"]\"\
    ;\n}\n\ntemplate<class T>\nvoid __print(multiset<T>& s) {\n    cout << \"[\";\n\
    \    bool f = false;\n    for (auto d : s) {\n        if (f) cout << \", \";\n\
    \        f = true;\n        cout << d;\n    }\n    cout << \"]\";\n}\n\ntemplate<class\
    \ T, class U>\nvoid __print(map<T, U>& m) {\n    cout << \"[\";\n    bool f =\
    \ false;\n    for (auto p : m) {\n        if (f) cout << \", \";\n        f =\
    \ true;\n        cout << p.first << \": \" << p.second;\n    }\n    cout << \"\
    ]\";\n}\n\nvoid _print() { cout << \"}\\n\"; }\n\ntemplate<class T, class... Args>\n\
    void _print(T t, Args... args) {\n    __print(t); \n    if (sizeof... (args))\
    \ cout << \", \";\n    _print(args...);\n}\n\n#define debug(x...) cout << \"{\"\
    \ << #x << \"} = {\"; _print(x)\n\n/* ========================= END OF TEMPLATE\
    \ ========================= */\n \nbool multi_test = 1;\n\nvoid solve() {\n\n\
    }\n\nint main() {\n    ios::sync_with_stdio(false); \n    cin.tie(0);\n    int\
    \ tests = 1;\n    if (multi_test) cin >> tests;\n    while (tests--) solve();\n\
    \    return 0;\n}\n\n"
  code: "/* \n * Author: hemis, Kalpesh Patel\n * \u092E\u0928\u0941\u0937\u094D\u092F\
    \ \u0905\u092A\u0928\u0947 \u0935\u093F\u0936\u094D\u0935\u093E\u0938 \u0938\u0947\
    \ \u0928\u093F\u0930\u094D\u092E\u093F\u0924 \u0939\u094B\u0924\u093E \u0939\u0948\
    \u0964 \u091C\u0948\u0938\u093E \u0935\u0939 \u092E\u093E\u0928\u0924\u093E \u0939\
    \u0948, \u0935\u0948\u0938\u093E \u0939\u0940 \u0935\u0939 \u0939\u0948\u0964\n\
    */\n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#define i64          \
    \   long long\n#define pii             pair<int, int>\n#define pll           \
    \  pair<i64, i64>\n#define vi              vector<int> \n#define vll         \
    \    vector<i64>\n#define vvi             vector<vector<int>>\n#define vvll  \
    \          vector<vector<i64>>\n#define pb              push_back\n#define eb\
    \              emplace_back\n#define endl            \"\\n\"\n#define sz(a)  \
    \         (int) a.size()\n#define REP(i, a, b)    for (int i = (a); i <= (b);\
    \ i++)\n#define INF             (i64) 1e18\n\nvoid __print(int x)            \
    \ { cout << x; }\nvoid __print(long x)            { cout << x; }\nvoid __print(i64\
    \ x)             { cout << x; }\nvoid __print(unsigned x)        { cout << x;\
    \ }\nvoid __print(unsigned long x)   { cout << x; }\nvoid __print(unsigned i64\
    \ x)    { cout << x; }\nvoid __print(float x)           { cout << x; }\nvoid __print(double\
    \ x)          { cout << x; }\nvoid __print(long double x)     { cout << x; }\n\
    void __print(char x)            { cout << x; }\nvoid __print(const char *x)  \
    \   { cout << x; }\nvoid __print(const string &x)   { cout << x; }\nvoid __print(bool\
    \ x)            { cout << (x ? \"true\": \"false\"); }\n\ntemplate<class T, class\
    \ U> \nvoid __print(pair<T, U>& p) {\n    cout << \"(\" << p.first << \", \" <<\
    \ p.second << \")\";\n}\n\ntemplate<class T> \nvoid __print(vector<T>& v) {\n\
    \    cout << \"[\";\n    bool f = false;\n    for (auto d : v) {\n        if (f)\
    \ cout << \", \";\n        f = true;\n        cout << d;\n    }\n    cout << \"\
    ]\";\n}\n\ntemplate<class T, size_t N>\nvoid __print(array<T, N>& a) {\n    cout\
    \ << \"[\";\n    bool f = false;\n    for (auto d : a) {\n        if (f) cout\
    \ << \", \";\n        f = true;\n        cout << d << endl;\n    }\n    cout <<\
    \ \"]\";\n}\n\ntemplate<class T>\nvoid __print(deque<T>& v) {\n    cout << \"\
    [\";\n    bool f = false;\n    for (auto d : v) {\n        if (f) cout << \",\
    \ \";\n        f = true;\n        cout << d;\n    }\n    cout << \"]\";\n}\n\n\
    template<class T> \nvoid __print(set<T>& s) {\n    cout << \"[\";\n    bool f\
    \ = false;\n    for (auto d : s) {\n        if (f) cout << \", \";\n        f\
    \ = true;\n        cout << d;\n    }\n    cout << \"]\";\n}\n\ntemplate<class\
    \ T>\nvoid __print(multiset<T>& s) {\n    cout << \"[\";\n    bool f = false;\n\
    \    for (auto d : s) {\n        if (f) cout << \", \";\n        f = true;\n \
    \       cout << d;\n    }\n    cout << \"]\";\n}\n\ntemplate<class T, class U>\n\
    void __print(map<T, U>& m) {\n    cout << \"[\";\n    bool f = false;\n    for\
    \ (auto p : m) {\n        if (f) cout << \", \";\n        f = true;\n        cout\
    \ << p.first << \": \" << p.second;\n    }\n    cout << \"]\";\n}\n\nvoid _print()\
    \ { cout << \"}\\n\"; }\n\ntemplate<class T, class... Args>\nvoid _print(T t,\
    \ Args... args) {\n    __print(t); \n    if (sizeof... (args)) cout << \", \"\
    ;\n    _print(args...);\n}\n\n#define debug(x...) cout << \"{\" << #x << \"} =\
    \ {\"; _print(x)\n\n/* ========================= END OF TEMPLATE =========================\
    \ */\n \nbool multi_test = 1;\n\nvoid solve() {\n\n}\n\nint main() {\n    ios::sync_with_stdio(false);\
    \ \n    cin.tie(0);\n    int tests = 1;\n    if (multi_test) cin >> tests;\n \
    \   while (tests--) solve();\n    return 0;\n}\n\n"
  dependsOn: []
  isVerificationFile: false
  path: templates/template.cpp
  requiredBy: []
  timestamp: '2022-06-06 20:40:13-07:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: templates/template.cpp
layout: document
redirect_from:
- /library/templates/template.cpp
- /library/templates/template.cpp.html
title: templates/template.cpp
---
