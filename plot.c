#include <stdio.h>
#define	ESC	'\033'
#define	POINT	'x'

main(int argc, char **argv)
{
	int x, y;

	x= atoi(argv[1]);
	y= atoi(argv[2]);

	system("clear");
	printf("%c[%d;%dH%c", ESC, x,y, POINT);
	printf("%c[1;1H", ESC);
}
