#include <stdio.h>

void strcpy(char *s, char *t){
	while((*t++=*s++) != '\0'){
		;
	}
}

int strcmp(char *s, char *t){
	int temp = 0;
	while((temp = *s++-*t++) == 0){
		if(*s == '\0')
			return 0;
	}
	return temp;
}

void *memcpy(void *s, const void *ct, size_t n){

}

void main(){
	char string [] = "Hallo";
	char ausgabe [] = "Hallo";

	//strcpy(string, ausgabe);
	int erg = strcmp(string, ausgabe);

	//printf("Ausgabe: %s", ausgabe);
	printf("Compare: %i", erg);

	getchar();
}