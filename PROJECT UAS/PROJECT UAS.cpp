#include <iostream>
#include <unistd.h>

using namespace std;

// Function to get user input for thickness
int getInputKetebalan() {
    int ketebalan;
    cout << "Masukkan ketebalan pengelasan secara manual pada array dan hitung nilai tengahnya: ";
    cin >> ketebalan;
    return ketebalan;
}

// Function to perform welding process
void lakukanPengelasan(int ketebalan, int waktu) {
    cout << "Motor listrik utama berputar dan pindah ke nilai tengah " << ketebalan / 2 << "." << endl;
    sleep(1 * 2);
    cout << "Motor listrik lengan tungkai berputar 45 derajat." << endl;
    sleep(1 * 2);
    cout << "Motor listrik jari robot berputar mendekati objek yang akan dilas." << endl;
    sleep(1 * 2);

    switch (ketebalan) {
        case 12:
            cout << "Proses khusus untuk ketebalan 12." << endl;
            // Additional processing for thickness 12
            break;
        default:
            cout << "Proses pengelasan untuk ketebalan " << ketebalan << " selama " << waktu << " detik." << endl;
    }

    sleep(1 * 2);
    cout << "Pengelasan selesai. Proses akan berulang ke langkah 3." << endl;
}

// Function to display a message
void tampilkanPesan(const string &pesan) {
    cout << pesan << endl;
}

int main() {
    int KP[] = {6, 8, 12, 18, 24, 30, 36, 42, 49, 50};
    int waktu[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int JK = sizeof(KP) / sizeof(KP[0]);

    tampilkanPesan("Tombol start ditekan. Motor listrik utama aktif dan berputar 180 derajat.");

    for (int i = 0; i < JK; i++) {
        int ketebalan = getInputKetebalan();
        lakukanPengelasan(ketebalan, waktu[i]);
    }

    return 0;
}

