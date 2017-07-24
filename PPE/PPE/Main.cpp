#include <iostream>
#include <cstring>
#include "conio.h"

using namespace std;

#include "PPE.h"
#include "DIOD.h"
#include "TIR.h"
#include "TRA.h"
#include "MODELDI.h"
#include "MODELTI.h"
#include "MODELTR.h"


void main( void )
{

	PPE  *Ele[ 4 ];
	PPE *c = new DIOD( "Diod", "Diod na shotki" );
	PPE *g = new MODELDI("Diod", "Dupchest", "GS7730" );
	PPE *h = new MODELTI("Tiristor", "Germaniev", "GE5510" );
	PPE *d = new MODELTR("Tranzistor", "Siliciev", "SI8010" );
	Ele[ 0 ] = c;
	Ele[ 1 ] = g;
	Ele[ 2 ] = h;
	Ele[ 3 ] = d;
	for( int index = 0; index < 4; index++ )
	{
		cout << "Class name: " << Ele[index]->getClassName() << endl<<endl;
		Ele[index]->Display();
		cout<<endl;
	}

	_getch();

} // end main

