class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
        int idx = m + n - 1, i = m - 1, j = n - 1;
        while (i >= 0 && j >= 0) {
            if (A[i] >= B[j]) {
                A[idx] = A[i];
                idx--;
                i--;
                // can also be written as A[idx--]=A[i--]
            } else {
                A[idx] = B[j];
                idx--;
                j--;
            }
        }
        while (j >= 0) {
            A[idx] = B[j];
            idx--;
            j--;
        }
    }
};

//time complexity O(m+n) space O(1)