#include<iostream>

using namespace std;

#include "MSD.h"
#include "VYNSOR.h"
#include "PROCVYNSOR.h"

PROCVYNSOR::PROCVYNSOR( void )
{
	Pamet = new char[ 5];
	strcpy( Pamet, "None");
}

PROCVYNSOR::PROCVYNSOR(char *aVid, char *aIme, char*aPamet)
			: VYNSOR( aVid, aIme )
{
	Pamet = new char[ strlen( aPamet ) + 1 ];
	strcpy( Pamet, aPamet );
}

void PROCVYNSOR :: Display( void )
{
	VYNSOR::Display();
	cout << "Sortirovkata se izvyrshva v: " << Pamet << endl;
}

char *PROCVYNSOR::getClassName(void)
{
	cout<<endl;
	return "Proces vynshna sortirovka";
}
