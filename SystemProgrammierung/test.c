#include <stdio.h>

int main(void){
	int x = 24;
	int y = 9;
	char test[] = "hallo";

	while(x!=y)
	{
		if(x>y)
		{
			x=x-y;
		}else
		{
			y=y-x;
		}
	}

	printf("GGT: %d\n", x);
	printf("%s", test);
	getchar();
	return 0;
}