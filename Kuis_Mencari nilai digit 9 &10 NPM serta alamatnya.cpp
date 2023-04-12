#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	//npm = 2217051058
    int angka_akhir_npm = 06; 
    int *ptr = &angka_akhir_npm;

    cout << "Nilai yang disimpan di dalam pointer: "<< setfill('0')<< setw(2) << *ptr << endl;
    cout << "Alamat tempat data NPM disimpan: " << ptr << endl;

    return 0;
}
