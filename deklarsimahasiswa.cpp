#include <iostream>
#include <string>
using namespace std;

// Deklarasi class mahasiswa
class mahasiswa {
    private:
    int nim;           
    string nama;       
public:
    mahasiswa();                               
    mahasiswa(int);                            
    mahasiswa(string);                         
    mahasiswa(int iNim, string iNama);         
    void cetak();           
};
