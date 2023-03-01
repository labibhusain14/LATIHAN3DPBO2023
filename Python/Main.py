# Saya Mohammad Labib Husain dengan NIM 2101989 mengerjakan Latihan 4
# dalam mata kuliah Desain Pemrograman Berbasis Objek untuk keberkahanNya
# maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# Import library and file.
from Mahasiswa import Mahasiswa
from Course import Course
from Program_Studi import Program_Studi
from Dosen import Dosen

# Buat objek Mahasiswa
mhs1 = Mahasiswa('Muhammad Rafi', '12345', 'Laki-laki', 'UPI',
                 'rafi@upi.edu', '3123', 'FMIPA')
mhs2 = Mahasiswa('Lionel Messi', '6789', 'Laki-laki', 'UPI',
                 'messi@upi.edu', '332', 'FMIPA')
mhs3 = Mahasiswa('Lesty Kejora', '321', 'Perempuan', 'UPI',
                 'lesty@upi.edu', '098', 'FMIPA')
mhs4 = Mahasiswa('Rizky Billar', '124', 'Laki-laki', 'UPI',
                 'rizky@upi.edu', '324', 'FMIPA')
mhs5 = Mahasiswa('Megawati', '9887', 'Perempuan', 'UPI',
                 'wati@pdip.edu', '189', 'FMIPA')
mhs6 = Mahasiswa('Susi Pudjiastuti', '0889', 'Perempuan', 'UPI',
                 'susi@upi.edu', '966', 'FMIPA')

# Buat objek Dosen
dosen1 = Dosen('Dr.Rudi', '789', 'Laki-laki',
               'UPI', 'rudi@upi.edu', '6677', 'FMIPA', 'S3')
dosen2 = Dosen('Prof.Ir.Budi', '229', 'Laki-laki',
               'UPI', 'budi@upi.edu', '6477', 'FMIPA', 'S2')
dosen3 = Dosen('Dr.Risma', '992', 'Perempuan',
               'UPI', 'risma@upi.edu', '6577', 'FMIPA', 'S3')
dosen4 = Dosen('Dr.Nur Ida', '229', 'Perempuan',
               'UPI', 'ida@upi.edu', '6377', 'FMIPA', 'S2')

# buat objek course
course1 = Course('Matematika Diskrit')
course2 = Course('Struktur Data')
course3 = Course('ALgoritma Pemrograman')

# tambahkan dosen dan mahasiswa ke dalam course
# course 1
course1.add_dosen(dosen1)
course1.add_dosen(dosen2)
course1.add_mahasiswa(mhs1)
course1.add_mahasiswa(mhs2)
course1.add_mahasiswa(mhs3)

# course 2
course2.add_dosen(dosen2)
course2.add_mahasiswa(mhs2)
course2.add_mahasiswa(mhs4)

# course 3
course3.add_dosen(dosen2)
course3.add_mahasiswa(mhs5)
course3.add_mahasiswa(mhs6)

# buat objek program studi
prodi = Program_Studi('Ilmu Komputer', 'ILKOM')

# tambahkan course ke dalam program studi
prodi.add_course(course1)
prodi.add_course(course2)
prodi.add_course(course3)

# tampilkan course apa saja yang ada di program studi Ilmu Komputer
print('\nMata Kuliah pada Program Studi', prodi.getProdi(), ':')
i = 1
for courses in prodi.get_course_list():
    print(f"{i}. {courses.getMatkul()}")
    i += 1

# tampilkan nama dosen yang mengajar di course1
print('\nDosen yang mengajar di', course1.getMatkul(), ':')
for dosen in course1.get_dosen_list():
    print('-', dosen.getNama(), dosen.getNip())

# tampilkan nama mahasiswa yang mengambil course1
print('\nMahasiswa yang mengambil', course1.getMatkul(), ':')
for mahasiswa in course1.get_mahasiswa_list():
    print('-', mahasiswa.getNama(), mahasiswa.getNim())

# tampilkan nama dosen yang mengajar di course2
print('\nDosen yang mengajar di', course2.getMatkul(), ':')
for dosen in course2.get_dosen_list():
    print('-', dosen.getNama(), dosen.getNip())

# tampilkan nama mahasiswa yang mengambil course2
print('\nMahasiswa yang mengambil', course2.getMatkul(), ':')
for mahasiswa in course2.get_mahasiswa_list():
    print('-', mahasiswa.getNama(), mahasiswa.getNim())

# tampilkan nama dosen yang mengajar di course3
print('\nDosen yang mengajar di', course3.getMatkul(), ':')
for dosen in course3.get_dosen_list():
    print('-', dosen.getNama(), dosen.getNip())

# tampilkan nama mahasiswa yang mengambil course3
print('\nMahasiswa yang mengambil', course3.getMatkul(), ':')
for mahasiswa in course3.get_mahasiswa_list():
    print('-', mahasiswa.getNama(), mahasiswa.getNim())
