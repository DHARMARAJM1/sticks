#include<stdio.h>
int main()
{

	int arr_count,a=0,i,p=0,min=0,k;
	scanf("%d",&arr_count);
	int arr[arr_count],result_count[arr_count];
	p=arr_count;
	for(i=0;i<arr_count;i++)
	scanf("%d",&arr[i]);

    for(k=0;k<arr_count;k++)
    {
        result_count[a++]=p;
	    min=arr[0];
    	for(i=0;i<arr_count;i++)
    	{
	    if(min>arr[i])
	    min=arr[i];
    	}
        for(i=0;i<arr_count;i++)
        {
    	if(arr[i]!=1001)
    	{
	       arr[i]=arr[i]-min;
	       if(arr[i]==0)
	           arr[i]=1001;
    	}
        }
        p=0;
        for(i=0;i<arr_count;i++)
        {
         	if(arr[i]!=1001)
        	p++;
        }
    }
   
    for(i=0;i<arr_count;i++)
    {
	    if(result_count[i]!=0)
	    printf("%d \n",result_count[i]);
    }

return 0;
}
