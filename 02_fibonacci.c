/*
  Name- Amit Prasad
  Date- //
  Description -
  Sample Input-
  Sample  Output-
  Doc
*/


#include <stdio.h>

int main()
{
    int num,i,temp=0,a=0,b=1,count=0;
    printf("Enter a number \n");
    scanf("%d",&num);

    for(i=0;i<=num;i++)
    {
	    a=b;
	    b=temp;

	if(temp<=num)
	{
	    printf("%d ",temp);
	    temp=a+b;
	}
	else
	    break;
	
    }
    printf("\n");
    return 0;

}
