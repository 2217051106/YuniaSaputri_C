#include <iostream>
#include <stdlib.h>

void cetak_banner(void);
void cetak_menu(void);
void cetak_exit(void);
void tambah(void);
void terjemah(void);

using namespace std;

int N = 0;
string A[1000], B[1000];

int main() {
	bool found;
	int cmd;
	string C;

	cetak_banner();

	while (true) {
		cetak_menu();
		cout << ">>> ";
		cin >> cmd;
		switch(cmd) {
			case 1:
				tambah();
				break;

			case 2:
				terjemah();
				break;

			case 3:
				cetak_exit();
				exit(0);
				break;

			default:
				cout << "Mohon maaf menu tidak tersedia :/\n" << endl;
		}
	}	
}

void cetak_banner(void) {
	cout << "******************************************************************************************" << endl;
	cout << "*                                    Program Terjemah                                    *" << endl;
	cout << "*                        Ketik berapa kosakata yang akan dimasukkan                      *" << endl;
	cout << "* Kemudian ketik kata asing dan artinya sepasang, sebanyak kosakata yang akan dimasukkan *" << endl;
	cout << "*                      Ketik berapa kosakata yang akan diterjemahkan                     *" << endl;
	cout << "*                         Kemudian ketik kosakata kosakata tersebut                      *" << endl;
	cout << "******************************************************************************************" << endl;
	cout << "\n\n\n";
}

void cetak_menu(void) {
	cout << "******************************************************************************************" << endl;
	cout << "*                        Silahkan pilih perintah yang tersedia                           *" << endl;
	cout << "*     1. Tambah kosakata                                                                 *" << endl;
	cout << "*     2. Terjemah kosakata                                                               *" << endl;
	cout << "*     3. Exit                                                                            *" << endl;
	cout << "******************************************************************************************" << endl;
}

void cetak_exit(void) {
	cout << "******************************************************************************************" << endl;
	cout << "*                    Terima kasih sudah menggunakan program kami                         *" << endl;
	cout << "*                                  Sampai jumpa!!!                                       *" << endl;
	cout << "******************************************************************************************" << endl;
}

void tambah(void) {
	int n;

	cout << "Berapa kata yang ingin ditambahkan? ";
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> A[N+i] >> B[N+i];
	}

	N += n;
}

void terjemah(void) {
	bool found;
	int n;
	string C;

	cout << "Berapa kata yang ingin diterjemahkan? ";
	cin >> n;
	for (int i = 0, j; i < n; ++i) {
		cin >> C;

		found = false;
		for (j = 0; j < N; ++j) {
			if (C == A[j]) {
				found = true;
				break;
			}
		}

		cout << "Terjemah kata " << C << " adalah ";
		if (found)
			cout << B[j] << endl;
		else
			cout << C << endl;
	}

	cout << "\n\n\n";
}