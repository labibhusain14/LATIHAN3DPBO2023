# Import file.
from Sivitas_Akademik import Sivitas_Akademik


# membuat kelas Mahasiswa dengan pewarisan dari kelas Sivitas_Akademik
class Mahasiswa (Sivitas_Akademik):
    # Membuat Private attributes.
    __nim = ""
    __fakultas = ""

    # Constructor with default initialization
    def __init__(self, nama="", nik="", Jenis_Kelamin="", asal_univ="", email="", nim="", fakultas=""):
        # memanggil konstruktor dari kelas induk (superclass)
        super().__init__(nik, nama, Jenis_Kelamin, asal_univ, email)
        self.__nim = nim
        self.__fakultas = fakultas

    # Setter and Getter methods for private attributes
    # Set Nim
    def setNim(self, nimMahasiswa):
        self.__nim = nimMahasiswa

    # Get Nim
    def getNim(self):
        return self.__nim

    # Set Fakultas
    def setFakultas(self, fakultas):
        self.__fakultas = fakultas

    # Get Fakultas
    def getFakultas(self):
        return self.__fakultas
