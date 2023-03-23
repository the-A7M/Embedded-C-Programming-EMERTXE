//Don't copy the code... Study the logic
//Fibonacci seies

#include <stdio.h>

int main()
{
    int num,i,temp=0,a=0,b=1,count=0;					//initializing variables
    printf("Enter a number \n");
    scanf("%d",&num);							//scanning input from user

    for(i=0;i<=num;i++)							//logic for fibonacci
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
