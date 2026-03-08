#include <stdio.h>
#include <pthread.h>    //thread oluşturmak için kullandım

void* threadFonksiyon(void* arg){
	
    int id = *(int*)arg;   //thread çalıştıracağı fonksiyon
    
    printf("Thread calisiyor: %d\n", id);     //void pointer olduğu için cast yapıldı
    
    return NULL;
}

int main(){

    pthread_t thread1, thread2;

    int id1 = 1;
    int id2 = 2;

    pthread_create(&thread1, NULL, threadFonksiyon, &id1);
    pthread_create(&thread2, NULL, threadFonksiyon, &id2);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    return 0;
}
