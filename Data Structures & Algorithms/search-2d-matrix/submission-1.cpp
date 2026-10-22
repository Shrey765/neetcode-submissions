class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix[0].size();
        int m = matrix.size();
        int i = 0;
        int j = m*n - 1;
        while(i <= j){
            int mid = (i+j)/2;
            if(matrix[mid/n][mid%n] == target) return true;
            else if(matrix[mid/n][mid%n] > target) j = mid-1;
            else i = mid + 1;
        }

        return false;

    }
};
