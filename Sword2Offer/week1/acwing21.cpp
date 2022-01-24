#define fr(i,a,b) for(int i=a;i<=b;i++)
class Solution {
public:
    int a[100];
    int Fibonacci(int n) {
        a[0]=0,a[1]=1,a[2]=1;
        fr(i,3,n) a[i]=a[i-1]+a[i-2];
        return a[n];
    }
};
