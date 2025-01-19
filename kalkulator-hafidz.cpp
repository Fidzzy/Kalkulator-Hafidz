#include <iostream> // untuk input output
#include <cmath> //  untuk fungsi matematika
#include <limits> // untuk numeric_limits
#include <iomanip> //untuk setprecision
using namespace std;

void displayMenu() { // Menu utama
    cout << "##=====Kalkulator Ku=====##" << endl;
    cout << "Daftar Operasi" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "5. Modulo" << endl;
    cout << "6. Pangkat" << endl;
    cout << "7. Akar pangkat n" << endl;
    cout << "8. Persen" << endl;
    cout << "9. Logaritma" << endl; 
    cout << "10. Fungsi Floor" << endl;
    cout << "11. Fungsi Ceil" << endl;
    cout << "12. Faktorial" << endl;
    cout << "13. Fungsi Trigonometri" << endl;
    cout << "14. Hitung Luas" << endl;
    cout << "15. Hitung Volume" << endl;
    cout << "16. Keluar" << endl;
    cout << "Pilih operasi: ";
}

void displayMenu2() { // Menu fungsi trigonometri
    cout << "Daftar operasi: " << endl;
    cout << "1. Sin" << endl;
    cout << "2. Cos" << endl;
    cout << "3. Tan" << endl;
    cout << "4. Cosec" << endl;
    cout << "5. Secan" << endl;
    cout << "6. Cotan" << endl;
    cout << "7. Kembali" << endl;
    cout << "Pilih operasi: "; 
}

void displayMenu3() { // Menu hitung luas
    cout << "Daftar operasi: " << endl;
    cout << "1. Luas Persegi" << endl;
    cout << "2. Luas Persegi Panjang" << endl;
    cout << "3. Luas Segitiga" << endl;
    cout << "4. Luas Lingkaran" << endl;
    cout << "5. Luas Jajar Genjang" << endl;
    cout << "6. Luas Trapesium" << endl;
    cout << "7. Luas Layang-layang" << endl;
    cout << "8. Luas Belah Ketupat" << endl;
    cout << "9. Kembali" << endl;
    cout << "Pilih operasi: ";
}

void displayMenu4() { // Menu hitung volume
    cout << "Daftar operasi: " << endl;
    cout << "1. Volume Kubus" << endl;
    cout << "2. Volume Balok" << endl;
    cout << "3. Volume Tabung" << endl;
    cout << "4. Volume Kerucut" << endl;
    cout << "5. Volume Bola" << endl;
    cout << "6. Kembali" << endl;
    cout << "Pilih operasi: ";
}

void clearInput() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Mengoreksi input yang tidak valid
}

double getValidInput() {
    double input;
    while (true) {
        cin >> input;
        if (cin.fail()) {
            cout << "Input tidak valid. Silakan masukkan angka: ";
            clearInput();
        } else {
            return input; // Mengembalikan input yang valid
        }
    }
}

int main() {
    int opsi, opsi2, opsi3, opsi4;
    double angka1, angka2, angka3, hasil;

    do {
        displayMenu();
        opsi = getValidInput(); // Mengambil input yang valid

        switch (opsi) {
            case 1:
                cout << "Masukkan angka pertama: ";
                angka1 = getValidInput();
                cout << "Masukkan angka kedua: ";
                angka2 = getValidInput();
                hasil = angka1 + angka2;
                cout << "Hasil = " << fixed << setprecision(2) << hasil << endl;
                break;

            case 2:
                cout << "Masukkan angka pertama: ";
                angka1 = getValidInput();
                cout << "Masukkan angka kedua: ";
                angka2 = getValidInput();
                hasil = angka1 - angka2;
                cout << "Hasil = " << fixed << setprecision(2) << hasil << endl;
                break;

            case 3:
                cout << "Masukkan angka pertama: ";
                angka1 = getValidInput();
                cout << "Masukkan angka kedua: ";
                angka2 = getValidInput();
                hasil = angka1 * angka2;
                cout << "Hasil = " << fixed << setprecision(2) << hasil << endl;
                break;

            case 4:
                cout << "Masukkan angka pertama: ";
                angka1 = getValidInput();
                cout << "Masukkan angka kedua: ";
                angka2 = getValidInput();
                if (angka2 == 0) {
                    cout << "Error: Ngebagi sama nol mana bisa kocak!" << endl;
                } else {
                    hasil = angka1 / angka2;
                    cout << "Hasil = " << fixed << setprecision(2) << hasil << endl;
                }
                break;

            case 5:
                cout << "Masukkan angka pertama: ";
                angka1 = getValidInput();
                cout << "Masukkan angka kedua: ";
                angka2 = getValidInput();
                if (angka2 == 0) {
                    cout << "Error: Modulo nol apacoba" << endl;
                } else {
                    hasil = fmod(angka1, angka2);
                    cout << "Hasil = " << fixed << setprecision(2) << hasil << endl;
                }
                break;

            case 6:
                cout << "Masukkan basis: ";
                angka1 = getValidInput();
                cout << "Masukkan pangkat: ";
                angka2 = getValidInput();
                hasil = pow(angka1, angka2);
                cout << "Hasil = " << fixed << setprecision(2) << hasil << endl;
                break;

            case 7:
                cout << "Masukkan angka: ";
                angka1 = getValidInput();
                cout << "Masukkan pangkat: ";
                angka2 = getValidInput();
                if (angka1 < 0 && angka2 < 0) {
                    cout << "Error: Mana bisa gitu woy!" << endl;
                } else {
                    hasil = pow(angka1, 1 / angka2);
                    cout << "Hasil = " << fixed << setprecision(2) << hasil << endl;
                }
                break;

            case 8: 
                cout << "Masukkan angka: ";
                angka1 = getValidInput();
                hasil = angka1 / 100;
                cout << "Hasil = " << fixed << setprecision(2) << hasil << endl;
                break;

            case 9:
                cout << "Masukkan basis: ";
                angka1 = getValidInput();
                cout << "Masukkan numerus: ";
                angka2 = getValidInput();  
                if (angka1 > 0 && angka2 > 0 && angka1 != 1) { 
                    double hasil = log(angka2) / log(angka1);
                    cout << "Hasil = " << fixed << setprecision(2) << hasil << endl;
                } else {
                    cout << "Error: Mana bisa gitu woy!" << endl;
                }
                break;

            case 10:
                cout << "Masukkan angka: ";
                angka1 = getValidInput();
                hasil = floor(angka1);
                cout << "Hasil = " << fixed << setprecision(2) << hasil << endl;
                break;

            case 11:   
                cout << "Masukkan angka: ";
                angka1 = getValidInput();
                hasil = ceil(angka1);
                cout << "Hasil = " << fixed << setprecision(2) << hasil << endl;
                break;

            case 12:    
                cout << "Masukkan angka: ";
                angka1 = getValidInput();
                hasil = 1;
                if (angka1 < 0) {
                    cout << "Error: Mana bisa negatif kocak!" << endl;
                } else {
                    for (int i = 1; i <= angka1; i++) {
                        hasil *= i;
                    }
                    cout << "Hasil = " << fixed << setprecision(2) << hasil << endl;
                }
                break;

            case 13:
                do {
                    displayMenu2();
                    opsi2 = getValidInput(); // Mengambil input yang valid
                    switch (opsi2) {
                        case 1:
                            cout << "Masukkan angka: ";
                            angka1 = getValidInput();
                            hasil = sin(angka1);
                            cout << "Hasil = " << fixed << setprecision(2) << hasil << endl;
                            break;

                        case 2:
                            cout << "Masukkan angka: ";
                            angka1 = getValidInput();
                            hasil = cos(angka1);
                            cout << "Hasil = " << fixed << setprecision(2) << hasil << endl;
                            break;

                        case 3:
                            cout << "Masukkan angka: ";
                            angka1 = getValidInput();
                            hasil = tan(angka1);
                            cout << "Hasil = " << fixed << setprecision(2) << hasil << endl;
                            break;

                        case 4:
                            cout << "Masukkan angka: ";
                            angka1 = getValidInput();
                            if (sin(angka1) == 0) {
                                cout << "Error: Gak terdefinisi lah bro" << endl;
                            } else {
                                hasil = 1 / sin(angka1);
                                cout << "Hasil = " << fixed << setprecision(2) << hasil << endl;
                            }
                            break;

                        case 5:
                            cout << "Masukkan angka: ";
                            angka1 = getValidInput();
                            if (cos(angka1) == 0) {
                                cout << "Error: Gak terdefinisi lah bro" << endl;
                            } else {
                                hasil = 1 / cos(angka1);
                                cout << "Hasil = " << fixed << setprecision(2) << hasil << endl;
                            }
                            break;

                        case 6:
                            cout << "Masukkan angka: ";
                            angka1 = getValidInput();
                            if (tan(angka1) == 0) {
                                cout << "Error: Gak terdefinisi lah bro" << endl;
                            } else {
                                hasil = 1 / tan(angka1);
                                cout << "Hasil = " << fixed << setprecision(2) << hasil << endl;
                            }
                            break;

                        case 7:
                            break; // Kembali ke menu utama

                        default:
                            cout << "Dibilangin cuma 1 sampe 7 >:(" << endl;
                    }
                } while (opsi2 != 7);
                break;

            case 14:
                do {
                    displayMenu3();
                    opsi3 = getValidInput();
                    switch (opsi3) {
                        case 1:
                            cout << "Masukkan sisi: ";
                            angka1 = getValidInput();
                            hasil = angka1 * angka1;
                            cout << "Hasil = " << fixed << setprecision(2) << hasil << endl;
                            break;

                        case 2:
                            cout << "Masukkan panjang: ";
                            angka1 = getValidInput();
                            cout << "Masukkan lebar: ";
                            angka2 = getValidInput();
                            hasil = angka1 * angka2;
                            cout << "Hasil = " << fixed << setprecision(2) << hasil << endl;
                            break;

                        case 3:
                            cout << "Masukkan alas: ";
                            angka1 = getValidInput();
                            cout << "Masukkan tinggi: ";
                            angka2 = getValidInput();
                            hasil = 0.5 * angka1 * angka2;
                            cout << "Hasil = " << fixed << setprecision(2) << hasil << endl;
                            break;

                        case 4:
                            cout << "Masukkan jari-jari: ";
                            angka1 = getValidInput();
                            hasil = 3.14 * angka1 * angka1; 
                            cout << "Hasil = " << fixed << setprecision(2) << hasil << endl;
                            break;

                        case 5:
                            cout << "Masukkan alas: ";
                            angka1 = getValidInput();
                            cout << "Masukkan tinggi: ";
                            angka2 = getValidInput();
                            hasil = angka1 * angka2;
                            cout << "Hasil = " << fixed << setprecision(2) << hasil << endl;
                            break;

                        case 6:
                            cout << "Masukkan sisi atas: ";
                            angka1 = getValidInput();
                            cout << "Masukkan sisi bawah: ";
                            angka2 = getValidInput();
                            cout << "Masukkan tinggi: ";
                            angka3 = getValidInput();
                            hasil = 0.5 * (angka1 + angka2) * angka3;
                            cout << "Hasil = " << fixed << setprecision(2) << hasil << endl;
                            break;

                        case 7:
                            cout << "Masukkan diagonal 1: ";
                            angka1 = getValidInput();
                            cout << "Masukkan diagonal 2: ";
                            angka2 = getValidInput();
                            hasil = 0.5 * angka1 * angka2;
                            cout << "Hasil = " << fixed << setprecision(2) << hasil << endl;
                            break;
                        
                        case 8:
                            cout << "Masukkan diagonal 1: ";
                            angka1 = getValidInput();
                            cout << "Masukkan diagonal 2: ";
                            angka2 = getValidInput();
                            hasil = 0.5 * angka1 * angka2;
                            cout << "Hasil = " << fixed << setprecision(2) << hasil << endl;
                            break;
                        
                        case 9:
                            break; // Kembali ke menu utama

                        default:
                            cout << "Dibilangin cuma 1 sampe 9 >:(" << endl;
                    }
                } while (opsi3 != 9);
                break; 

            case 15:
                do {
                    displayMenu4();
                    opsi4 = getValidInput();
                    switch (opsi4) {
                        case 1:
                            cout << "Masukkan sisi: ";
                            angka1 = getValidInput();
                            hasil = angka1 * angka1 * angka1;
                            cout << "Hasil = " << fixed << setprecision(2) << hasil << endl;
                            break;

                        case 2:
                            cout << "Masukkan panjang: ";
                            angka1 = getValidInput();
                            cout << "Masukkan lebar: ";
                            angka2 = getValidInput();
                            cout << "Masukkan tinggi: ";
                            angka3 = getValidInput();
                            hasil = angka1 * angka2 * angka3;
                            cout << "Hasil = " << fixed << setprecision(2) << hasil << endl;
                            break;

                        case 3:
                            cout << "Masukkan jari-jari: ";
                            angka1 = getValidInput();
                            cout << "Masukkan tinggi: ";
                            angka2 = getValidInput();
                            hasil = 3.14 * angka1 * angka1 * angka2;
                            cout << "Hasil = " << fixed << setprecision(2) << hasil << endl;
                            break;

                        case 4:
                            cout << "Masukkan jari-jari: ";
                            angka1 = getValidInput();
                            cout << "Masukkan tinggi: ";
                            angka2 = getValidInput();
                            hasil = (1.0 / 3) * 3.14 * angka1 * angka1 * angka2; // Perbaikan di sini
                            cout << "Hasil = " << fixed << setprecision(2) << hasil << endl;
                            break;

                        case 5:
                            cout << "Masukkan jari-jari: ";
                            angka1 = getValidInput();
                            hasil = (4.0 / 3) * 3.14 * angka1 * angka1 * angka1; // Perbaikan di sini
                            cout << "Hasil = " << fixed << setprecision(2) << hasil << endl;
                            break;

                        case 6:
                            break;

                        default:
                            cout << "Dibilangin cuma 1 sampe 6 >:(" << endl;
                    }
                } while (opsi4 != 6);
                break; // Kembali ke menu utama

            case 16:
                cout << "Thanks dah make. Semoga harimu menyenangkan :D" << endl;
                break; // Keluar dari program

            default:
                cout << "Dibilangin cuma 1 sampe 16 >:(" << endl; 
        }
    } while (opsi != 16); // Looping menu utama

    return 0;
}