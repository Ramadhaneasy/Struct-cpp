#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Definisikan struct Kampus
struct Kampus {
    string namakampus, alamatkampus;
    int tahunBerdiri;
};

// Definisikan struct AlamatMhs
struct AlamatMhs {
    string jalan;
};

// Definisikan struct Mahasiswa
struct Mahasiswa {
    string npm, nama, jurusan;
    int umur;
    Kampus kps;
    AlamatMhs alamat;
    vector<string> hobi;

    Mahasiswa() : hobi(2) {} // Inisialisasi vektor hobi dengan ukuran 2
};

// Fungsi untuk mencetak data mahasiswa
void cetakDataMahasiswa(const Mahasiswa &data) {
    cout << "npm mahasiswa : " << data.npm << endl;
    cout << "nama mahasiswa : " << data.nama << endl;
    cout << "jurusan mahasiswa : " << data.jurusan << endl;
    cout << "umur mahasiswa : " << data.umur << endl;
    cout << "universitas mahasiswa : " << data.kps.namakampus << endl;
    cout << "alamat kampus : " << data.kps.alamatkampus << endl;
    cout << "tahun berdiri : " << data.kps.tahunBerdiri << endl;
    cout << "alamat mahasiswa : " << data.alamat.jalan << endl;
    cout << "hobi mahasiswa 1 : " << data.hobi[0] << endl;
    cout << "hobi mahasiswa 2 : " << data.hobi[1] << endl;
}

int main() {
    // Deklarasi array Mahasiswa
    Mahasiswa mhs[2];

    // Inisialisasi data mahasiswa pertama
    mhs[0].npm = "667788";
    mhs[0].nama = "risky ramadhani";
    mhs[0].jurusan = "informatika";
    mhs[0].umur = 22;
    mhs[0].hobi[0] = "resink";
    mhs[0].hobi[1] = "game";
    mhs[0].kps = {"universitas 1", "teknik pati", 2000};
    mhs[0].alamat.jalan = "jl.nin aja dulu";

    // Cetak data mahasiswa pertama
    cetakDataMahasiswa(mhs[0]);
    cout << "\n\n" << endl;

    // Inisialisasi data mahasiswa kedua
    mhs[1].npm = "334455";
    mhs[1].nama = "alden turun mesin";
    mhs[1].jurusan = "informatika";
    mhs[1].umur = 20;
    mhs[1].hobi[0] = "makan";
    mhs[1].hobi[1] = "mabar FF";
    mhs[1].kps = {"universitas 1", "teknik pati", 2000};
    mhs[1].alamat.jalan = "jl.lurus aja";

    // Cetak data mahasiswa kedua
    cetakDataMahasiswa(mhs[1]);

    return 0;
}
