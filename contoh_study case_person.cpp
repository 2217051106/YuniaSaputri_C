#include <iostream>
#include <cstring>

using namespace std;

class Person {
private:
    char name[50];
    int age;
public:
    void setValues(const char* n, int a) {
        strcpy(name, n);
        age = a;
    }
    void display() { //menampilkan nama dan umur
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

//void printArray(int *arr, int size) {
//    for(int i = 0; i < size; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}

int main() {
    Person p1, p2;
    p1.setValues("John Doe", 25);
    p2.setValues("Jane Smith", 30);

    p1.display();
    p2.display();

//    int arr[5] = {1, 2, 3, 4, 5};
//    int *ptr = arr;
//
//    cout << "Array: ";
//    printArray(ptr, 5);

}



