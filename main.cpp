#include <stdio.h>

main()
{
int i=0;
int sum=0;

while(i<9)
{
	printf("Hello\n");
	i++;
}

i=0;

while (i<16)
{
	printf("%i\n", i);
	i++;
}

i=0;

while(i<15){
	if (i%2==1)
	printf("%i ", i);
	i++;
}

i=5;

while(i<15)
{
	sum=sum+i;
	printf("%i+",i);
	i++;
}
sum=sum+i;
printf("%i=%i", i, sum);
}
