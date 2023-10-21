#include <stdio.h>

int main ()
{
	int JMasuk, JKeluar, JLama ;
	printf (" Menentukan Lama Bekerja : " ) ;
	printf ("\nJam Masuk = " ) ;
	scanf ("%i", &JMasuk ) ;
	
	printf ("\n Jam Keluar = ") ;
	scanf ("%i", &JKeluar ) ;
	
	if ( JKeluar >= JMasuk ) {
		JLama = JKeluar - JMasuk ;
	} else {
		JLama = ( 12 - JKeluar ) + JMasuk ;
	}
	
	printf ("\nLama Bekerja adalah = %i jam", JLama) ;
	
	return 0 ;
	
}
		