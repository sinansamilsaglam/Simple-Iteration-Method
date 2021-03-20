#include<stdio.h>
#include<math.h>
#define hata 0.000001

float F(float x)
{
	return pow(3*x+20,1.0/3);
}

main()
{
	float x0=1,x1;
	
	printf("%f\n",x0);
	do
	{
		x1=x0;
		x0=F(x0);
		printf("%f\n",x0);
	}
	while (fabs(x0-x1)>hata);
	printf("Approximate Result : %f\n",x0);
	getch();
	
}
