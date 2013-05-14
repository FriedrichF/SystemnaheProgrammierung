#include <stdio.h>
#include <time.h>


int zaehler = 1;

typedef struct _knoten
{
	struct _knoten *links;
	struct _knoten *rechts;
	int wert;
} knoten;

knoten baum(int anzahl){
	knoten *neuerKnoten;
	knoten *nullKnoten;

	if(anzahl < 1){
		return *nullKnoten;
	}
	else{
		neuerKnoten->links = &baum(anzahl / 2);
		neuerKnoten->wert = zaehler++;
		neuerKnoten->rechts = &baum(anzahl / 2);
	}
}

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
	void *temp = s;
	while(n--){
		*(char *)s = *(char *)ct;
		s = (char *)s + 1;
		ct = (char *)ct +1;
	}
	return temp;
}

void sleep(int seconds){
	time_t startTime;
	time_t actualTime;
	time_t finishTime;
	struct tm endTime;
	double diff;
	int i;

	actualTime = time(&startTime);
	endTime = *localtime(&startTime);
	
	endTime.tm_sec += seconds;

	finishTime = mktime(&endTime);

	for(i = 0; ; i++){
		actualTime = time(&startTime);
		if(i%100 == 1){
			diff = difftime(finishTime,actualTime);
			if(diff <= 0){
				return;
			}
		}
	}

}

void main(){
	char string [] = "Hallo";
	char ausgabe [] = "Hallo";
	char test[3];
	char *ptr = 0;

	knoten Baum;
	Baum = baum(65);

	//strcpy(string, ausgabe);
	//int erg = strcmp(string, ausgabe);
	//ptr = (char *)memcpy(test, string, 3);
	/*while(1){
		printf("Warte 3 sekunden");
		sleep(3);
		printf("\a\n");
	}*/
	//printf("Ausgabe: %s", ptr);
	//printf("Ausgabe: %s", ausgabe);
	//printf("Compare: %i", erg);

	getchar();
}