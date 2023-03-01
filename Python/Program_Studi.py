# Mmebuat kelas Program Studi dengan hubungan composite ke kelas Course
class Program_Studi:
    # Membuat beberapa atirbut private
    # prodi Course
    __prodi = ""
    __kode = ""

    # Constructor with default initialization
    def __init__(self, prodi="", kode=""):
        self.__prodi = prodi
        self.__kode = kode
        self.course_list = []

    # Setter and Getter methods for private attributes
    # set prodi
    def setProdi(self, prodi):
        self.__prodi = prodi

    # Get prodi
    def getProdi(self):
        return self.__prodi

    # set kode
    def setKode(self, kode):
        self.__kode = kode

    # Get kode
    def getKode(self):
        return self.__kode

    # Get list course
    def get_course_list(self):
        return self.course_list

    # method tambah course
    def add_course(self, course):
        self.course_list.append(course)

    # method hapus course
    def remove_course(self, course):
        self.course_list.remove(course)
