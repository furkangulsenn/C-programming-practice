#include <stdio.h>
#define MAX 10

void birlestir(int dizi[], int sol, int orta, int sag) {
  
    int i = sol, j = orta + 1, k = 0;
    int temp[MAX];
  
    while (i <= orta && j <= sag) {
      
        if (dizi[i] <= dizi[j]) temp[k++] = dizi[i++];
        else temp[k++] = dizi[j++];
    }
  
    while (i <= orta) temp[k++] = dizi[i++];
  
    while (j <= sag) temp[k++] = dizi[j++];
  
    for (i = sol, k = 0; i <= sag; i++, k++) dizi[i] = temp[k];
}

void mergeSort(int dizi[], int sol, int sag) {
  
    if (sol < sag) {
      
        int orta = (sol + sag) / 2;
      
        mergeSort(dizi, sol, orta);
        mergeSort(dizi, orta+1, sag);
        birlestir(dizi, sol, orta, sag);
    }
}

int main() {
  
    int dizi[MAX] = {12, 11, 13, 5, 6, 7, 1, 9, 4, 8};
    int i;
  
    mergeSort(dizi, 0, MAX-1);
  
    for (i = 0; i < MAX; i++) printf("%d ", dizi[i]);
      printf("\n");

  
    return 0;
}
