# LATIHAN4DPBO2023

## *Janji*
*Saya Mohammad Labib Husain mengerjakan Latihan 4 dalam mata kuliah Desain Pemrograman Berbasis Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*
## *Soal*
Buatlah program berbasis OOP menggunakan bahasa pemrograman C++ dan Python  yang mengimplementasikan konsep inheritance, composition, dan array of object pada kelas-kelas tersebut:
* Mahasiswa: NIM, nama, jenis_kelamin, fakultas, prodi
* Human: NIK, nama, jenis_kelamin
* SivitasAkademik: asal_universitas, email_edu
* Dosen: NIP, nama, jenis_kelamin, fakultas, prodi, pend_terakhir, keahlian
* Course: nama_matakuliah, 
* Program Studi: nama_prodi, kode, course
## *Desain*

Teridiri dari 6 kelas :
 1. class Human
    
    Memiliki 3 atribut yaitu nama,nik dan gender.Atribut-atribut ini nantinya akan diwariskan kepada kelas-kelas turunannya.Terdapat setter dan getter untuk masing-masing atribut pada kelas Human ini.
 2. class Sivitas_Akademik
 
    Memiliki 2 atribut yaitu asal_universitas dan email_edu dan 3 atribut tambahan dari kelas Human.Kelas SIvitas_akademik ini merupakan turunan dari kelas Human .Asal_universitas ini adalah atribut data untuk menjelaskan darimana asal universitas suatu sivitas akademik.Email edu adalah atribut untuk email universitas,pada kali ini menggunakan email upi.Atribut-atribut ini nantinya akan diwariskan kepada kelas-kelas yang sekiranya masuk ke dalam turunan dari kelas sivitas_akademik ini.Terdapat setter dan getter untuk masing-masing atribut pada kelas ini.
    
 3. class Mahasiswa

    Memiliki 2 atribut yaitu nim dan fakultas serta 5 atribut tambahan karena kelas mahasiswa ini merupakan turunan dari kelas sivitas_akademik.Terdapat setter dan getter untuk masing-masing atribut pada kelas ini.
    
 4. class Dosen

    Memiliki 4 atribut yaitu nip, fakultas, pend_terakhir dan keahlian serta 5 atribut tambahan karena kelas mahasiswa ini merupakan turunan dari kelas sivitas_akademik.Terdapat setter dan getter untuk masing-masing atribut pada kelas ini.
 5. class Course

    Memiliki 3 atribut yaitu matkul,dosen_list dan mahasiswa_list.Untuk dosen_list dan mahasiswa_list merupakan array of object,yang mana dia adalah list yang dapat  menampung beberapa objek di dalamnya.Kelas ini ber-composite dengan kelas mahasiswa dan kelas dosen.Terdapat setter dan getter untuk masing-masing atribut pada kelas ini serta penambahan method add_dosen dan add_mahasiswa.
 6. class Program_Studi

    Memiliki 3 atribut yaitu matkul,kode dan course_list.Untuk course_list merupakan array of object,yang mana dia adalah list yang dapat menampung beberapa objek di dalamnya.Kelas ini ber-composite dengan kelas course.Terdapat setter dan getter untuk masing-masing atribut pada kelas ini serta penambahan method add_course.

Untuk UML nya bisa dilihat pada gambar berikut :
### UML
![Latihan4 drawio](https://user-images.githubusercontent.com/119772365/223476034-fc59f670-36d3-49ce-9458-b788e9d138f8.png)

#### Penjelasan UML:
Human merupakan orang tua dari sivitas_akademik dikarenakan semua atribut yang ada di dalam Human dapat diturunkan atau diwarisi ke kelas sivitas_akademik.Dan kelas Sivitas_akademik itu sendiri juga merupakan "manusia".Kelas Sivitas Akademik memiliki turunan berupa kelas dosen dan mahasiswa,kalau saya search di google sih sivitas_akademik itu adalah sekelompok orang yang terlibat dalam kegiatan akademik dan memiliki tradisi ilmiah dengan mengembangkan budaya akademik.Dari penjelasan tersebut saya mengambil kesimpulan kalau dosen dan mahasiswa masuk ke dalamnya,dan dapat menerima atribut2 yang ada di dalam kelas sivitas_akademik.Kemudian lanjut ke kelas Course yang ber-composite dengan kelas mahasiswa dan kelas dosen.Kalau menurut saya pribadi 1 mata kuliah atau course itu dapat dimiliki oleh beberapa dosen dan mahasiswa.Sepereti contohnya mata kuliah proyek konsultasi yang dibimbing oleh 2 dosen dan dikontrak oleh 40 lebih mahasiswa.Makanya atribut-atribut ini masuk ke dalam array of object.Selanjutnya yaitub pada kelas program_studi,Program_studi ber-composite dengan kelas course dikarenakan di dalam suatu prodi itu terdapat banyak course atau mata kuliah.
## *Alur*
Untuk bahasa C++,alurnya itu pertama-tama program akan mengeluarkan data seluruh dosen,kemudian lanjut menampilkan data data mahasiswa,dan setelahnya yaitu data untuk course.Lalu program akan meminta inputan berupa integer atau angka dari daftar mata kuliah yang ada.Nantinya mata kuliah yang telah dipilih akan ditampilkan datanya,seperti nama mata kuliah,dosen pengajar,jumlah siswa dan data-data mahasiswa yang mengontrak mata kuliah tersebut.
## *Dokumentasi*
Tampil data dosen :

![show_dosen](https://user-images.githubusercontent.com/119772365/223481240-938180ae-6833-4c11-855a-3a41a6676115.png)

Tampil data Mahasiswa :

![show_mahasiswa](https://user-images.githubusercontent.com/119772365/223481381-748abfb6-305a-448e-9b94-ba86fa473a50.png)

Tampil data Course serta Inputan yang dimasukkan user

![show_course](https://user-images.githubusercontent.com/119772365/223482103-0a1b4dc7-461c-4b7d-bd2a-18a63dfb208a.png)

Sekian untuk latihan dpbo 4 ini,Terima kasih.
