#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        int x=num;
        vector<int>v;
        while(num!=0)
        {
            if(num%10!=0)
            {
                if(x%(num%10)==0)
                    v.push_back(num%10);
                num=num/10;
            }
            else
                num=num/10;
        }
        cout<<v.size()<<endl;
    }
}
