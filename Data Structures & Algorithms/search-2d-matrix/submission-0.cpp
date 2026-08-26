class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int col = matrix[0].size();
        int mid, b, c;
        int l = 0, r= rows*col-1;
        while (l<=r){
            mid = l+(r-l)/2;
            b = mid/col;
            c = mid%col;
            if (matrix[b][c] == target){ 
                return true; 
                break;
            }
            if (matrix[b][c] > target){ r = mid-1; }
            else{ l = mid+1; }
        }
        return false;        
        
    }
};
