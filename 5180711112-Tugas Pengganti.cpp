#include <iostream>
#include <conio.h>
using namespace::std;

main()
{
    int harga, indeks, jumlah, total=0, totalbayar, jum=5, jenis;
    char member;
    string namaku, cari, barang, namanya;
    string nomor[5]={"A001","A002","A003","A007","A008"};
    string nama[5]={"Bayu","Irvan","Susiati","Diana","Roni"};
    double diskon;

    cout<<" ==============PROGRAM KASIR============= ";
    cout<<"\nApakah Anda termasuk member disini??";cin>>member;

    if (member=='y'||member=='Y')
    {
        cout<<"\nMasukkan ID : ";cin>>cari;cout<<endl;

        for(int i=0;i<jum;i++)
        {
            if (cari==nomor[i])
            {
                namaku=nama[i];
            }
        }
        cout<<"MEMBER"<<endl;
        cout<<"Nomor ID : "<<cari<<endl;
        cout<<"Nama : "<<namaku<<endl;

        cout<<"\nBerapa jenis barang yang dibeli : ";cin>>jenis;
        for(int j=0;j<jenis;j++)
        {
            cout<<"\nNama barang : ";cin>>barang;
            cout<<"\nHarga       : ";cin>>harga;
            cout<<"\nJumlah barang pembelian : ";cin>>jumlah;
            total=total+harga*jumlah;
            cout<<"\nJumlah = "<<total;
        }

        cout<<"\nKarena Anda Member, maka dapat diskon 5%";
        totalbayar=total*95/100;
        cout<<"\nJumlah Akhir = "<<totalbayar;

    }
    else if (member=='t'||member=='T')
    {
        cout<<"Masukkan Nama Anda : ";cin>>namanya;
        cout<<"\nJumlah barang yang akan dibeli : ";cin>>jenis;
        for(int i=0;i<jenis;i++)
        {
            cout<<"\nNama barang : ";cin>>barang;
            cout<<"\nHarga       : ";cin>>harga;
            cout<<"\nJumlah barang pembelian : ";cin>>jumlah;
            total=total+harga*jumlah;
            cout<<"\nJumlah = "<<total;
        }
    }
    cout<<"\n\n==================TERIMA KASIH=================";



}
