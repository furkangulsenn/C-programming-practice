#include <stdio.h>
#include <string.h>

int main() {
  
    char metin[100];
    int i, uzunluk;

    printf("Bir metin gir: ");
    fgets(metin, sizeof(metin), stdin);

    uzunluk = strlen(metin) - 1;
    printf("Ters: ");
  
    for (i = uzunluk - 1; i >= 0; i--) printf("%c", metin[i]);
    printf("\n");

  
    return 0;
}
