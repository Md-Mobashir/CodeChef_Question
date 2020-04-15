/* When we apply two loops
   it gives TLE.
*/
   

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t,i;
    cin>>t;
    while(t>0)
        {
            int n,x=0;
            cin>>n;
            int a[n];
            for(i=0;i<n;i++)
              {
                  cin>>a[i];
              }
              
             sort(a, a+n);
             int min=INT_MAX;
             for(i=0;i<n-1;i++) 
             {
                   x=abs(a[i+1]-a[i]);
                    if(min>x)
                    {
                        min=x;
                    }
                
             }
             cout<<min<<endl;
             t--;
        }
	return 0;
}
