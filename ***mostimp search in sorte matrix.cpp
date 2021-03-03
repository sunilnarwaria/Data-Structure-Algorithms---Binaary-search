//Method 1
 // jb apne paas mid aa jaye to use matrix ke index mai convert krne k liye  * matrix[mid/m][mid%m]  *
//  n * m matrix convert to an array => matrix[x][y] => a[x * m + y]
// an array convert to n * m matrix => a[x] =>matrix[x / m][x % m];

 bool searchMatrix(vector<vector<int> > &matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int l = 0, r = m * n - 1;
        while (l != r){
            int mid = (l + r - 1) >> 1;
            if (matrix[mid / m][mid % m] < target)
                l = mid + 1;
            else 
                r = mid;
        }
        return matrix[r / m][r % m] == target;
    }



//Method 2

int Solution::searchMatrix(vector<vector<int> > &a, int b) {
    
    int n = a.size();
    int m = a[0].size();
    int l = 0;
    int r = m-1;
    
    while(l < n && r>= 0){
       
        if(a[l][r] == b){
            return 1;
        }
        if(a[l][r] > b){
            r--;
            
        }else{
            l++;
        }
    }
    return 0;
}
