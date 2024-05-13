#include <iostream>

using namespace std;

// Базовий клас A без віртуального успадкування
class A {
public:
    int dataA;
    A(int d) : dataA(d) {}
    void printDataA() {
        cout << "Data in class A: " << dataA << endl;
    }
};

// Похідний клас B без віртуального успадкування
class B : public A {
public:
    int dataB;
    B(int d1, int d2) : A(d1), dataB(d2) {}
    void printDataB() {
        cout << "Data in class B: " << dataB << endl;
    }
};

// Базовий клас C без віртуального успадкування
class C {
public:
    int dataC;
    C(int d) : dataC(d) {}
    void printDataC() {
        cout << "Data in class C: " << dataC << endl;
    }
};

// Похідний клас D без віртуального успадкування
class D : public C {
public:
    int dataD;
    D(int d1, int d2) : C(d1), dataD(d2) {}
    void printDataD() {
        cout << "Data in class D: " << dataD << endl;
    }
};

// Базовий клас E з віртуальним успадкуванням
class E {
public:
    int dataE;
    E(int d) : dataE(d) {}
    virtual void printDataE() {
        cout << "Data in class E: " << dataE << endl;
    }
};

// Похідний клас F з віртуальним успадкуванням
class F : public E {
public:
    int dataF;
    F(int d1, int d2) : E(d1), dataF(d2) {}
    void printDataF() {
        cout << "Data in class F: " << dataF << endl;
    }
};

int main() {
    // Створення об'єктів
    A objA(1);
    B objB(2, 3);
    C objC(4);
    D objD(5, 6);
    E objE(7);
    F objF(8, 9);

    // Виведення розмірів об'єктів
    cout << "Size of objA: " << sizeof(objA) << endl;
    cout << "Size of objB: " << sizeof(objB) << endl;
    cout << "Size of objC: " << sizeof(objC) << endl;
    cout << "Size of objD: " << sizeof(objD) << endl;
    cout << "Size of objE: " << sizeof(objE) << endl;
    cout << "Size of objF: " << sizeof(objF) << endl;

    system("pause");
    return 0;
}
