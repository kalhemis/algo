---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links:
    - https://codeforces.com/contest/1676/submission/158560831
    - https://github.com/atcoder/ac-library/blob/master/atcoder/fenwicktree.hpp
    - https://www.youtube.com/watch?v=Ti_U3Q_G7yM&list=PLrS21S1jm43igE57Ye_edwds_iL7ZOAG4&index=20&ab_channel=PavelMavrin
  bundledCode: "#line 1 \"data_structures/fenwick.hpp\"\n/*\r\n * Author: Kalpesh\
    \ Patel, hemis\r\n * Description: Fenwick Tree Data Structure\r\n * Source:\r\n\
    \ * - https://www.youtube.com/watch?v=Ti_U3Q_G7yM&list=PLrS21S1jm43igE57Ye_edwds_iL7ZOAG4&index=20&ab_channel=PavelMavrin\r\
    \n * - https://github.com/atcoder/ac-library/blob/master/atcoder/fenwicktree.hpp\r\
    \n * Sample Usage:\r\n * - https://codeforces.com/contest/1676/submission/158560831\r\
    \n*/\r\n\r\ntemplate<typename T> struct fenwick_tree {\r\n    int n;\r\n    vector<T>\
    \ data;\r\n\r\n    fenwick_tree(int _n) : n(_n) {\r\n        data = vector<T>(n);\r\
    \n    }\r\n\r\n    void add(int i, T v) {\r\n        int j = i;\r\n        while\
    \ (j < n) {\r\n            data[j] += v;\r\n            j |= (j + 1);\r\n    \
    \    }\r\n    }\r\n\r\n    T sum(int r) {\r\n        T res = 0;\r\n        while\
    \ (r >= 0) {\r\n            res += data[r];\r\n            r = (r & (r + 1)) -\
    \ 1;\r\n        }\r\n        return res;\r\n    }\r\n\r\n    T sum(int l, int\
    \ r) {\r\n        return sum(r) - sum(l-1);\r\n    }\r\n};\r\n\r\nusing fenwick\
    \ = fenwick_tree<long long>;\r\n"
  code: "/*\r\n * Author: Kalpesh Patel, hemis\r\n * Description: Fenwick Tree Data\
    \ Structure\r\n * Source:\r\n * - https://www.youtube.com/watch?v=Ti_U3Q_G7yM&list=PLrS21S1jm43igE57Ye_edwds_iL7ZOAG4&index=20&ab_channel=PavelMavrin\r\
    \n * - https://github.com/atcoder/ac-library/blob/master/atcoder/fenwicktree.hpp\r\
    \n * Sample Usage:\r\n * - https://codeforces.com/contest/1676/submission/158560831\r\
    \n*/\r\n\r\ntemplate<typename T> struct fenwick_tree {\r\n    int n;\r\n    vector<T>\
    \ data;\r\n\r\n    fenwick_tree(int _n) : n(_n) {\r\n        data = vector<T>(n);\r\
    \n    }\r\n\r\n    void add(int i, T v) {\r\n        int j = i;\r\n        while\
    \ (j < n) {\r\n            data[j] += v;\r\n            j |= (j + 1);\r\n    \
    \    }\r\n    }\r\n\r\n    T sum(int r) {\r\n        T res = 0;\r\n        while\
    \ (r >= 0) {\r\n            res += data[r];\r\n            r = (r & (r + 1)) -\
    \ 1;\r\n        }\r\n        return res;\r\n    }\r\n\r\n    T sum(int l, int\
    \ r) {\r\n        return sum(r) - sum(l-1);\r\n    }\r\n};\r\n\r\nusing fenwick\
    \ = fenwick_tree<long long>;\r\n"
  dependsOn: []
  isVerificationFile: false
  path: data_structures/fenwick.hpp
  requiredBy: []
  timestamp: '2022-06-06 17:58:25-07:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: data_structures/fenwick.hpp
layout: document
redirect_from:
- /library/data_structures/fenwick.hpp
- /library/data_structures/fenwick.hpp.html
title: data_structures/fenwick.hpp
---
