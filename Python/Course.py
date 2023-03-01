# Mmebuat kelas Course dengan hubungan composite ke kelas dosen dan mahasiswa
class Course:
    # Membuat beberapa atirbut private
    # matkul
    __matkul = ""

    # Constructor with default initialization
    def __init__(self, matkul=""):
        self.__matkul = matkul
        self.dosen_list = []
        self.mahasiswa_list = []

    # Setter and Getter methods for private attributes
    # set matkul
    def setMatkul(self, matkul):
        self.__matkul = matkul

    # Get matkul
    def getMatkul(self):
        return self.__matkul

    # Get dosen list
    def get_dosen_list(self):
        return self.dosen_list

    # method tambah dosen
    def add_dosen(self, dosen):
        self.dosen_list.append(dosen)

    # method hapus dosen
    def remove_dosen(self, dosen):
        self.dosen_list.remove(dosen)

    # Get list mahasiswa
    def get_mahasiswa_list(self):
        return self.mahasiswa_list

    # method tambah mahasiswa
    def add_mahasiswa(self, mahasiswa):
        self.mahasiswa_list.append(mahasiswa)

    # method hapus mahasiswa
    def remove_mahasiswa(self, mahasiswa):
        self.mahasiswa_list.remove(mahasiswa)
