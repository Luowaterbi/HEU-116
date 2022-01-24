#include <bits/stdc++.h>
using namespace std;

const int N=1e6+5;

vector<int>A,B;
string a,b;

vector<int> add(vector<int>&A,vector<int>&B){
    vector<int>C;
    int t=0;
    for(int i=0;i<A.size()||i<B.size();i++){
        if(i<A.size()) t+=A[i];
        if(i<B.size()) t+=B[i];
        C.push_back(t%10);
        t/=10;
    }
    if(t) C.push_back(t);
    return C;
}
bool cmp(vector<int>A,vector<int>B){
    if(A.size()<B.size()) return false;
    if(A.size()==B.size()){
        for(int i=A.size()-1;i>=0;i--)
            if(A[i]!=B[i]) return A[i]>B[i];
    }
    return true;
}
vector<int> sub(vector<int>&A,vector<int>&B){
    if(!cmp(A,B)){
        swap(A,B);
        cout<<"-";
    }
    vector<int>C;
    for(int i=0,t=0;i<A.size();i++){
        t+=A[i];
        if(i<B.size()) t-=B[i];
        C.push_back((t+10)%10);
        if(t<0) t=-1;
        else t=0;
    }
    while(C.size()>1&&C.back()==0) C.pop_back();
    return C;
}
int main(){
    cin>>a>>b;
    for(int i=a.size()-1;i>=0;i--) A.push_back(a[i]-'0');
    for(int i=b.size()-1;i>=0;i--) B.push_back(b[i]-'0');
    vector<int>C=add(A,B);
    reverse(C.begin(),C.end());
    for(auto i:C) cout<<i;
}