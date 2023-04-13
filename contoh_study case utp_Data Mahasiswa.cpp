#include <iostream>
#include <cstring>

using namespace std;

// Deklarasi class Mahasiswa
class Mahasiswa {
private:
    char nama[50];
    int umur;
    float ipk;
public:
    // Konstruktor
    Mahasiswa(const char* _nama, int _umur, float _ipk) {
        strcpy(nama, _nama);
        umur = _umur;
        ipk = _ipk;
    }

    // Fungsi untuk menampilkan data mahasiswa
    void tampilkanData() {
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << " tahun" << endl;
        cout << "IPK: " << ipk << endl;
    }
};

int main() {
    // Deklarasi array of pointer ke objek Mahasiswa
    Mahasiswa* daftarMahasiswa[3];

    // Input data mahasiswa pertama
    char nama1[] = "John Doe";
    int umur1 = 20;
    float ipk1 = 3.75;
    daftarMahasiswa[0] = new Mahasiswa(nama1, umur1, ipk1);

    // Input data mahasiswa kedua
    char nama2[] = "Jane Smith";
    int umur2 = 22;
    float ipk2 = 3.95;
    daftarMahasiswa[1] = new Mahasiswa(nama2, umur2, ipk2);

    // Input data mahasiswa ketiga
    char nama3[] = "David Johnson";
    int umur3 = 21;
    float ipk3 = 3.50;
    daftarMahasiswa[2] = new Mahasiswa(nama3, umur3, ipk3);

    // Menampilkan data mahasiswa
    for (int i = 0; i < 3; i++) {
        cout << "Data Mahasiswa ke-" << i+1 << ":" << endl;
        daftarMahasiswa[i]->tampilkanData();
        cout << endl;
    }

    // Menghapus objek yang telah dialokasikan di heap
    for (int i = 0; i < 3; i++) {
        delete daftarMahasiswa[i];
    }

    return 0;
}
