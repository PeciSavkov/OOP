#ifndef PROCVYTSOR_H
#define PROCVYTSOR_H

class PROCVYTSOR : public VYTSOR
{
public:
	PROCVYTSOR( void );						
	PROCVYTSOR( char *, char *, char * );		
	~PROCVYTSOR( void )							
		{ delete Pamet; }	
	virtual void Display( void );
	virtual char *getClassName( void );

private:
	char *Pamet;
};

#endif