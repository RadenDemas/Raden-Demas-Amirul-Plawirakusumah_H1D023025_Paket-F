#include <iostream>
#define MAXQUEUE 5
using namespace std;

typedef struct{
int count;
int front;
int rear;
int item[MAXQUEUE];
} QUEUE;
QUEUE antrean;

void inisialisasi(QUEUE *Q){
    Q->count=0;
    Q->front=0;
    Q->rear=0;
}

int isEmpty(QUEUE *Q){
    int hasil=0;
    if (Q->count==0){
    hasil=1;
    }
    return hasil;
}

int isFull(QUEUE *Q){
    int hasil=0;
    if (Q->count==MAXQUEUE){
    hasil=1;
    }
    return hasil;
}

void insert(QUEUE *Q, int data){
    if(isFull(Q)==1){
        cout<<"Antrean telah penuh";
    }else{
        Q->item[Q->rear]=data;
        Q->rear= (Q->rear+1) %MAXQUEUE;
        Q->count++;
    }
}

void hapus(QUEUE *Q){
    if(isEmpty(Q)==1){
        cout<<"Antrean sudah kosong";
    }else{
        Q->front = (Q->front+1)%MAXQUEUE;;
        Q->count--;
    }
}

void printQueue(QUEUE *Q){
    int i = Q->front;
    int j = 0;
    cout<<"Isi Antrean: ";
    while (j < Q->count){
        cout << Q->item[i] << " ";
        i = (i + 1) % MAXQUEUE;
        j++;
    }
}

int main(){
inisialisasi(&antrean);
//Memasukkan antrean 108
cout<<"Masukan 108"<<endl;
insert(&antrean,108);
printQueue(&antrean);
//Memasukkan antrean 109
cout<<endl<<"Masukan 109"<<endl;
insert(&antrean,109);
printQueue(&antrean);
//Memasukkan antrean 110
cout<<endl<<"Masukan 110"<<endl;
insert(&antrean,110);
printQueue(&antrean);
//Memasukkan antrean 111
cout<<endl<<"Masukan 111"<<endl;
insert(&antrean,111);
printQueue(&antrean);
//Menghapus antrean 108
cout<<endl<<"Menghapus 108 dari antrean"<<endl;
hapus(&antrean);
printQueue(&antrean);
//Memasukkan antrean 112
cout<<endl<<"Memasukkan 112"<<endl;
insert(&antrean,112);
printQueue(&antrean);
return 0;
}