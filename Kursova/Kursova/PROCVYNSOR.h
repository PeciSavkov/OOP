#ifndef PROCVYNSOR_H
#define PROCVYNSOR_H

class PROCVYNSOR : public VYNSOR
{
public:
	PROCVYNSOR( void );						
	PROCVYNSOR( char *, char *, char * );		
	~PROCVYNSOR( void )							
		{ delete Pamet; }	
	virtual void Display( void );
	virtual char *getClassName( void );

private:
	char *Pamet;
};

#endif