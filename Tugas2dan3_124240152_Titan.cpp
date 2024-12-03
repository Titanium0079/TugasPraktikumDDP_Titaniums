#include <iostream>
using namespace std;

struct Siswa{
    string nama;
    int noAbsen;
    char kelas;
};

struct MataPelajaran{
    string mapel;
    int nilai;
};

void inputNilai(int nilai[], string mapel[], int jumlahMapel) {
    for (int i = 0; i < jumlahMapel; i++) {
        cout << "\nNama Mata Pelajaran " << i + 1 << ": ";
        cin.ignore();
        getline(cin, mapel[i]);
        cout << "Nilai " << mapel[i] << ": ";
        cin >> nilai[i];
    }
}

 void hitungDanTampilkanRataRata(int nilai[], int jumlahMapel) {
    int totalNilai = 0;

    for (int i = 0; i < jumlahMapel; i++) {
        totalNilai += nilai[i];
    }

    float rataRata = static_cast<float>(totalNilai) / jumlahMapel;
    cout << "\nRata-rata nilai rapor: " << rataRata << endl;
}

int main (){
    Siswa siswa;
    int jumlahMapel;
    cout << "Input Nama Siswa: ";
    getline(cin, siswa.nama);
    cout << "Input Nomor Absen Siswa: ";
    cin >> siswa.noAbsen;
    cout << "Input Kelas: ";
    cin >> siswa.kelas;

    cout << "Input Jumlah Mata Pelajaran: ";
    cin >> jumlahMapel;

    int nilai[jumlahMapel];
    string mapel[jumlahMapel];

    inputNilai(nilai, mapel, jumlahMapel);
    hitungDanTampilkanRataRata(nilai, jumlahMapel);

    return 0;

}
