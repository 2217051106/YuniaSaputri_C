//#include <iostream>
//using namespace std;
//
//int multiplyLastDigit(int num, int times) {
//    if (times == 0) {
//        return num;
//    }
//    int lastDigit = num % 10;
//    num /= 10;
//    num *= 10;
//    num += (lastDigit * 10);
//    return multiplyLastDigit(num, times - 1);
//}
//
//int main() {
//    int npm = 2217051106;
//    int digit9 = (npm / 100000000) % 10; // mendapatkan digit ke-9 NPM
//    int result = multiplyLastDigit(npm, digit9);
//    cout << "Hasil perkalian digit ke-10 NPM sebanyak " << digit9 << " kali: " << result << endl;
//    return 0;
//}


#include <iostream>
#include <string>

using namespace std;

// fungsi rekursif untuk mengalikan digit ke-10 NPM sebanyak x kali
int kaliDigit10(string npm, int x) {
    if (x == 0) {
        return 1;
    } else {
        int digit10 = npm[9] - '0';
        return digit10 * kaliDigit10(npm, x-1);
    }
}

int main() {
    string npm = "2217051106"; // ganti dengan NPM Anda
    int x = npm[8] - '0'; // ambil digit ke-9 dari NPM sebagai x
    int hasil = kaliDigit10(npm, x);
    cout << "Hasil perkalian digit ke-10 NPM sebanyak " << x << " kali: " << hasil << endl;

    return 0;
}

