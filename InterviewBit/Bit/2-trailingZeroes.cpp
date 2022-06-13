int Solution::solve(int A) {
    int count=0;
    while(A!=0){
        if(A&1){
            return count;
        }
        count++;
        A=A>>1;
    }
    return count;
}
