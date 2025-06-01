#include <iostream>
#include <conio.h>

using namespace std;

struct Mahasiswa
{
    string nim;
    string nama;
    string alamat;
    float ipk;
};

int main (int argc, char const *args[]){
    Mahasiswa Rafi;
    Mahasiswa *ptrRafi = &Rafi;

    cout << "Masukkan Nim : ";
    cin >> ptrRafi->nim;
    system("cls");
    cout << "Masukkan Nama : ";
    cin >> ptrRafi->nama;
    system("cls");
    cout << "Masukkan Alamat : ";
    cin >> ptrRafi->alamat;
    system("cls");
    cout << "Masukkan Nim : ";
    cin >> ptrRafi->ipk;
    system("cls");

    
}