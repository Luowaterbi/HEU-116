#include <bits/stdc++.h>
using namespace std;

const int N=1e6+5;
int a[N];
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        a[i]+=a[i-1];
    }
    for(int i=1,l,r;i<=m;i++){
        scanf("%d%d",&l,&r);
        printf("%d\n",a[r]-a[l-1]);
    }
}