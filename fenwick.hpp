/*
 * Author: Kalpesh Patel, hemis
 * Description: Fenwick Tree Data Structure
 * Source:
 * - https://www.youtube.com/watch?v=Ti_U3Q_G7yM&list=PLrS21S1jm43igE57Ye_edwds_iL7ZOAG4&index=20&ab_channel=PavelMavrin
 * - https://github.com/atcoder/ac-library/blob/master/atcoder/fenwicktree.hpp
 * Sample Usage:
 * - https://codeforces.com/contest/1676/submission/158560831
*/

template<typename T> struct fenwick_tree {
    int n;
    vector<T> data;

    fenwick_tree(int _n) : n(_n) {
        data = vector<T>(n);
    }

    void add(int i, T v) {
        int j = i;
        while (j < n) {
            data[j] += v;
            j |= (j + 1);
        }
    }

    T sum(int r) {
        T res = 0;
        while (r >= 0) {
            res += data[r];
            r = (r & (r + 1)) - 1;
        }
        return res;
    }

    T sum(int l, int r) {
        return sum(r) - sum(l-1);
    }
};

using fenwick = fenwick_tree<long long>;
