#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

double med(vector<long long>cp,int n)
{
    sort(cp.begin(),cp.end());
    if(n%2==0)
    {
        return (cp[(n-1)/2]+cp[(n/2)])/2.0;
    }   
    else
    {
        return cp[(n)/2];
    }
}


int main()
{
    int n,d;
    cin>>n>>d;
    vector<long long>a;
    int cnt=0;
    
    for(int i=0;i<n;i++)
    {   
        int v;
        cin>>v;
        if(i>=d)
        {
            double mdn=med(a,d);
            //cout<<"mdn:"<<mdn<<endl;
            if(v>=mdn*2)
                cnt++;
            a.erase(a.begin());
        
        }
        a.push_back(v);
        
    
    }
    // for(int i=d;i<n;i++)
    // {
    //     long long cp[d];
    //     copy(a+i-d,a+i,cp);
    //     sort(cp,cp+d);
    //     double mdn=med(cp,d);
    
    //     if(a[i]>=mdn*2)
    //         cnt++;
    
    
    // }
    cout<<cnt<<endl;
    return 0;
}
