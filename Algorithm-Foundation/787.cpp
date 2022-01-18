#include <bits/stdc++.h>
using namespace std;

const int N=1e5+5;
int n,q[N],tmp[N];

void ms(int q[], int l,int r){
    if(l>=r) return ;
    int mid=(l+r)>>1;
    ms(q,l,mid);
    ms(q,mid+1,r);
    int i=l,j=mid+1,k=1;
    while(i<=mid&&j<=r) tmp[k++]=q[i]<=q[j]?q[i++]:q[j++];
    while(i<=mid) tmp[k++]=q[i++];
    while(j<=r) tmp[k++]=q[j++];
    for(i=r;i>=l;i--) q[i]=tmp[--k];
    return ;
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&q[i]);
    ms(q,1,n);
    for(int i=1;i<=n;i++) printf("%d ",q[i]);
}