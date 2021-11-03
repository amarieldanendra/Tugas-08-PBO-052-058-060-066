/*
Nama Anddota : 
 - Fasya Nurina Izzati (140810200052)
 - Amariel Danendra Dagna (140810200058)
 - Alya Raisa Hidayat (140810200060)
 - Muthia Azzahra (140810200066)
Kelas           : B
Tanggal Buat    : 1 November 2021
Deskripsi       : Soal 1 - CPP
*/

#include <iostream>

using namespace std;

class Bintang{
    private:
        int baris;

    public:
        Bintang(){
            this->baris = 0;
        }

        Bintang(int baris){
            this->baris = baris;
        }

        void loopFor(){
            int i = 0;
            for(i=0; i<this->baris; i++) {
                cout << (i+1) << ". ";
                for (int j=0; j<this->baris; j++){
                    if (j<i){
                        cout << " ";
                    } else{
                        cout << "*";
                    }
                }
                cout << endl;
            }
        }  

        void loopWhile(){
            int i=0;
            while (i<this->baris){
                cout << (i+1) << ". ";
                int j=0;
                while (j<this->baris){
                    if (j<i){
                        cout << " ";
                    } else {
                        cout << "*";
                    }
                    j++;
                }
                cout << endl;
                i++;
            }
        } 
};

int main(){
    int baris;

    cout << "----------------------------------------" << endl;
    cout << "Masukan Banyak Baris : ";
    cin >> baris;

    Bintang *forBintang = new Bintang(baris);
    Bintang *whileBintang = new Bintang(baris);

    cout << "----------------------------------------" << endl;
    cout << "Bintang dengan Loop For" << endl;
    forBintang->loopFor();

    cout << "----------------------------------------" << endl;
    cout << "Bintang dengan Loop While" << endl;
    whileBintang->loopWhile();
    cout << "----------------------------------------" << endl;
}