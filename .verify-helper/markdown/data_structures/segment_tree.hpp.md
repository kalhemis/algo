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
    - https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/submission/158570913
    - https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/submission/158572202
    - https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/submission/158572299
  bundledCode: "#line 1 \"data_structures/segment_tree.hpp\"\n/*\r\n * Author: \r\n\
    \ * - Kalpesh Patel, hemis\r\n *\r\n * Description: \r\n * - Simple segment tree\r\
    \n *\r\n * Source:\r\n * - Codeforces EDU, Segment Tree\r\n *\r\n * Sample Usage:\r\
    \n * - https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/submission/158570913\
    \ (sum)\r\n * - https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/submission/158572202\
    \ (min)\r\n * - https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/submission/158572299\
    \ (num of min in a segment)\r\n * - https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/submission/158572202\r\
    \n*/\r\n\r\nstruct node {\r\n    int x;\r\n    node (int _x) : x(_x) {};\r\n \r\
    \n    friend node merge(node a, node b) {\r\n        return min(a.x, b.x);\r\n\
    \    }\r\n\r\n    friend node modify(node a, node b) {\r\n        return node(a.x\
    \ + b.x);\r\n    }\r\n \r\n    friend ostream& operator << (ostream &stream, node\
    \ n) {\r\n        return stream << n.x;\r\n    }\r\n};\r\n \r\ntemplate<typename\
    \ T> \r\nstruct segment_tree {\r\n \r\n    int size;\r\n    int n;\r\n    vector<node>\
    \ data;\r\n \r\n    node DEFAULT_VALUE = {0};\r\n    node NEUTRAL_ELEMENT = {INT_MAX};\r\
    \n \r\n    segment_tree(int _n) {\r\n        n = _n;\r\n        size = 1;\r\n\
    \        while (size < n) size *= 2;\r\n        data.resize(2 * size, DEFAULT_VALUE);\r\
    \n    }\r\n \r\n    void build(vector<T>& a, int x, int lx, int rx) {\r\n    \
    \    if (rx - lx == 1) {\r\n            if (lx < (int) a.size()) {\r\n       \
    \         data[x] = node(a[lx]);\r\n            }\r\n            return;\r\n \
    \       }\r\n        int md = (lx + rx) / 2;\r\n        build(a, 2 * x + 1, lx,\
    \ md);\r\n        build(a, 2 * x + 2, md, rx);\r\n        data[x] = merge(data[2\
    \ * x + 1], data[2 * x + 2]);\r\n    }\r\n \r\n    void build(vector<T>& a) {\r\
    \n        build(a, 0, 0, size);\r\n    }\r\n\r\n    void update(int i, T value,\
    \ int x, int lx, int rx) {\r\n        if (rx - lx == 1) {\r\n            data[x]\
    \ = modify(data[x], node(value));\r\n            return;\r\n        }\r\n    \
    \    int md = (lx + rx) / 2;\r\n        if (i < md) {\r\n            update(i,\
    \ value, 2 * x + 1, lx, md);\r\n        } else {\r\n            update(i, value,\
    \ 2 * x + 2, md, rx);\r\n        }\r\n        data[x] = merge(data[2 * x + 1],\
    \ data[2 * x + 2]);\r\n    }\r\n\r\n    void update(int i, T value) {\r\n    \
    \    update(i, value, 0, 0, size);\r\n    }\r\n \r\n    void set(int i, T value,\
    \ int x, int lx, int rx) {\r\n        if (rx - lx == 1) {\r\n            data[x]\
    \ = node(value);\r\n            return;\r\n        }\r\n        int md = (lx +\
    \ rx) / 2;\r\n        if (i < md) {\r\n            set(i, value, 2 * x + 1, lx,\
    \ md);\r\n        } else {\r\n            set(i, value, 2 * x + 2, md, rx);\r\n\
    \        }\r\n        data[x] = merge(data[2 * x + 1], data[2 * x + 2]);\r\n \
    \   }\r\n \r\n    void set(int i, T value) {\r\n        set(i, value, 0, 0, size);\r\
    \n    }\r\n \r\n    node query(int x, int lx, int rx, int l, int r) {\r\n    \
    \    if (rx <= l || lx >= r) return NEUTRAL_ELEMENT;\r\n        if (l <= lx &&\
    \ rx <= r) return data[x];\r\n        int md = (lx + rx) / 2;\r\n        node\
    \ a = query(2 * x + 1, lx, md, l, r);\r\n        node b = query(2 * x + 2, md,\
    \ rx, l, r);\r\n        return merge(a, b);\r\n    }\r\n \r\n    node query(int\
    \ l, int r) {\r\n        return query(0, 0, size, l, r);\r\n    }\r\n};\r\n \r\
    \nusing segtree = segment_tree<int>;\r\n"
  code: "/*\r\n * Author: \r\n * - Kalpesh Patel, hemis\r\n *\r\n * Description: \r\
    \n * - Simple segment tree\r\n *\r\n * Source:\r\n * - Codeforces EDU, Segment\
    \ Tree\r\n *\r\n * Sample Usage:\r\n * - https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/submission/158570913\
    \ (sum)\r\n * - https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/submission/158572202\
    \ (min)\r\n * - https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/submission/158572299\
    \ (num of min in a segment)\r\n * - https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/submission/158572202\r\
    \n*/\r\n\r\nstruct node {\r\n    int x;\r\n    node (int _x) : x(_x) {};\r\n \r\
    \n    friend node merge(node a, node b) {\r\n        return min(a.x, b.x);\r\n\
    \    }\r\n\r\n    friend node modify(node a, node b) {\r\n        return node(a.x\
    \ + b.x);\r\n    }\r\n \r\n    friend ostream& operator << (ostream &stream, node\
    \ n) {\r\n        return stream << n.x;\r\n    }\r\n};\r\n \r\ntemplate<typename\
    \ T> \r\nstruct segment_tree {\r\n \r\n    int size;\r\n    int n;\r\n    vector<node>\
    \ data;\r\n \r\n    node DEFAULT_VALUE = {0};\r\n    node NEUTRAL_ELEMENT = {INT_MAX};\r\
    \n \r\n    segment_tree(int _n) {\r\n        n = _n;\r\n        size = 1;\r\n\
    \        while (size < n) size *= 2;\r\n        data.resize(2 * size, DEFAULT_VALUE);\r\
    \n    }\r\n \r\n    void build(vector<T>& a, int x, int lx, int rx) {\r\n    \
    \    if (rx - lx == 1) {\r\n            if (lx < (int) a.size()) {\r\n       \
    \         data[x] = node(a[lx]);\r\n            }\r\n            return;\r\n \
    \       }\r\n        int md = (lx + rx) / 2;\r\n        build(a, 2 * x + 1, lx,\
    \ md);\r\n        build(a, 2 * x + 2, md, rx);\r\n        data[x] = merge(data[2\
    \ * x + 1], data[2 * x + 2]);\r\n    }\r\n \r\n    void build(vector<T>& a) {\r\
    \n        build(a, 0, 0, size);\r\n    }\r\n\r\n    void update(int i, T value,\
    \ int x, int lx, int rx) {\r\n        if (rx - lx == 1) {\r\n            data[x]\
    \ = modify(data[x], node(value));\r\n            return;\r\n        }\r\n    \
    \    int md = (lx + rx) / 2;\r\n        if (i < md) {\r\n            update(i,\
    \ value, 2 * x + 1, lx, md);\r\n        } else {\r\n            update(i, value,\
    \ 2 * x + 2, md, rx);\r\n        }\r\n        data[x] = merge(data[2 * x + 1],\
    \ data[2 * x + 2]);\r\n    }\r\n\r\n    void update(int i, T value) {\r\n    \
    \    update(i, value, 0, 0, size);\r\n    }\r\n \r\n    void set(int i, T value,\
    \ int x, int lx, int rx) {\r\n        if (rx - lx == 1) {\r\n            data[x]\
    \ = node(value);\r\n            return;\r\n        }\r\n        int md = (lx +\
    \ rx) / 2;\r\n        if (i < md) {\r\n            set(i, value, 2 * x + 1, lx,\
    \ md);\r\n        } else {\r\n            set(i, value, 2 * x + 2, md, rx);\r\n\
    \        }\r\n        data[x] = merge(data[2 * x + 1], data[2 * x + 2]);\r\n \
    \   }\r\n \r\n    void set(int i, T value) {\r\n        set(i, value, 0, 0, size);\r\
    \n    }\r\n \r\n    node query(int x, int lx, int rx, int l, int r) {\r\n    \
    \    if (rx <= l || lx >= r) return NEUTRAL_ELEMENT;\r\n        if (l <= lx &&\
    \ rx <= r) return data[x];\r\n        int md = (lx + rx) / 2;\r\n        node\
    \ a = query(2 * x + 1, lx, md, l, r);\r\n        node b = query(2 * x + 2, md,\
    \ rx, l, r);\r\n        return merge(a, b);\r\n    }\r\n \r\n    node query(int\
    \ l, int r) {\r\n        return query(0, 0, size, l, r);\r\n    }\r\n};\r\n \r\
    \nusing segtree = segment_tree<int>;\r\n"
  dependsOn: []
  isVerificationFile: false
  path: data_structures/segment_tree.hpp
  requiredBy: []
  timestamp: '2022-06-06 20:40:13-07:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: data_structures/segment_tree.hpp
layout: document
redirect_from:
- /library/data_structures/segment_tree.hpp
- /library/data_structures/segment_tree.hpp.html
title: data_structures/segment_tree.hpp
---
