#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	 
	while(t--)
	{
	    int n;
	    cin >>n;
	    int a[n];
	    for(int i=0; i<n; i++) cin >> a[i];
	    int l[n], r[n];
	    l[0]=a[0];
	    for(int i=1; i<n; i++) 
	    {
	        l[i]=max(l[i-1],a[i]);
	    }
	    
	    r[n-1]=a[n-1];
	    for(int i=n-2; i>=0; i--) 
	    {
	        r[i]=max(r[i+1],a[i]);
	    }
	    
	    int w=0;
	    for(int i=0; i<n; i++)
	    {
	        w=w+(min(l[i],r[i])-a[i]);
	    }
	    cout << w << endl;
	}
	return 0;
}