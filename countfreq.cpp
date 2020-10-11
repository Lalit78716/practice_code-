#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2;
    cin>>n1;
    int a[200000];
    for(int i=0;i<n1;i++)
        cin>>a[i];
    cin>>n2;
    for(int i=n1;i<n2;i++)
        cin>>a[i];
    map<int,int>mp;
    for(int i=0;i<n1+n2;i++)
        mp[a[i]]++;
    map<int,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++)
        cout<<it->first<<"   "<<it->second<<endl;
}
