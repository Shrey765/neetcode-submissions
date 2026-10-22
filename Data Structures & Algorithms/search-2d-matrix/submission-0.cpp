class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int i = 0;
        int j = n-1;

        while( i <= j){
            int mid = (i+j)/2;
            if(matrix[mid][0] > target){
                j = mid - 1;
            }else{
                i = mid + 1;
            }
        }

        int row = j;
        if(row < 0) return false;

        i = 0;
        j = m-1;
        while( i <= j){
            int mid = (i + j)/2;
            if(matrix[row][mid] == target) return true;

            else if(matrix[row][mid] > target){
                j = mid - 1;
            }else{
                i = mid+1;
            }
        }

        return false;

    }
};
