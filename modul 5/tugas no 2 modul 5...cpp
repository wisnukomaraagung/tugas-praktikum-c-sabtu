#include <stdio.h>

int main ()
{
	
	int kode ;
	char jenis ;
	int harga, diskon, setdiskon ;
	
	printf("menghitung harga setelah diskon") ;
	printf("\nmasukan kode = ") ; scanf ("%i", &kode);
	printf("\nmasukan jenis (A, B, C) = ") ; scanf(" %c", &jenis);
	printf("\nmasukan harga = "); scanf("%i", &harga);
	
	switch(jenis) {
		case 'A' : diskon = 0.10 * harga ;
		break ;
		case 'B' : diskon = 0.15 * harga ;
		break ;
		case 'C': diskon = 0.20 * harga ;
		break ;
		default :
			printf ("jenis barang tidak valid.\n") ;
		}
		
		setdiskon = harga - ( harga * diskon ) ;
		printf("\njenis barang = %c", jenis ) ;
		printf("\nmendapat diskon : %i",diskon ) ;
		printf("\nharga setelah diskon ; %i", setdiskon ) ;
		return 0 ;
	}
		 
