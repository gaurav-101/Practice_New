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


//Using OR operator


unsigned int Solution::reverse(unsigned int A) {
    unsigned int b=0;
    for(int i=0;i<32;i++)
    {
        b=b<<1;
        b=b|A&1;
        A=A>>1;
    }
    return b; 
}
