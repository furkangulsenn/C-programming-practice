#include <stdio.h>

int main(){
	
	int i;
    int skor = 0;
    
    FILE *fp = fopen("skor.txt","w");
    
    if(!fp){ printf("Dosya açılamadı\n"); return 1; }
    
    for(i=1;i<=5;i++){
    	
        printf("Puan kazan: "); int p; scanf("%d",&p);
        skor+=p;
    }
    
    fprintf(fp,"Toplam Skor: %d\n",skor);
    fclose(fp);
    
    printf("Skor kaydedildi.\n");
    
    
    return 0;
}
