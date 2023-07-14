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
		printf("Êä³öli\r\n");
	}
}

void qi()
{
	printf("Êä³öqi\r\n");
}

void ming()
{
	printf("Êä³öming\r\n");
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