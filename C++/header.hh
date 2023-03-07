// Import library.
#include <iostream>
#include <string>
#include <bits/stdc++.h>
// Using standard namespace.
using namespace std;

/*
Composition class.
*/

// kelas Human
class Human
{

    // membuat atribut private
private:
    string nama;
    string nik;
    string gender;

public:
    // constructor
    Human();
    Human(string nama, string nik, string gender);

    // Getter and Setter
    void setNama(string nama);
    string getNama();
    void setNik(string nik);
    string getNik();
    void setGender(string gender);
    string getGender();

    // Destructor
    ~Human();
};

// kelas sivitas akademik turunan dari kelas human
class Sivitas_Akademik : public Human
{
    // membuat atribut private
private:
    string asal_universitas;
    string email_edu;

public:
    // constructor
    Sivitas_Akademik();
    Sivitas_Akademik(string nama, string nik, string gender);
    Sivitas_Akademik(string nama, string nik, string gender, string asal_universitas, string email_edu);

    // Getter and Setter
    void setUniv(string asal_universitas);
    string getUniv();
    void setEmail(string email_edu);
    string getEmail();

    // Destructor
    ~Sivitas_Akademik();
};

// kelas Dosen turunan dari kelas sivitas akademik
class Dosen : public Sivitas_Akademik
{
    // membuat atribut private
private:
    string nip;
    string fakultas;
    string pend_terakhir;
    string keahlian;

public:
    // constructor
    Dosen();
    Dosen(string nama, string nik, string gender, string asal_universitas, string email_edu);
    Dosen(string nama, string nik, string gender, string asal_universitas, string email_edu, string nip, string fakultas, string pend_terakhir, string keahlian);

    // Getter and Setter
    void setNip(string nip);
    string getNip();
    void setFakultas(string fakultas);
    string getFakultas();
    void setPend_terakhir(string pend_terakhir);
    string getPend_terakhir();
    void setKeahlian(string keahlian);
    string getKeahlian();

    // Destructor
    ~Dosen();
};

// kelas Mahasiswa turunan dari kelas sivitas akademik
class Mahasiswa : public Sivitas_Akademik
{
    // Membuat atribut privte
private:
    // nim Mahasiswa
    string nim;
    // jenis fakultas Mahasiswa
    string fakultas;

public:
    Mahasiswa(); // konstruktor Mahasiswa
    Mahasiswa(string nama, string nik, string gender, string asal_universitas, string email_edu);
    Mahasiswa(string nama, string nik, string gender, string asal_universitas, string email_edu, string nim, string fakultas);

    // Setter and Getter methods for private attributes
    string getNim();
    void setNim(string nim);
    string getFakultas();
    void setFakultas(string fakultas);

    // Destruktor
    ~Mahasiswa();
};

// membuat kelas course  yang ber-composite dengan kelas dosen dan mahasiswa.
class Course
{
    // Membuat atribut privte
private:
    string matkul;
    // membuat array of object untuk dosen dan mahasiswa
    vector<Dosen> dosen_list;
    vector<Mahasiswa> mahasiswa_list;

public:
    // Contructor.
    Course();
    Course(string matkul);

    // Getter and Setter .
    void setMatkul(string matkul);
    string getMatkul();
    vector<Dosen> get_dosen_list();
    vector<Mahasiswa> get_mahasiswa_list();
    void add_dosen(Dosen dosen);
    void add_mahasiswa(Mahasiswa Mahasiswa);

    // Destructor
    ~Course();
};

// Membuat kelas program studi  yang ber-composite dengan kelas course.
class Program_Studi
{
    // Membuat atribut privte
private:
    string prodi;
    string kode;
    // membuat array of object untuk course
    vector<Course> course_list;

public:
    // Contructor.
    Program_Studi();
    Program_Studi(string prodi, string kode);

    // Getter and Setter .
    void setProdi(string prodi);
    string getProdi();
    void setKode(string kode);
    string getKode();
    vector<Course> get_course_list();
    void add_course(Course course);

    // Destructor
    ~Program_Studi();
};