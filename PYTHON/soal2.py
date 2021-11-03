 # Nama Anggota : 
#  - Fasya Nurina Izzati (140810200052)
#  - Amariel Danendra Dagna (140810200058)
#  - Alya Raisa Hidayat (140810200060)
#  - Muthia Azzahra (140810200066)
# Kelas           : B
# Tanggal Buat    : 1 November 2021
# Deskripsi       : Soal 2 - Python

class Matriks:
    def __init__(self, baris, kolom, nilai):
        self.__baris = baris
        self.__kolom = kolom
        self.__nilai = nilai
    
    def inputBaris(self):
        self.__baris = int(input("Masukan Banyak Baris : "))
    
    def inputKolom(self):
        self.__kolom = int(input("Masukan Banyak Kolom : "))

    def isiMatriks(self):
        for i in range (0, self.__baris):
            kolom = []
            for j in range (0, self.__kolom):
              kolom.append(int(input("Masukan nilai Matriks ke (" + str(i+1) + ", " + str(j+1) + ") = ")))
            self.__nilai.append(kolom)
    
    def printMatriks(self):
        for i in self.__nilai:
            print(i)

    def jumlahBaris(self):
        temp = [0 for i in range(self.__baris)]
        for i in range(self.__baris):
            for j in range (self.__kolom):
                temp [i] += self.__nilai[i][j]
        for i in range(self.__baris):
            print (" * Baris ke-" + str(i+1) + " = " + str(temp[i]))

    def jumlahKolom(self):
        temp = [0 for i in range(self.__kolom)]
        for i in range(self.__baris):
            for j in range (self.__kolom):
                temp [i] += self.__nilai[j][i]
        for i in range(self.__baris):
            print (" * Kolom ke-" + str(i+1) + " = " + str(temp[i]))
    

if __name__ == "__main__":
    baris = 0
    kolom = 0
    mtx = Matriks(baris, kolom, [])
    
    print ("--------------------------------------")
    mtx.inputBaris()
    mtx.inputKolom()

    print ("--------------------------------------")
    mtx.isiMatriks()

    print ("--------------------------------------")
    print ("Bentuk Matriks")
    mtx.printMatriks()

    print ("--------------------------------------")
    print ("Jumlah Baris")
    mtx.jumlahBaris()

    print ("--------------------------------------")
    print ("Jumlah Kolom")
    mtx.jumlahKolom()    