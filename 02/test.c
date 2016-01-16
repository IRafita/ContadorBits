#include <stdio.h>
int count2Bits ( e )
	int e;
{
	int s, b1, b2;
	b1 = e & 0x1;
	b2 = ( e & 0x2 ) && 1;
	s = 0x2 * ( b2 & b1 );
	s+= 0x1 * ( b2 ^ b1 );
return s;
}
int main ()
{
	int i;
	for ( i = 0; i < 4; i++ )
		printf ( "%d\t%d\n", i, count2Bits ( i ) );
return 0;
}
