#include <iostream>
using namespace std;

int main() {
	// your code goes here{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    if(a[0]!=5)
	    cout<<"NO\n";
	    else
	    {
	        int f=0,ten=0,flag=0;
	        for(int i=0;i<n;i++)
	        {
	            if(a[i]==5)
	            {
	                f=f+1;
	                flag++;
	            }
	          if(a[i]==10)
	            {
	             if(f>0)
	               {
	               f=f-1;
	               ten=ten+1;
	               flag++;
	               }
	               else
	               {
	                   flag=0;
	                   break;
	               }
	            }
	           if(a[i]==15)
	            {
	               if(ten>0)
	                {
	                    ten=ten-1;
	                    flag=1;
	                }
	                else if(f>1)
	                {
	                    f=f-2;
	                    flag=1;
	                }
	                else
	                {
	                    flag=0;
	                    break;
	                }
	            }
	        }
	        if(flag==0)
	        cout<<"NO\n";
	        else
	        cout<<"YES\n";
	    }
	}
	return 0;
}
