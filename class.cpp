class mahasiswa {
private:
    int nim;
    string nama;
public:
    mahasiswa(); // Constructor default
    void cetak();
};

mahasiswa::mahasiswa() {
    nim = 0;
    nama = "";
}