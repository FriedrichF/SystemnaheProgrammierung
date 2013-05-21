#include <stdio.h>

struct baum{
	struct baum *rechts;
	struct baum *links;
	int wert;
};

	struct baum tempBaum;
	static struct baum *tempBaumP = &tempBaum;

	

void addKnoten(struct baum *_baum, int wert){
	tempBaumP->links = NULL;
	tempBaumP->rechts = NULL;
	tempBaumP->wert = NULL;
	
	if(_baum->wert == NULL){
		_baum->wert = wert;
		_baum->links = NULL;
		_baum->rechts = NULL;
		return;
	}

	if(_baum->wert > wert){
		if(_baum->links == NULL){
			_baum->links = tempBaumP;
			tempBaumP++;
		}
		addKnoten(_baum->links, wert);
		return;
	}

	if(_baum->wert < wert){
		if(_baum->rechts == NULL){
			_baum->rechts = tempBaumP;
			tempBaumP++;
		}
		addKnoten(_baum->rechts, wert);
		return;
	}
}

void padding ( char ch, int n )
{
	int i;
	for ( i = 0; i < n; i++ )
		putchar ( ch );
}

void printBaum ( struct baum *root, int level )
{
	int i;
	if ( root == NULL ) {
		padding ( '\t', level );
		puts ( "~" );
	}
	else {
		printBaum ( root->rechts, level + 1 );
		padding ( '\t', level );
		printf ( "%d\n", root->wert );
		printBaum ( root->links, level + 1 );
	}
}



void main(){

	int werte[] = {5,4,8,2,7,9};
	int i;
	struct baum baumNeu;
	struct baum *baumN;

	baumN = &baumNeu;

	baumN->links = NULL;
	baumN->rechts = NULL;
	baumN->wert = NULL;

	for(i = 0; i < sizeof(werte)/sizeof(werte[0]); i++)
	{
		addKnoten(baumN, werte[i]);
	}

	printBaum(baumN, 0);

	getchar();
}