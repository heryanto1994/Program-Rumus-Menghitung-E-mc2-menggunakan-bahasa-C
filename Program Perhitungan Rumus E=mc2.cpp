#include<stdio.h>
#include<conio.h>

int main()
{
	float c=89.88,m,E;
	printf("-----PROGRAM PERHITUNGAN RUMUS E=mc2\n---");
	printf("---------------------------------------\n");
	printf("SEKOLAH TINGGI TEKNOLOGI PELITA BANGSA\n");
	printf("----------TEKNIK INFORMATIKA------------\n");
	printf("------------------2018------------------\n");
	printf("Masukan Massa (kg) : ");
	scanf("%f", &m);
	E=m*c*c;
	printf("E=%.2f * %.2f  * %.2f = %.2f J" ,m,c,c,E);
	getch();
	
}
