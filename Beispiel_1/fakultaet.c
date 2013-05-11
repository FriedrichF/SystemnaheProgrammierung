#include <stdio.h>
//C als erste Programmiersprache Kap10.5
char *strcpys(char* s, char* ct){
	do{
		*ct++ = *s++;
	}while(*s != '\0');
	return ct;
}



int main(void){
	char string [] = "test";
	char ausgabe [5] = "0000";

	char *st = string;
	char *aus = ausgabe;

	do{
		//printf("%s",s);
		*aus++ = *st++;
	}while(*st != '\0');

	printf("eingabe: test ausgabe: %p",&ausgabe);
	getchar();
	return 0;
}

