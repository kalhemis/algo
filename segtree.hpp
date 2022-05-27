/*
 * Author: Kalpesh Patel, hemis
 * Description: simple segment tree
 * Source:
 * - Codeforces EDU, Segment Tree
*/

struct node {
    int x;
    node (int _x) : x(_x) {};

    friend node merge(node a, node b) {
        return min(a.x, b.x);
    }

    friend ostream& operator << (ostream &stream, node n) {
        return stream << n.x;
    }
};

template<typename T> 
struct segment_tree {

    int size;
    int n;
    vector<node> data;

    node DEFAULT_VALUE = {0};
    node NEUTRAL_ELEMENT = {INT_MAX};

    segment_tree(int _n) {
        n = _n;
        size = 1;
        while (size < n) size *= 2;
        data.resize(2 * size, DEFAULT_VALUE);
    }

    void build(vector<T>& a, int x, int lx, int rx) {
        if (rx - lx == 1) {
            if (lx < (int) a.size()) {
                data[x] = node(a[lx]);
            }
            return;
        }
        int md = (lx + rx) / 2;
        build(a, 2 * x + 1, lx, md);
        build(a, 2 * x + 2, md, rx);
        data[x] = merge(data[2 * x + 1], data[2 * x + 2]);
    }

    void build(vector<T>& a) {
        build(a, 0, 0, size);
    }

    void set(int i, T value, int x, int lx, int rx) {
        if (rx - lx == 1) {
            data[x] = node(value);
            return;
        }
        int md = (lx + rx) / 2;
        if (i < md) {
            set(i, value, 2 * x + 1, lx, md);
        } else {
            set(i, value, 2 * x + 2, md, rx);
        }
        data[x] = merge(data[2 * x + 1], data[2 * x + 2]);
    }

    void set(int i, T value) {
        set(i, value, 0, 0, size);
    }

    node query(int x, int lx, int rx, int l, int r) {
        if (rx <= l || lx >= r) return NEUTRAL_ELEMENT;
        if (l <= lx && rx <= r) return data[x];
        int md = (lx + rx) / 2;
        node a = query(2 * x + 1, lx, md, l, r);
        node b = query(2 * x + 2, md, rx, l, r);
        return merge(a, b);
    }

    node query(int l, int r) {
        return query(0, 0, size, l, r);
    }
};

using segtree = segment_tree<int>;

bool MULTI_TEST = 0;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (auto& x : a) cin >> x;

    segtree st = segtree(n);
    st.build(a);

    for (int i = 0; i < m; i++) {
        int op;
        cin >> op;
        if (op == 1) {
            int i, v;
            cin >> i >> v;
            st.set(i, v);
        } else {
            int l, r;
            cin >> l >> r;
            cout << st.query(l, r) << endl;
        }
    }
}
