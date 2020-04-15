#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t)
	    {
	      int n,x=0;
	      cin>>n;
	      for(int i=5;i<=n;i=i*5)
	         {
	             x=x+(n/i);
	         }
	         cout<<x<<endl;
	         t--;
	    }
	return 0;
}
