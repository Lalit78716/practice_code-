#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long int a[n];
    for(long int i=0;i<n;i++)
        cin>>a[i];
    int d,m;
    cin>>d>>m;
    sort(a, a + n); 
  
    // Find all possible permutations 
    cout << "Possible permutations are:\n"; 
    do { 
        display(a, n); 
    } while (next_permutation(a, a + n)); 
}
