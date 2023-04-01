#include <iostream>
#include <string>
using namespace std;

// fungsi binary search
int binarySearch(string arr[], int l, int r, string x)
{
    while (l <= r) {
        int mid = l + (r - l) / 2;

        // Jika elemen yang dicari ditemukan pada tengah
        if (arr[mid] == x)
            return mid;

        // Jika elemen yang dicari lebih besar dari tengah,
        // abaikan setengah kiri dan cari di setengah kanan
        if (arr[mid] < x)
            l = mid + 1;

        // Jika elemen yang dicari lebih kecil dari tengah,
        // abaikan setengah kanan dan cari di setengah kiri
        else
            r = mid - 1;
    }

    // jika elemen tidak ditemukan
    return -1;
}

int main()
{
    string books[] = { "one piece" };
    int n = sizeof(books) / sizeof(books[0]);
    string bookName;

    cout << "Masukkan judul buku yang ingin dicari: ";
    getline(cin, bookName);

    int result = binarySearch(books, 0, n - 1, bookName);

    if (result == -1)
        cout << "Buku tidak ditemukan" << endl;
    else
        cout << "Buku ditemukan pada indeks ke-" << result << endl;

    return 0;
}
