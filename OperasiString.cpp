#include <iostream>

#include <string>
using namespace std;

int main()
{

    string kalimat;
    int jumlahKarakter = 0, jumlahVokal = 0;

    // Input kalimat dari pengguna
    cout << " Masukkan sebuah Kalimat : ";

    getline(cin, kalimat);

    // Menghitung jumlah karakter dan vokal
    for (char c : kalimat)
    {
        jumlahKarakter++;
        char lowerC = tolower(c);
        if (lowerC == 'a' || lowerC == 'e' || lowerC == 'i' || lowerC == 'u' || lowerC == 'o')
        {
            jumlahVokal++;
        }
    }

    // Membalikkan Kalimat
    string KalimatTerbalik = string(kalimat.rbegin(), kalimat.rend());

    // Output Hasil

    cout << "\nJumlah Karakter : " << jumlahKarakter << endl;
    cout << "Jumlah Vokal : " << jumlahVokal << endl;
    cout << "Kalimat Terbalik : " << KalimatTerbalik << endl;
    cout << "Kalimat Asli : " << kalimat << endl;
}