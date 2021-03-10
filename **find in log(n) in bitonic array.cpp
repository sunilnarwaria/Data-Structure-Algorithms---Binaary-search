// interviewbit
int Solution::solve(vector<int> &A, int B) {
    int low = 0 , high = A.size()-1, n = A.size()-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(A[mid] == B)
            return mid;
        if(A[mid] <= A[n-1]){ // This means left part is sorted in increasing order
            if(A[mid] >= B)
                high = mid-1;
            else
                low = mid+1;
        }
        else { // right part is sorted in increasing order
            if(A[mid] >= B)
                low = mid+1;
            else
                high = mid-1;
        }
    }
    return -1;
}
