#include <stdio.h>

typedef struct
{
	void(*li)();
	void(*qi)();
	void(*ming)();
}name_a;

name_a name;

void li()
{
	int i ;
	for (i = 0; i < 1000; i++) {
		printf("���li\r\n");
	}
}

void qi()
{
	printf("���qi\r\n");
}

void ming()
{
	printf("���ming\r\n");
}

int main()
{
	name_a name = {
	   .li=li,
	   .qi=qi,
	   .ming=ming
	};
	
	name.li();
	name.qi();
	name.ming();

	return 0;
}