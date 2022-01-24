#include <bits/stdc++.h>
using namespace std;

const int N=1e6+5;
vector<int>A;
string a;

vector<int> mul(vector<int>A,int b){
    vector<int>C;
    for(int i=0,t=0;i<A.size()||t;i++){
        if(i<A.size()) t+=A[i]*b;
        C.push_back(t%10);
        t/=10;
    }
    return C;    
}
vector<int> div(vector<int>A,int b,int &r){
    vector<int>C;
    for(int i=A.size()-1;i>=0;i--){
        r=r*10+A[i];
        C.push_back(r/b);
        r%=b;
    }
    reverse(C.begin(),C.end());
    while(C.size()>1&&C.back()==0) C.pop_back();
    return C;
}
int main(){
    int b;
    cin>>a>>b;
    if(b==0){
        cout<<0<<endl;
        return 0;
    }
    for(int i=a.size()-1;i>=0;i--) A.push_back(a[i]-'0');
    int r=0;
    vector<int>C=div(A,b,r);
    reverse(C.begin(),C.end());
    for(auto i:C) cout<<i;
    cout<<endl<<r<<endl;
}