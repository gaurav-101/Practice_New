int Solution::solve(vector<int> &A, int B) {
    int first=B-1;
    int sum=0;
    for(int i=0;i<=first;i++){
        sum+=A[i];
    }
    if(B==A.size()){
        return sum;
    }
    int second=A.size()-1;
    
    int ans=sum;
    sum=sum+A[second]-A[first];
    ans=max(ans,sum);
    first--;
    second--;
    while(first>=0){
        sum=sum+A[second]-A[first];
        ans=max(ans, sum);
        first--;
        second--;
    }
    return ans;
}