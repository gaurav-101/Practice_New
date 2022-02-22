int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int n=A.size();
    if(n==1){
        return 0;
    }
    int i=0;
    int diffx=0, diffy=0, maxdiff=0;
    int count=0;
    
    while(i<n-1){
        maxdiff=max((abs(A[i]-A[i+1])), (abs(B[i]-B[i+1])));
        count+=maxdiff;
        i++;
    }
    return count;
}