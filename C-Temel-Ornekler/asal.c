#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
	
	int i;
	
    if (n <= 1) return false;
    
    for ( i = 2; i*i <= n; i++)
        if (n % i == 0) return false;
        
    return true;
}

int main() {
	
    int n;
    
    printf("Bir sayi gir: ");
    scanf("%d", &n);
    
    if (isPrime(n)) printf("%d asal sayidir.\n", n);
    
    else printf("%d asal sayi degildir.\n", n);
    
    return 0;
}
