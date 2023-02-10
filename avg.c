# include <stdio.h>
int main()
{
	int a,b,c;
	int sum ;
	float avg;
	printf("\n enter 1st nos: ");
	printf("\n enter 2nd nos: ");
	printf("\n enter 3rd nos: ");
	scanf("%d%d%d",&a,&b,&c);
	sum = a+b+c;
	avg = sum/3;
	printf("average is :%f ",avg);
	return 1;
	
}

