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
    - https://codeforces.com/blog/entry/102710
    - https://codeforces.com/contest/1676/submission/158554261
  bundledCode: "#line 1 \"misc/inv_count.hpp\"\n/*\r\n * Author: Kalpesh Patel, hemis\r\
    \n * Description: The merge sort modification for counting inversions.\r\n * Source:\r\
    \n * - https://codeforces.com/blog/entry/102710\r\n * Sample Usage:\r\n * - https://codeforces.com/contest/1676/submission/158554261\r\
    \n*/\r\n\r\nstruct inv_count {\r\n    int n;\r\n    vector<int> sorted;\r\n  \
    \  long long count = 0;\r\n\r\n    inv_count(int _n, vector<int>& v) : n(_n) {\r\
    \n        sorted = vector<int>(v);\r\n    }\r\n\r\n    void merge(int start, int\
    \ mid, int end) {\r\n        vector<int> buf(end - start + 1);\r\n        int\
    \ left = start; int right = mid;\r\n        int idx = 0;\r\n        while (left\
    \ < mid && right < end) {\r\n            if (sorted[left] >= sorted[right]) {\r\
    \n                count += (mid - left);\r\n                buf[idx] = sorted[right];\r\
    \n                right++;\r\n            } else {\r\n                buf[idx]\
    \ = sorted[left];\r\n                left++;\r\n            }\r\n            idx++;\r\
    \n        }\r\n        while (left < mid) {\r\n            buf[idx] = sorted[left];\r\
    \n            left++; idx++;\r\n        }\r\n        while (right < end) {\r\n\
    \            buf[idx] = sorted[right];\r\n            right++; idx++;\r\n    \
    \    }\r\n        for (int i = start; i < end; i++) {\r\n            sorted[i]\
    \ = buf[i - start];\r\n        }\r\n    }\r\n\r\n    void merge_sort(int start,\
    \ int end) {\r\n        if (end - start <= 1) return;\r\n        int mid = (start\
    \ + end) / 2;\r\n        merge_sort(start, mid);\r\n        merge_sort(mid, end);\r\
    \n        merge(start, mid, end);\r\n    }\r\n\r\n    void print() {\r\n     \
    \   for (int i = 0; i < n; i++) {\r\n            cout << sorted[i] << (i == n\
    \ - 1 ? '\\n' : ' ');\r\n        }\r\n    } \r\n\r\n    long long find_inversions()\
    \ {\r\n        merge_sort(0, n);\r\n        return count;\r\n    }\r\n};\r\n"
  code: "/*\r\n * Author: Kalpesh Patel, hemis\r\n * Description: The merge sort modification\
    \ for counting inversions.\r\n * Source:\r\n * - https://codeforces.com/blog/entry/102710\r\
    \n * Sample Usage:\r\n * - https://codeforces.com/contest/1676/submission/158554261\r\
    \n*/\r\n\r\nstruct inv_count {\r\n    int n;\r\n    vector<int> sorted;\r\n  \
    \  long long count = 0;\r\n\r\n    inv_count(int _n, vector<int>& v) : n(_n) {\r\
    \n        sorted = vector<int>(v);\r\n    }\r\n\r\n    void merge(int start, int\
    \ mid, int end) {\r\n        vector<int> buf(end - start + 1);\r\n        int\
    \ left = start; int right = mid;\r\n        int idx = 0;\r\n        while (left\
    \ < mid && right < end) {\r\n            if (sorted[left] >= sorted[right]) {\r\
    \n                count += (mid - left);\r\n                buf[idx] = sorted[right];\r\
    \n                right++;\r\n            } else {\r\n                buf[idx]\
    \ = sorted[left];\r\n                left++;\r\n            }\r\n            idx++;\r\
    \n        }\r\n        while (left < mid) {\r\n            buf[idx] = sorted[left];\r\
    \n            left++; idx++;\r\n        }\r\n        while (right < end) {\r\n\
    \            buf[idx] = sorted[right];\r\n            right++; idx++;\r\n    \
    \    }\r\n        for (int i = start; i < end; i++) {\r\n            sorted[i]\
    \ = buf[i - start];\r\n        }\r\n    }\r\n\r\n    void merge_sort(int start,\
    \ int end) {\r\n        if (end - start <= 1) return;\r\n        int mid = (start\
    \ + end) / 2;\r\n        merge_sort(start, mid);\r\n        merge_sort(mid, end);\r\
    \n        merge(start, mid, end);\r\n    }\r\n\r\n    void print() {\r\n     \
    \   for (int i = 0; i < n; i++) {\r\n            cout << sorted[i] << (i == n\
    \ - 1 ? '\\n' : ' ');\r\n        }\r\n    } \r\n\r\n    long long find_inversions()\
    \ {\r\n        merge_sort(0, n);\r\n        return count;\r\n    }\r\n};\r\n"
  dependsOn: []
  isVerificationFile: false
  path: misc/inv_count.hpp
  requiredBy: []
  timestamp: '2022-06-06 17:58:25-07:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: misc/inv_count.hpp
layout: document
redirect_from:
- /library/misc/inv_count.hpp
- /library/misc/inv_count.hpp.html
title: misc/inv_count.hpp
---
