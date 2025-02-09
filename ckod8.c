/*isim:Bilge Ceren Yilmaz
No:10658469302
Soru 2
Vs 2022 ile yapildi*/
#include <stdio.h>
#include <stdlib.h>
//diziyi ters sirada yazdirma
int tersten_yazdir(int dizi[5], int dizi_uzunlugu);
int main(void) {
	int n;
	int dizi_uzunlugu;
	printf("Kac tam sayi girilecek?\n");
	scanf_s("%d", &dizi_uzunlugu);
	n = dizi_uzunlugu;
	int dizi[100];
	int i = 0;
	while (n > 0) {
		printf("Bir sayi giriniz ");
		scanf_s("%d", &dizi[i]);
		i++;
		n--;
	}
	tersten_yazdir(dizi, dizi_uzunlugu);
	return 0;
}
int tersten_yazdir(int dizi[100], int dizi_uzunlugu) {
	int i = dizi_uzunlugu - 1;
	while (i >= 0) {
		printf("%d ", dizi[i]);
		i--;
	}
	return 0;
}