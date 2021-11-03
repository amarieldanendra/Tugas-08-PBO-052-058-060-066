#include <iostream>

using namespace std;

class Matriks {
    private:
        int baris;
        int kolom;
        int nilai[10][10];

    public:
        Matriks() {
            this->baris = 10;
            this->kolom = 10;
            nilai[baris][kolom];
        }

        Matriks(int baris, int kolom) {
            this->baris = baris;
            this->kolom = kolom;
            nilai[baris][kolom];
        }

        void isiMatriks() {
            cout << "Masukkan Banyak Baris: "; 
            cin >> this->baris;
            cout << "Masukkan Banyak Kolom: "; 
            cin >> this->kolom;
            for(int i=0; i<this->baris; i++) {
                for(int j=0; j<this->kolom; j++) {
                    cout << "Masukkan nilai Matriks ke (" << i+1 << ", " << j+1 << ") = "; 
                    cin >> this->nilai[i][j];
                }
            }
        }

        void printMatriks() {
            for(int i=0; i<this->baris; i++) {
                for(int j=0; j<this->kolom; j++) {
                    cout << this->nilai[i][j] << "  ";
                }
                cout << endl;
            }
        }

        void jumlahBaris() {
            int temp;
            int hasil[10];

            for(int i=0; i<this->baris; i++) {
                temp = 0;
                for(int j=0; j<this->kolom; j++) {
                    temp += this->nilai[i][j];

                }
                hasil[i] = temp;
                cout << " * Baris ke-" << i+1 << " = " << hasil[i] << endl;
            }
        }

        void jumlahKolom() {
            int temp;
            int hasil[10];

            for(int i=0; i<this->baris; i++) {
                temp = 0;
                for(int j=0; j<this->kolom; j++) {
                    temp += this->nilai[j][i];

                }
                hasil[i] = temp;
                cout << " * Kolom ke-" << i+1 << " = " << hasil[i] << endl;
            }
        }
};

int main() {
    int baris;
    int kolom;

    Matriks *mtx = new Matriks();

    cout << "----------------------------------------" << endl;
    mtx->isiMatriks();
    cout << "----------------------------------------" << endl;
    cout << "Bentuk Matriks" << endl;
    mtx->printMatriks();
    cout << "----------------------------------------" << endl;
    cout << "Jumlah Baris" << endl;
    mtx->jumlahBaris();
    cout << "----------------------------------------" << endl;
    cout << "Jumlah Kolom" << endl;
    mtx->jumlahKolom();
}