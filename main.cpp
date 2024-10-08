#include <iostream>
#include "SLL.h"
#include "SLL.cpp"
using namespace std;

int main(){
    List SQI;
    fakultas Kampus;
    adr pointer1, pointer2, pointer3, pointer4, pointer5, pointer6, prec, p, q;
    Create_List(SQI);
    cout << "Masukkan data dengan format: Nama Fakultas, Jumlah Prodi, Kode Fakultas" << endl;
    cout << "Masukkan data pertama: " << endl;
    cin >> Kampus.namaFak >> Kampus.jumProdi >> Kampus.kodeFak;
    cout << endl;
    pointer1 = New_elemen(Kampus);
    Insert_First(SQI,pointer1);

    cout << "Masukkan data kedua: " << endl;
    cin >> Kampus.namaFak >> Kampus.jumProdi >> Kampus.kodeFak;
    cout << endl;
    pointer2 = New_elemen(Kampus);
    Insert_Last(SQI, pointer2);

    cout << "Masukkan data ketiga: " << endl;
    cin >> Kampus.namaFak >> Kampus.jumProdi >> Kampus.kodeFak;
    cout << endl;
    pointer3 = New_elemen(Kampus);
    Insert_First(SQI,pointer3);

    cout << "Masukkan data keempat: " << endl;
    cin >> Kampus.namaFak >> Kampus.jumProdi >> Kampus.kodeFak;
    cout << endl;
    pointer4 = New_elemen(Kampus);
    Insert_Last(SQI, pointer4);

    cout << "Masukkan data kelima: " << endl;
    cin >> Kampus.namaFak >> Kampus.jumProdi >> Kampus.kodeFak;
    cout << endl;
    pointer5 = New_elemen(Kampus);
    Insert_After(SQI,pointer4,pointer5);


    cout << "Masukkan data keenam: " << endl;
    cin >> Kampus.namaFak >> Kampus.jumProdi >> Kampus.kodeFak;
    cout << endl;
    pointer6 = New_elemen(Kampus);
    Insert_After(SQI,pointer4,pointer6);
    cout << endl;

    Show(SQI);

    prec = SearchBykodeFak(SQI, info(pointer1).kodeFak);
    Delete_After(SQI,prec,p);

    prec = SearchBykodeFak(SQI, info(pointer6).kodeFak);
    if (next(prec) == NULL) {
        Delete_Last(SQI, p);
    }else if(next(first(SQI)) == NULL) {
        Delete_First(SQI,p);
    }else {
        prec = SearchBykodeFak(SQI, info(pointer6).kodeFak);
        q = first(SQI);
        while (info(next(q)).kodeFak != info(prec).kodeFak){
            q = next(q);
        }
        Delete_After(SQI, q, p);
    }
    SortBykodeFak(SQI);

    cout << "Setelah melakukan delete data kedua dan data keenam dan sorting ascending" << endl;
    cout << endl;

    Show(SQI);

    return 0;
}
