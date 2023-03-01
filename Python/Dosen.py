# Import file.
from Sivitas_Akademik import Sivitas_Akademik


# membuat kelas Dosen dengan pewarisan dari kelas Sivitas_Akademik
class Dosen (Sivitas_Akademik):
    # Membuat Private attributes.
    __nip = ""
    __fakultas = ""
    __pend_terakhir = ""

    # Constructor with default initialization
    def __init__(self, nama="", nik="", gender="", asal_univ="", email="", nip=0, fakultas="", pend_terakhir=""):
        # memanggil konstruktor dari kelas induk (superclass)
        super().__init__(nik, nama, gender, asal_univ, email)
        self.__nip = nip
        self.__fakultas = fakultas
        self.__pend_terakhir = pend_terakhir

    # Setter and Getter methods for private attributes
    # Set nip
    def setNip(self, nipDosen):
        self.__nip = nipDosen

    # Get nip
    def getNip(self):
        return self.__nip

    # Set Fakultas
    def setFakultas(self, fakultas):
        self.__fakultas = fakultas

    # Get Fakultas
    def getFakultas(self):
        return self.__fakultas

    # Set pend_terkhir
    def setPend_terakhir(self, pend_terakhir):
        self.__pend_terakhir = pend_terakhir

    # Get pend_terakhir
    def getPend_terakhir(self):
        return self.__pend_terakhir
