#ifndef MODELTR_H
#define MODELTR_H

class MODELTR : public TRA
{
public:
	MODELTR( void );						
	MODELTR( char *, char *, char * );		
	~MODELTR( void )							
		{ delete Model; }	
	virtual void Display( void );
	virtual char *getClassName( void );

private:
	char *Model;
};

#endif