#include <iostream>
#include <cstring>
#include "conio.h"

using namespace std;

#include "MSD.h"
#include "VYTSOR.h"
#include "VYNSOR.h"
#include "PROCVYTSOR.h"
#include "PROCVYNSOR.h"


void main( void )
{

	MSD  *SOR[ 4 ];
	MSD *c = new VYTSOR( "Vytreshna", "Chrez prqko vmykvane" );
	MSD *g = new VYNSOR("Vynshna", "Ime sortirovka" );
	MSD *h = new PROCVYTSOR("Vytreshna", "Metod na mehurcheto", "Operativna pamet" );
	MSD *d = new PROCVYNSOR("Vynshna", "Ime sortirovka", "Vynshni zapametqvashti ustroistva" );
	SOR[ 0 ] = c;
	SOR[ 1 ] = g;
	SOR[ 2 ] = h;
	SOR[ 3 ] = d;
	for( int index = 0; index < 4; index++ )
	{
		cout << "Class name: " << SOR[index]->getClassName() << endl<<endl;
		SOR[index]->Display();
	}

	_getch();

} // end main

