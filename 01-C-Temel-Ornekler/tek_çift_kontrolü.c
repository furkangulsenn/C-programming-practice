#include <stdio.h>

int main() {
  
    int sayi;
  
    printf("Bir sayi gir: ");
    scanf("%d", &sayi);

    if (sayi % 2 == 0) printf("%d çifttir.\n", sayi);
    else printf("%d tektir.\n", sayi);

  
    return 0;
}
