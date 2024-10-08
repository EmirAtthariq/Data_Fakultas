#include <iostream>
#include "SLL.h"
using namespace std;

void Create_List(List &L) {
    first(L) = NULL;
}

address New_elemen(infotype data){
    address p = new elmlist;
    info(p) = data;
    next(p) = NULL;
    return p;
}

void Insert_First(List &L, adr p) {
    next(p) = first(L);
    first(L) = p;
}

void Insert_Last(List &L, adr p) {
    adr Q;
    if(first(L) == NULL) {
        Insert_First(L, p);

    }else {
        Q = first(L);
        while(next(Q) != NULL) {
            Q = next(Q);
        }
        next(Q) = p;
    }
}

void Insert_After(List &L, adr prec, adr p) {
    if(next(prec)== NULL) {
        Insert_Last(L,p);
    }else {
        next(p) = next(prec);
        next(prec) = p;
    }
}
void Delete_First(List &L, adr p){
    if(first(L)==NULL){
        p = NULL;

    }else {
        p = first(L);
        first(L) = next(p);
        next(p) = NULL;
    }
}
void Delete_Last(List &L, adr p){
    adr q;
    if(first(L) == NULL) {
        p = NULL;
    }else {
        if(next(first(L))== NULL){
            p = next(first(L));
            next(first(L)) = NULL;
        }else {
            q = first(L);
            while(next(next(q))!= NULL) {
                q = next(q);
            }
            p = next(q);
            next(q) = NULL;
        }
    }
}
void Delete_After(List &L, adr prec, adr p) {
    p = next(prec);
    next(prec) = next(p);
    next(p) = NULL;
}
void Show(List L){
    adr q;
    if(first(L)==NULL){
        cout << "List Kosong" << endl;
    }else {
        q = first(L);
        while(q != NULL) {
            cout << "Nama Fakultas: " << info(q).namaFak << endl;
            cout << "Jumlah Prodi: " << info(q).jumProdi << endl;
            cout << "Kode Fakultas: " <<info(q).kodeFak << endl;
            cout << endl;
            q = next(q);
        }
    }
}
void SortBykodeFak(List &L){
    adr q,p, SL;
    if (first(L) == NULL) {
        cout << "List Kosong" << endl;
    }else if((first(L)!= NULL) && (next(first(L))!= NULL)){
        p = first(L);
        SL = NULL;
        while(p != NULL) {
            first(L) = next(p);
            if(SL == NULL || info(SL).kodeFak > info(p).kodeFak) {
                next(p) = SL;
                SL = p;
            }else {
                q = SL;
                while(next(q)!= NULL && (info(next(q)).kodeFak) < info(p).kodeFak) {
                        q = next(q);
                }
                next(p) = next(q);
                next(q) = p;
            }
            p = first(L);
        }
        first(L) = SL;
    }
}
adr SearchBykodeFak(List L, int target){
    adr p;
    if(first(L)==NULL){
        cout << "List Kosong" << endl;
    }else {
        p = first(L);
        while(info(p).kodeFak != target){
            p = next(p);
        }
        if(info(p).kodeFak == target) {
            return p;

        }else {
            return p = NULL;
        }
    }
}
