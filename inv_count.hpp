/*
 * Author: Kalpesh Patel, hemis
 * Description: The merge sort modification for counting inversions.
 * Source:
 * - https://codeforces.com/blog/entry/102710
 * Sample Usage:
 * - https://codeforces.com/contest/1676/submission/158554261
*/

struct inv_count {
    int n;
    vector<int> sorted;
    long long count = 0;

    inv_count(int _n, vector<int>& v) : n(_n) {
        sorted = vector<int>(v);
    }

    void merge(int start, int mid, int end) {
        vector<int> buf(end - start + 1);
        int left = start; int right = mid;
        int idx = 0;
        while (left < mid && right < end) {
            if (sorted[left] >= sorted[right]) {
                count += (mid - left);
                buf[idx] = sorted[right];
                right++;
            } else {
                buf[idx] = sorted[left];
                left++;
            }
            idx++;
        }
        while (left < mid) {
            buf[idx] = sorted[left];
            left++; idx++;
        }
        while (right < end) {
            buf[idx] = sorted[right];
            right++; idx++;
        }
        for (int i = start; i < end; i++) {
            sorted[i] = buf[i - start];
        }
    }

    void merge_sort(int start, int end) {
        if (end - start <= 1) return;
        int mid = (start + end) / 2;
        merge_sort(start, mid);
        merge_sort(mid, end);
        merge(start, mid, end);
    }

    void print() {
        for (int i = 0; i < n; i++) {
            cout << sorted[i] << (i == n - 1 ? '\n' : ' ');
        }
    } 

    long long find_inversions() {
        merge_sort(0, n);
        return count;
    }
};
