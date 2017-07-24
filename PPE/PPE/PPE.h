#ifndef PPE_H
#define PPE_H


class PPE
{
public:
	PPE( void );	
	PPE( char * );			
	PPE( PPE & );			
	~PPE( void )				
		{ delete Name; }		
	char* getName( void );
	void setName( char * );
	virtual void Display( void );
	virtual char *getClassName( void );

protected:
	char *Name;
};


#endif