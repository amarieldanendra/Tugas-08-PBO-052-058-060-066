# Nama Anggota : 
#  - Fasya Nurina Izzati (140810200052)
#  - Amariel Danendra Dagna (140810200058)
#  - Alya Raisa Hidayat (140810200060)
#  - Muthia Azzahra (140810200066)
# Kelas           : B
# Tanggal Buat    : 1 November 2021
# Deskripsi       : Soal 1 - Python

class Bintang:
    def __init__(self, baris):
        self.__baris = baris

    def inputBaris(self):
        self.__baris = int(input("Masukan Banyak Baris : "))

    def loopFor(self):
        for i in range (0, self.__baris):
            print(str(i+1) + ". ", end = '')
            for j in range (0, self.__baris):
                if(j<i):
                    print("  ", end = '')
                else:
                    print('* ', end = '')
            print()

    def loopWhile(self):
        i = 1
        while(i <= self.__baris):
            print(str(i) + ". ", end = '')
            j = 1
            while(j <= self.__baris):
                if(j<i):
                    print("  ", end = '')
                else:
                    print('* ', end = '')
                j += 1
            print()
            i += 1

if __name__ == "__main__":
    star = Bintang(0)
    print("----------------------------------")
    star.inputBaris()
    print("----------------------------------")
    print("Bintang dengan Loop For\n")
    star.loopFor()
    print("----------------------------------")
    print("Bintang dengan Loop While")
    star.loopWhile()


