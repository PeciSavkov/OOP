#ifndef MODELTI_H
#define MODELTI_H

class MODELTI : public TIR
{
public:
	MODELTI( void );						
	MODELTI( char *, char *, char * );		
	~MODELTI( void )							
		{ delete Model; }	
	virtual void Display( void );
	virtual char *getClassName( void );

private:
	char *Model;
};

#endif