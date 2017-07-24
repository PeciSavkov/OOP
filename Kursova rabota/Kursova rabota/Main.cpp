#include <iostream>
#include <cstring>
#include "conio.h"

using namespace std;

#include "FILMI.h"
#include "KOMEDIQ.h"
#include "EKSHYN.h"
#include "REJISIOR.h"
#include "AKTIOR.h"


void main( void )
{

	FILMI  *Film [4];
	FILMI *a = new KOMEDIQ( "Kyche kasichka", "Komediq" );
	FILMI *b = new EKSHYN("Umirai trudno", "Ekshyn");
	FILMI *c = new REJISIOR("Django bez okovi", "Ekshyn", "Kuentin Tarantino" );
	FILMI *d = new AKTIOR("Maskata", "Komediq", "Djim Keri" );
	Film[ 0 ] = a;
	Film[ 1 ] = b;
	Film[ 2 ] = c;
	Film[ 3 ] = d;
	for( int index = 0; index < 4; index++ )
	{
		cout << "Class name: " << Film[index]->getClassName() << endl<<endl;
		Film[index]->Display();
	}

	_getch();

} // end main

