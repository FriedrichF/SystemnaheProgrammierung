#include <stdio.h>

void doPeriodically(void (job)(void))
{
	int i;
	while(1)
	{
		job();
		while(getchar()){
			printf("drücken sie nach 1 sekunde");
		}
		//for(i = 0; i < 0xfffffff; i++){	}
	}
}

void blink( void )
{
	static int x = 0;
	printf("%i", x++);
}

void main()
{
	doPeriodically(blink);
}
