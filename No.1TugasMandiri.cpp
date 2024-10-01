#include <stdio.h>

int main()
{
	//untuk deklarasi
	float panjang_alas = 0.8;
	float tinggi = 0.5;
	float luas;
	
	//menghitung luas
	luas = 0.5 * panjang_alas * tinggi;
	
	//untuk menampilkan hasil
	printf("Luas segitiga adalah: %.2f \n", luas);
	
	return 0;
	
}