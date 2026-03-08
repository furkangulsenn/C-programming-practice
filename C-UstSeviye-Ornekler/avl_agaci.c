#include <stdio.h>
#include <stdlib.h>

typedef struct Dugum {
	
    int deger;
    struct Dugum *sol, *sag;
    int yukseklik;
    
} Dugum;

// Yardımcı fonksiyonlar

int maksimum(int a,int b){ 

	return (a>b)?a:b; 
}

int yukseklik(Dugum* d){ 

	return d ? d->yukseklik : 0; 
}

Dugum* yeniDugum(int deger){
	
    Dugum* dugum = (Dugum*)malloc(sizeof(Dugum));
    
    dugum->deger = deger;
    dugum->sol = dugum->sag = NULL;
    dugum->yukseklik = 1;
    
    
    return dugum;
}

// Rotasyonlar

Dugum* sagaDondur(Dugum* y){
	
    Dugum* x = y->sol;
    Dugum* T2 = x->sag;
    
    x->sag = y;
    y->sol = T2;
    y->yukseklik = maksimum(yukseklik(y->sol), yukseklik(y->sag))+1;
    x->yukseklik = maksimum(yukseklik(x->sol), yukseklik(x->sag))+1;
    
    
    return x;
}

Dugum* solaDondur(Dugum* x){
	
    Dugum* y = x->sag;
    Dugum* T2 = y->sol;
    
    y->sol = x;
    x->sag = T2;
    x->yukseklik = maksimum(yukseklik(x->sol), yukseklik(x->sag))+1;
    y->yukseklik = maksimum(yukseklik(y->sol), yukseklik(y->sag))+1;
    
    
    return y;
}

// Denge faktörü

int dengeFaktoru(Dugum* d){ 

	return d ? yukseklik(d->sol) - yukseklik(d->sag) : 0; 
	
}

// AVL’ye ekleme

Dugum* ekle(Dugum* dugum, int deger){
	
    if(!dugum) return yeniDugum(deger);

    if(deger < dugum->deger) dugum->sol = ekle(dugum->sol, deger);
    else if(deger > dugum->deger) dugum->sag = ekle(dugum->sag, deger);
    else return dugum;

    dugum->yukseklik = 1 + maksimum(yukseklik(dugum->sol), yukseklik(dugum->sag));
    int denge = dengeFaktoru(dugum);

    // Rotasyon durumları
    if(denge > 1 && deger < dugum->sol->deger) return sagaDondur(dugum);
    if(denge < -1 && deger > dugum->sag->deger) return solaDondur(dugum);
    if(denge > 1 && deger > dugum->sol->deger){
        dugum->sol = solaDondur(dugum->sol);
        return sagaDondur(dugum);
    }
    
    if(denge < -1 && deger < dugum->sag->deger){
        dugum->sag = sagaDondur(dugum->sag);
        return solaDondur(dugum);
    }
    

    return dugum;
}

// Inorder traversal

void inorder(Dugum* kok){   //Ağacı sıralı yazdırmak için kullandım
	
    if(kok){
    	
        inorder(kok->sol);
        printf("%d ", kok->deger);
        inorder(kok->sag);
        
    }
}

// Ağacı dikey gösterme

void dikeyGoster(Dugum* kok, int bosluk){
	
    if(!kok) return;

    bosluk += 5; // her seviye için boşluk
    dikeyGoster(kok->sag, bosluk);

    printf("\n");
    int i = 0 ;
    for(i=5;i<bosluk;i++) printf(" ");
    printf("%d\n", kok->deger);

    dikeyGoster(kok->sol, bosluk);
    
}

int main(){
	
    Dugum* kok = NULL;   // Ağacın başlangıç kısmı
    int adet, sayi;
    int i; // for değişkeni dışarıda

    printf("Kac sayi eklemek istiyorsunuz? ");
    scanf("%d", &adet);

    for(i=0;i<adet;i++){
        printf("%d. sayiyi girin: ", i+1);
        scanf("%d", &sayi);
        kok = ekle(kok, sayi);
    }

    printf("\nAVL Agaci inorder gosterimi: ");
    inorder(kok);
    printf("\n\nAVL Agacı dikey gosterimi:\n");
    dikeyGoster(kok, 0);

    return 0;
}
