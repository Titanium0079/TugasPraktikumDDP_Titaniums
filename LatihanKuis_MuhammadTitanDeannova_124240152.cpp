#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string username, password;
    string usernamebenar = "Titaniums";
    string passwordbenar = "124240152";
    
    // Login Section
    cout << "Silahkan Login ke akun anda" << endl;
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    if(username == usernamebenar && password == passwordbenar) {
        cout << "Login Berhasil!" << endl;
    } else {
        cout << "Username atau Password Salah!" << endl;
        return 0;
    }

    string namabarang1 = "", namabarang2 = "";  // Initialize as empty strings
    string tglbarang1, tglbarang2;
    int stockbarang1 = 0, stockbarang2 = 0;
    int pilihmenu;

    // Menu pertama
    cout << "\n===== Menu Utama =====" << endl;
    cout << "1. Input Data Barang" << endl;
    cout << "2. Cek Data Barang" << endl;
    cout << "3. Keluar" << endl;
    cout << "======================" << endl;
    cout << "Silahkan Pilih Menu: ";
    cin >> pilihmenu;

    if(pilihmenu == 1)
    {
        cout << "\nSilahkan Input Data Barang" << endl;
        cout << "Nama Barang 1: ";
        cin >> namabarang1;
        cout << "Tanggal Barang 1 (hh/bb): ";
        cin >> tglbarang1;
        cout << "Stock Barang 1: ";
        cin >> stockbarang1;
        cout << "Nama Barang 2: ";
        cin >> namabarang2;
        cout << "Tanggal Barang 2 (hh/bb): ";
        cin >> tglbarang2;
        cout << "Stock Barang 2: ";
        cin >> stockbarang2;
        cout << "\nData Barang Telah Ditambahkan" << endl;
    } 
    else if(pilihmenu == 2) 
    {
        if(namabarang1 == "") // If no data was input
        {
            cout << "Data Belum Diinput!" << endl;
        }
        else
        {
            cout << "Nama Barang 1 : " << namabarang1 << ", Tanggal Barang 1 : " << tglbarang1 << ", Stock Barang 1 : " << stockbarang1 << endl;
            cout << "Nama Barang 2 : " << namabarang2 << ", Tanggal Barang 2 : " << tglbarang2 << ", Stock Barang 2 : " << stockbarang2 << endl;
        }
    } 
    else if(pilihmenu == 3) 
    {
        cout << "Keluar Dari Program..." << endl;
        return 0;
    } 
    else 
    {
        cout << "Menu Tidak Valid!" << endl;
        return 0;
    }

    // Menu kedua
    cout << "\n===== Menu Utama =====" << endl;
    cout << "1. Input Data Barang" << endl;
    cout << "2. Cek Data Barang" << endl;
    cout << "3. Keluar" << endl;
    cout << "======================" << endl;
    cout << "Silahkan Pilih Menu: ";
    cin >> pilihmenu;

    if(pilihmenu == 1) 
    {
        if(namabarang1 == "") 
        {
            cout << "\nSilahkan Input Data Barang" << endl;
        }
        else 
        {
            cout << "\nData Telah Diinput Sebelumnya!" << endl;
        }
    } 
    else if(pilihmenu == 2) 
    {
        if(namabarang1 == "") 
        {
            cout << "Data Belum Diinput!" << endl;
        }
        else 
        {
            cout << "Nama Barang 1 : " << namabarang1 << ", Tanggal Barang 1 : " << tglbarang1 << ", Stock Barang 1 : " << stockbarang1 << endl;
            cout << "Nama Barang 2 : " << namabarang2 << ", Tanggal Barang 2 : " << tglbarang2 << ", Stock Barang 2 : " << stockbarang2 << endl;
        }
    } 
    else if(pilihmenu == 3) 
    {
        cout << "Keluar Dari Program..." << endl;
        return 0;
    } 
    else 
    {
        cout << "Menu Tidak Valid!" << endl;
        return 0;
    }

    // Menu ketiga
    cout << "\n===== Menu Utama =====" << endl;
    cout << "1. Input Data Barang" << endl;
    cout << "2. Cek Data Barang" << endl;
    cout << "3. Keluar" << endl;
    cout << "======================" << endl;
    cout << "Silahkan Pilih Menu: ";
    cin >> pilihmenu;

    if(pilihmenu == 1) 
    {
        if(namabarang1 == "") 
        {
            cout << "\nSilahkan Input Data Barang" << endl;
        }
        else 
        {
            cout << "\nData Telah Diinput Sebelumnya!" << endl;
        }
    } 
    else if(pilihmenu == 2) 
    {
        if(namabarang1 == "") 
        {
            cout << "Data Belum Diinput!" << endl;
        }
        else 
        {
            cout << "Nama Barang 1 : " << namabarang1 << ", Tanggal Barang 1 : " << tglbarang1 << ", Stock Barang 1 : " << stockbarang1 << endl;
            cout << "Nama Barang 2 : " << namabarang2 << ", Tanggal Barang 2 : " << tglbarang2 << ", Stock Barang 2 : " << stockbarang2 << endl;
        }
    } 
    else if(pilihmenu == 3) 
    {
        cout << "Keluar Dari Program..." << endl;
        return 0;
    } 
    else 
    {
        cout << "Menu Tidak Valid!" << endl;
    }

    cout << "\nKesempatan Anda Telah Habis!" << endl;
    cout << "Keluar Dari Program..." << endl;
    return 0;
}