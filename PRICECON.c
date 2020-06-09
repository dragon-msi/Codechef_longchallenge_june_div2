#include <stdio.h>

int main(void) {
	
	int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        int a[n],i,j;
        int sum1=0;
        int sum2=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
         for(i=0;i<n;i++)
        {
            sum1+=a[i];
            if(a[i]>k)
            sum2+=k;
            else
            sum2+=a[i];
        }
        printf("%d\n",sum1-sum2);
        
    }
}
