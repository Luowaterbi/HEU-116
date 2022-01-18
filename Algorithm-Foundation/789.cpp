#include <bits/stdc++.h>
using namespace std;

const int N=1e5+5;
int n,q,a[N],k;

bool check1(int mid){
    if(a[mid]>=k)  return 1;
    return 0; 
} 
bool check2(int mid){
    if(a[mid]<=k) return 1;
    return 0;
}

int main(){
    scanf("%d%d",&n,&q);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int i=1,s,e;i<=q;i++){
        int l=1,r=n;
        scanf("%d",&k);
        while(l<r){
            int mid=l+r>>1;
            if(check1(mid)) r=mid;
            else l=mid+1; 
        }
        s=(a[l]==k?l:0);
        l=1,r=n;
        while(l<r){
            int mid=l+r+1>>1;
            if(check2(mid)) l=mid;
            else r=mid-1; 
        }
        e=(a[l]==k?l:0);
        
        printf("%d %d\n",s-1,e-1);
    }
    
}