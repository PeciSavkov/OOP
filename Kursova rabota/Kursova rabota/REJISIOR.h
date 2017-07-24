#ifndef REJISIOR_H
#define REJISIOR_H

class REJISIOR : public EKSHYN
{
public:
	REJISIOR( void );						
	REJISIOR( char *, char *, char * );		
	~REJISIOR( void )							
		{ delete Ime; }	
	virtual void Display( void );
	virtual char *getClassName( void );

private:
	char *Ime;
};

#endif