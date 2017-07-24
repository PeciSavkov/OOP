#ifndef AKTIOR_H
#define AKTIOR_H

class AKTIOR : public KOMEDIQ
{
public:
	AKTIOR( void );						
	AKTIOR( char *, char *, char * );		
	~AKTIOR( void )							
		{ delete Ime; }	
	virtual void Display( void );
	virtual char *getClassName( void );

private:
	char *Ime;
};

#endif