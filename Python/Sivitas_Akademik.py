# Import File
from Human import Human

# Membuat kelas Sivitas_Akademik dengan pewarisan dari Human


class Sivitas_Akademik(Human):

    # asal_universitas Sivitas_Akademik
    __asal_universitas = ""
    # email_edu Sivitas_Akademik
    __email_edu = ""

    # Constructor with default initialization
    def __init__(self, nama="", nik="", Jenis_Kelamin="", asal_univ="", email=""):
        # memanggil konstruktor dari kelas induk(superclass)
        super().__init__(nik, nama, Jenis_Kelamin)
        self.__asal_universitas = asal_univ
        self.__email_edu = email

    # Setter and Getter methods for private attributes
    # set asal Universitas
    def setUniv(self, asal_Univ):
        self.__asal_universitas = asal_Univ

    # Get asal Universitas
    def getUniv(self):
        return self.__asal_universitas

    # Set email
    def setEmail(self, email):
        self.__email_edu = email

    # Get email
    def getEmail(self):
        return self.__email_edu
