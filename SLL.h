#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED
#include <iostream>
#define first(L) L.first
#define info(p) p->info
#define next(p) p->next
using namespace std;

struct fakultas {
    string namaFak;
    int jumProdi;
    int kodeFak;
};
typedef fakultas infotype;
typedef struct elmlist *address;
typedef address adr;
struct elmlist {
    infotype info;
    address next;
};
struct List {
    address first;
};


void Create_List(List &L);
address New_elemen(infotype data);
void Insert_First(List &L, address p);
void Insert_Last(List &L, address p);
void Insert_After(List &L, address prec, address p);
void Delete_First(List &L, address p);
void Delete_Last(List &L, address p);
void Delete_After(List &L, address prec, address p);
void Show(List L);
void SortBykodeFak(List &L);
adr SearchBykodeFak(List L, infotype target);
#endif // SLL_H_INCLUDED
