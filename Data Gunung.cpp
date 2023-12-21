#include <iostream>
#include <string>
using namespace std;

struct Gunung {
    string nama;
    double tinggi;
    string lokasi;
    string tipeG;
    int tahun_letusan_terakhir;
    int total_letusan;
    string status;
};

int main() {

    Gunung dataGunung[100];
    int count = 0;
    int input;

    // Inisialisasi contoh data gunung
    dataGunung[count++] = {"Gunung Merapi", 2911, "Yogyakarta, Jawa Tengah", "Stratovolcano", 2021, 5, "Aktif"};
    dataGunung[count++] = {"Gunung Rinjani", 3726, "Lombok, Nusa Tenggara Barat", "Stratovolcano", 2010, 3, "Aktif"};
    dataGunung[count++] = {"Gunung Bromo", 2329, "Jawa Timur", "Caldera", 2016, 2, "Aktif"};
    dataGunung[count++] = {"Gunung Kerinci", 3805, "Jambi", "Stratovolcano", 2019, 7, "Aktif"};
    dataGunung[count++] = {"Gunung Tambora", 2850, "Pulau Sumbawa, Nusa Tenggara Barat", "Stratovolcano", 1967, 4, "Non-Aktif"};

    while (true) {

        cout << "MENU" << endl;
        cout << "1. Input Data Gunung" << endl;
        cout << "2. Tampilkan Data" << endl;
        cout << "3. Update Data Gunung" << endl;
        cout << "4. Hapus Data Gunung" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> input;

   }
return 0;
}
