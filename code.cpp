#include<bits/stdc++.h>
using namespace std;
bool comp(pair<char,int>p,pair<char,int>q){
    return p.second>q.second;
}
int main(){
    int k,n;cin>>n>>k;
    string s;cin>>s;
    // check no. of each char in s 
    map<char,int>mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    vector<pair<char,int>>v(mp.begin(),mp.end());
    sort(v.begin(),v.end(),comp);
    // for(auto x:v){
    //     cout<<x.first<<" "<<x.second<<'\n';
    // }
    long long ans=0;
    int i=0;
    while(k){
        int a=v[i].second;
        if(k>=a){
            ans+=(1ll*a*a);
            k-=a;
        }else{
            ans+=(1ll*k*k);
            k-=k;
        }
        i++;
    }
    cout<<ans<<'\n';
}
