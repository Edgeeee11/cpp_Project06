#include <stdio.h>


main()
{
int i=1;
int a=0;
int b=1;
int sum=0;
int c=5;

while(i<10)
{
	printf("Hello\n");
	i=i+1;
}
while(a<15)
{
	printf("%i\n", a);
	a=a+1;
	
}
while(b<15){
	printf("%i ", b);
	b=b+2;
}
while(c<15)
{
	sum=sum+c;
	printf("%i+",c);
	c=c+1;
}
sum=sum+c;
printf("%i=%i", c, sum);
}
