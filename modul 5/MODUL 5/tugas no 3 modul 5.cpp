#include <stdio.h>

int main()
{
	int Jmasuk, Jkeluar, Lparkir, Biaya ;
	printf("Menghitung Biaya Parkir");
	printf("\nMenghitung Jmasuk= "); scanf ("%i", &Jmasuk);
	printf("\nMasukan Jkeluar= "); scanf ("&i", &Jkeluar);
	
	if (Jkeluar >= Jmasuk) { 
	    Lparkir = Jkeluar - Jmasuk ;
	} else {
		Lparkir = (12 - Jkeluar) + Jmasuk ;
	}
	
	if (Lparkir <= 2 ) {
		Biaya = 2000 ;
	} else {
		Biaya = 2000 + ((Lparkir-2)*500);
	}
	printf("\nLama parkir = %i", Lparkir );
	printf("\n\nBiaya parkir adalah = Rp %i\n", Biaya);
	return 0 ;
	
}
	

