#include <iostream>
using namespace std;

// Deklarasi class angka
class angka {
private:
    int *arr;       
    int panjang;    
public:
    angka(int);     
    ~angka();      
    void cetakData();   
    void isiData();     
};