#include<iostream>

using namespace std;

#include "MSD.h"
#include "VYTSOR.h"
#include "PROCVYTSOR.h"

PROCVYTSOR::PROCVYTSOR( void )
{
	Pamet = new char[ 5];
	strcpy( Pamet, "None");
}

PROCVYTSOR::PROCVYTSOR(char *aVid, char *aIme, char*aPamet)
			: VYTSOR( aVid, aIme )
{
	Pamet = new char[ strlen( aPamet ) + 1 ];
	strcpy( Pamet, aPamet );
}

void PROCVYTSOR :: Display( void )
{
	VYTSOR::Display();
	cout << "Sortirovkata se izvyrshva v: " << Pamet << endl;
}

char *PROCVYTSOR::getClassName(void)
{
	cout<<endl;
	return "Proces vytreshna sortirovka";
}
