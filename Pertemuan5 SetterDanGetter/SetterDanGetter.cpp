#include <iostream>
using namespace std;

class Perpustakaan {
protected:
  string buku = "Sejarah Indonesia";
  string nama = "Fahmi";

public:
  string cekPinjaman() {
    return "Buku Sejarah Indonesia Sudah Dipinjam Oleh Fahmi";
  }
};

class Pengembalian : public Perpustakaan {
protected:
  string pengembalian = "Telah di kembalikan";

public:
  string cekKembali() {
    return "Buku Sejarah Indonesia Sudah Dikembalikan oleh Fahmi ";
  }
};


int main() {
  Pengembalian bukuPerpustakaan;

  cout << bukuPerpustakaan.cekPinjaman() << endl;
  cout << bukuPerpustakaan.cekKembali() << endl;

  return 0;
}
