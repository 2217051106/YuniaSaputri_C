#include <iostream>
#include <string>

using namespace std;

#define NPM "2217051106" // ganti dengan NPM Anda

#define CETAK_BILANGAN_TERKECIL \
    if ((NPM[8] - '0') % 2 == 0) \
        cout << "Bilangan terkecil: " << min(NPM[8], NPM[9]) << endl;

int main() {
    CETAK_BILANGAN_TERKECIL;

    return 0;
}
