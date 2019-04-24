/*
Nama Program: mid-test_1
Nama        : Delanika Olympiani
Kelas       : B
NPM         : 140810180026
Deskripsi   : Menu untuk update pesanan restoran
Tahun       : 2019
*/

#include <iostream>

using namespace std;

struct restoran{
    char pesanan[20];
    int jumlah;
    restoran* next;
    };
    typedef restoran* pointer;
    typedef pointer List;

void createList(List& First);
void createElmt(pointer& pBaru);
void insertFirst (List& First, pointer pBaru);
void insertLast (List& First, pointer pBaru);
void traversal (List First);


int main(){
    List First;
    pointer p;
    int n;
    char nama;

    createList(First);
    cout<<"Nama Pemesan: "; cin>>nama;
    cout<<"Masukkan jumlah pesanan: "; cin>>n;

    for(int i=0; i<=n; i++){
        cout<<"Pesanan ke-"<<i<<endl;
        createElmt(p);
        insertFirst(First, p);
    }

    traversal(First);

    for(int i=0; i<=n; i++){
        cout<<"Update Jumlah Pesanan ke-"<<i<<endl;
        updatePesanan(First, p);
        cout<<endl;
    }

    sortPesanan(First, n);
    traversal(First);

    return 0;
}

void createList(List& First){
    First = NULL;
}

void createElmt (pointer& pBaru){
    pBaru = new restoran;
    cout<<"Pesanan: "; cin>>pBaru->pesanan;
    cout<<"Jumlah: "; cin>>pBaru->jumlah;
    pBaru->next=NULL;
}

void insertLast (List& First, pointer pBaru){
    pointer Last;

    if (First==NULL){
        First=pBaru;
    }
    else {
        Last=First;
        while (Last->next!=NULL){
            Last=Last->next;
        }
        Last->next=pBaru;
    }
}

void traversal (List First){
    pointer pBantu;
    pBantu=First;

    while(pBantu != NULL){
        cout<<"Nama Pemesan: "<<pBantu->nama<<endl;
        cout<<"===Pesanan==="<<endl;
        cout<<"Menu  : "<<pBantu->pesanan<<endl;
        cout<<"Jumlah: "<<pBantu->jumlah<<endl;
        pBantu=pBantu->next;
    }
    cout<<endl;
}

void searchPesanan (List First, char key[20], int& found, pointer& pCari){
    found=0;
    pCari=First;

    cout<<"===Update Pesanan==="<<endl;
    cout<<"Nama pesanan: "; cin>>key;

    while(found==0&&pCari!=NULL){
        if(pCari->info==key){
            found=1;
        }
        else {
            pCari=pCari->next;
        }
    }
    cout<<endl;
}

void updatePesanan (List& First, pointer pBaru){
    pointer update = NULL;
    searchPesanan(First, key, found, pCari);

    if(update==NULL){
         cout<<"Tidak ada pesanan"<<endl;
         return 0;
    }

    cout<<"Jumlah pesanan: "; cin>>update->jumlah;
}

void sortPesanan(List& First, int n){
    pointer urut;
    int temp=0;

    for(int i=0; i<n;i++){
        for(int j=1;j<n;j++){
            if(urut([j-1], urut[j])>0){

    temp = urut[j-1];

    urut[j-1] = urut[j];

    urut[j] = temp;
    }
}
}
