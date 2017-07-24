#ifndef MODELDI_H
#define MODELDI_H

class MODELDI : public DIOD
{
public:
	MODELDI( void );						
	MODELDI( char *, char *, char * );		
	~MODELDI( void )							
		{ delete Model; }	
	virtual void Display( void );
	virtual char *getClassName( void );

private:
	char *Model;
};

#endif