#include <iostream>
#include <unistd.h>

using namespace std;

int main() {
    // Array level kekeruhan air dan kecepatan motor RPM
    int kekeruhanAir[] = {6, 8, 12, 18, 24, 30, 36, 42, 49};
    int motorRPM[] = {1000, 800, 600, 400, 300, 200, 150, 100, 80};

    // Rata-rata kekeruhan air dan waktu pencucian dalam menit
    int rataRataKekeruhanAir = 68;
    int waktuCuci = 60;

    // Simulasi tombol Start ditekan
    cout << "Tombol Start ditekan. Motor listrik pembuka klep pengisian air aktif selama 2 menit sampai air penuh." << endl;
    sleep(2 * 60); // Menunggu 2 menit untuk mengisi air

    // Sensor turbidimeter aktif hanya satu kali untuk mendeteksi level kekeruhan air
    int detectedLevel = -1;
    for (int i = 0; i < sizeof(kekeruhanAir) / sizeof(kekeruhanAir[0]); i++) {
        if (kekeruhanAir[i] <= rataRataKekeruhanAir) {
            detectedLevel = i;
            break;
        }
    }

    // Menggunakan switch-case untuk memilih kecepatan motor berdasarkan level kekeruhan air
    switch (detectedLevel) {
        case 0:
        case 1:
            cout << "Motor listrik utama berputar dengan kecepatan " << motorRPM[0] << " rpm." << endl;
            break;
        case 2:
            cout << "Motor listrik utama berputar dengan kecepatan " << motorRPM[1] << " rpm." << endl;
            break;
        case 3:
            cout << "Motor listrik utama berputar dengan kecepatan " << motorRPM[2] << " rpm." << endl;
            break;
        case 4:
            cout << "Motor listrik utama berputar dengan kecepatan " << motorRPM[3] << " rpm." << endl;
            break;
        case 5:
            cout << "Motor listrik utama berputar dengan kecepatan " << motorRPM[4] << " rpm." << endl;
            break;
        case 6:
            cout << "Motor listrik utama berputar dengan kecepatan " << motorRPM[5] << " rpm." << endl;
            break;
        case 7:
            cout << "Motor listrik utama berputar dengan kecepatan " << motorRPM[6] << " rpm." << endl;
            break;
        case 8:
            cout << "Motor listrik utama berputar dengan kecepatan " << motorRPM[7] << " rpm." << endl;
            break;
        default:
            cout << "Level kekeruhan air tidak valid." << endl;
            return 1;
    }

    // Proses pencucian dengan waktu tertentu sesuai dengan level kekeruhan air
    for (int j = 1; j <= waktuCuci; j++) {
        cout << "Waktu pencucian: " << j << " menit." << endl;
        sleep(1 * 60); // Menunggu 1 menit

        // Jeda pertengahan waktu pencucian untuk membuang air kotor
        if (j == waktuCuci / 2) {
            cout << "Motor listrik pembuka klep pembuangan air kotor aktif selama 2 menit sampai air kotor habis." << endl;
            sleep(2 * 60); // Jeda 2 menit
        }
    }

    // Motor listrik utama berputar dengan kecepatan 2000 rpm untuk mengeringkan cucian selama 3 menit
    cout << "Motor listrik utama berputar dengan kecepatan 2000 rpm untuk mengeringkan cucian selama 3 menit." << endl;
    sleep(3 * 60); // Jeda 3 menit

    // Kondisi akhir, motor listrik pembuka klep pembuangan air kotor aktif selama 2 menit sampai air habis
    cout << "Motor listrik pembuka klep pembuangan air kotor aktif selama 2 menit sampai air habis." << endl;
    sleep(2 * 60); // Jeda 2 menit

    // Mesin cuci selesai
    cout << "Pencucian selesai. Mesin cuci dimatikan." << endl;

    return 0;
}

