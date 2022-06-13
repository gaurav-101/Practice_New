#include <math.h>

unsigned int Solution::reverse(unsigned int A) {
    unsigned int ans=0;
    int n=31;
    while(A!=0){
        if(A&1){
            ans+= pow(2,n);
        }
        n--;
        A=A>>1;
    }
    return ans;
}
