---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"math\\\\mod_int.hpp\"\n/*\r\n * Author: rivalq\r\n * Description:\
    \ modular int struct for performing modular arithmetic more easily. \r\n*/ \r\n\
    \r\nconst int MOD = 998244353;\r\n\r\nstruct mod_int {\r\n    int val;\r\n \r\n\
    \    mod_int(long long v = 0) {\r\n        if (v < 0)\r\n            v = v % MOD\
    \ + MOD;\r\n        if (v >= MOD)\r\n            v %= MOD;\r\n        val = v;\r\
    \n    }\r\n \r\n    static int mod_inv(int a, int m = MOD) {\r\n        int g\
    \ = m, r = a, x = 0, y = 1;\r\n        while (r != 0) {\r\n            int q =\
    \ g / r;\r\n            g %= r; swap(g, r);\r\n            x -= q * y; swap(x,\
    \ y);\r\n        }\r\n        return x < 0 ? x + m : x;\r\n    }\r\n \r\n    explicit\
    \ operator int() const {\r\n        return val;\r\n    }\r\n \r\n    mod_int&\
    \ operator+=(const mod_int &other) {\r\n        val += other.val;\r\n        if\
    \ (val >= MOD) val -= MOD;\r\n        return *this;\r\n    }\r\n \r\n    mod_int&\
    \ operator-=(const mod_int &other) {\r\n        val -= other.val;\r\n        if\
    \ (val < 0) val += MOD;\r\n        return *this;\r\n    }\r\n \r\n    static unsigned\
    \ fast_mod(uint64_t x, unsigned m = MOD) {\r\n           #if !defined(_WIN32)\
    \ || defined(_WIN64)\r\n                return x % m;\r\n           #endif\r\n\
    \           unsigned x_high = x >> 32, x_low = (unsigned) x;\r\n           unsigned\
    \ quot, rem;\r\n           asm(\"divl %4\\n\"\r\n            : \"=a\" (quot),\
    \ \"=d\" (rem)\r\n            : \"d\" (x_high), \"a\" (x_low), \"r\" (m));\r\n\
    \           return rem;\r\n    }\r\n \r\n    mod_int& operator*=(const mod_int\
    \ &other) {\r\n        val = fast_mod((uint64_t) val * other.val);\r\n       \
    \ return *this;\r\n    }\r\n \r\n    mod_int& operator/=(const mod_int &other)\
    \ {\r\n        return *this *= other.inv();\r\n    }\r\n \r\n    friend mod_int\
    \ operator+(const mod_int &a, const mod_int &b) { return mod_int(a) += b; }\r\n\
    \    friend mod_int operator-(const mod_int &a, const mod_int &b) { return mod_int(a)\
    \ -= b; }\r\n    friend mod_int operator*(const mod_int &a, const mod_int &b)\
    \ { return mod_int(a) *= b; }\r\n    friend mod_int operator/(const mod_int &a,\
    \ const mod_int &b) { return mod_int(a) /= b; }\r\n \r\n    mod_int& operator++()\
    \ {\r\n        val = val == MOD - 1 ? 0 : val + 1;\r\n        return *this;\r\n\
    \    }\r\n \r\n    mod_int& operator--() {\r\n        val = val == 0 ? MOD - 1\
    \ : val - 1;\r\n        return *this;\r\n    }\r\n \r\n    mod_int operator++(int32_t)\
    \ { mod_int before = *this; ++*this; return before; }\r\n    mod_int operator--(int32_t)\
    \ { mod_int before = *this; --*this; return before; }\r\n \r\n    mod_int operator-()\
    \ const {\r\n        return val == 0 ? 0 : MOD - val;\r\n    }\r\n \r\n    bool\
    \ operator==(const mod_int &other) const { return val == other.val; }\r\n    bool\
    \ operator!=(const mod_int &other) const { return val != other.val; }\r\n \r\n\
    \    mod_int inv() const {\r\n        return mod_inv(val);\r\n    }\r\n \r\n \
    \   mod_int pow(long long p) const {\r\n        assert(p >= 0);\r\n        mod_int\
    \ a = *this, result = 1;\r\n \r\n        while (p > 0) {\r\n            if (p\
    \ & 1)\r\n                result *= a;\r\n \r\n            a *= a;\r\n       \
    \     p >>= 1;\r\n        }\r\n \r\n        return result;\r\n    }\r\n \r\n \
    \   friend ostream& operator<<(ostream &stream, const mod_int &m) {\r\n      \
    \  return stream << m.val;\r\n    }\r\n    friend istream& operator >> (istream\
    \ &stream, mod_int &m) {\r\n        return stream>>m.val;   \r\n    }\r\n};\r\n"
  code: "/*\r\n * Author: rivalq\r\n * Description: modular int struct for performing\
    \ modular arithmetic more easily. \r\n*/ \r\n\r\nconst int MOD = 998244353;\r\n\
    \r\nstruct mod_int {\r\n    int val;\r\n \r\n    mod_int(long long v = 0) {\r\n\
    \        if (v < 0)\r\n            v = v % MOD + MOD;\r\n        if (v >= MOD)\r\
    \n            v %= MOD;\r\n        val = v;\r\n    }\r\n \r\n    static int mod_inv(int\
    \ a, int m = MOD) {\r\n        int g = m, r = a, x = 0, y = 1;\r\n        while\
    \ (r != 0) {\r\n            int q = g / r;\r\n            g %= r; swap(g, r);\r\
    \n            x -= q * y; swap(x, y);\r\n        }\r\n        return x < 0 ? x\
    \ + m : x;\r\n    }\r\n \r\n    explicit operator int() const {\r\n        return\
    \ val;\r\n    }\r\n \r\n    mod_int& operator+=(const mod_int &other) {\r\n  \
    \      val += other.val;\r\n        if (val >= MOD) val -= MOD;\r\n        return\
    \ *this;\r\n    }\r\n \r\n    mod_int& operator-=(const mod_int &other) {\r\n\
    \        val -= other.val;\r\n        if (val < 0) val += MOD;\r\n        return\
    \ *this;\r\n    }\r\n \r\n    static unsigned fast_mod(uint64_t x, unsigned m\
    \ = MOD) {\r\n           #if !defined(_WIN32) || defined(_WIN64)\r\n         \
    \       return x % m;\r\n           #endif\r\n           unsigned x_high = x >>\
    \ 32, x_low = (unsigned) x;\r\n           unsigned quot, rem;\r\n           asm(\"\
    divl %4\\n\"\r\n            : \"=a\" (quot), \"=d\" (rem)\r\n            : \"\
    d\" (x_high), \"a\" (x_low), \"r\" (m));\r\n           return rem;\r\n    }\r\n\
    \ \r\n    mod_int& operator*=(const mod_int &other) {\r\n        val = fast_mod((uint64_t)\
    \ val * other.val);\r\n        return *this;\r\n    }\r\n \r\n    mod_int& operator/=(const\
    \ mod_int &other) {\r\n        return *this *= other.inv();\r\n    }\r\n \r\n\
    \    friend mod_int operator+(const mod_int &a, const mod_int &b) { return mod_int(a)\
    \ += b; }\r\n    friend mod_int operator-(const mod_int &a, const mod_int &b)\
    \ { return mod_int(a) -= b; }\r\n    friend mod_int operator*(const mod_int &a,\
    \ const mod_int &b) { return mod_int(a) *= b; }\r\n    friend mod_int operator/(const\
    \ mod_int &a, const mod_int &b) { return mod_int(a) /= b; }\r\n \r\n    mod_int&\
    \ operator++() {\r\n        val = val == MOD - 1 ? 0 : val + 1;\r\n        return\
    \ *this;\r\n    }\r\n \r\n    mod_int& operator--() {\r\n        val = val ==\
    \ 0 ? MOD - 1 : val - 1;\r\n        return *this;\r\n    }\r\n \r\n    mod_int\
    \ operator++(int32_t) { mod_int before = *this; ++*this; return before; }\r\n\
    \    mod_int operator--(int32_t) { mod_int before = *this; --*this; return before;\
    \ }\r\n \r\n    mod_int operator-() const {\r\n        return val == 0 ? 0 : MOD\
    \ - val;\r\n    }\r\n \r\n    bool operator==(const mod_int &other) const { return\
    \ val == other.val; }\r\n    bool operator!=(const mod_int &other) const { return\
    \ val != other.val; }\r\n \r\n    mod_int inv() const {\r\n        return mod_inv(val);\r\
    \n    }\r\n \r\n    mod_int pow(long long p) const {\r\n        assert(p >= 0);\r\
    \n        mod_int a = *this, result = 1;\r\n \r\n        while (p > 0) {\r\n \
    \           if (p & 1)\r\n                result *= a;\r\n \r\n            a *=\
    \ a;\r\n            p >>= 1;\r\n        }\r\n \r\n        return result;\r\n \
    \   }\r\n \r\n    friend ostream& operator<<(ostream &stream, const mod_int &m)\
    \ {\r\n        return stream << m.val;\r\n    }\r\n    friend istream& operator\
    \ >> (istream &stream, mod_int &m) {\r\n        return stream>>m.val;   \r\n \
    \   }\r\n};\r\n"
  dependsOn: []
  isVerificationFile: false
  path: math\mod_int.hpp
  requiredBy: []
  timestamp: '2022-06-06 12:37:01-07:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: math\mod_int.hpp
layout: document
redirect_from:
- /library\math\mod_int.hpp
- /library\math\mod_int.hpp.html
title: math\mod_int.hpp
---
