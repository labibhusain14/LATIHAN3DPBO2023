// Saya Mohammad Labib Husain dengan NIm 2101989 mengerjakan soal Latihan 4 dalam mata kuliah DPBO
// untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

#include <iostream>
#include <bits/stdc++.h>
#include "header.hh"

using namespace std;

int main()
{
    // Create object dosen
    Dosen d1("Dr.John", "112233", "Laki-laki", "UPI", "john@upi.edu", "123", "FPMIPA", "S3", "Pemrograman");
    Dosen d2("Prof.Dr.Jane", "445566", "Perempuan", "UPI", "jane@upi.edu", "456", "FPMIPA", "S3", "MultiMedia");
    Dosen d3("Dr.Ida", "889", "Perempuan", "UPI", "ida@upi.edu", "9900", "FPMIPA", "S3", "Software");
    Dosen d4("Prof.Dr.Budi", "675", "Laki-laki", "UPI", "budi@upi.edu", "09090", "FPMIPA", "S3", "Pemrograman");

    // Create a list to hold objects data dosen
    vector<Dosen> dataD;
    dataD.push_back(d1);
    dataD.push_back(d2);
    dataD.push_back(d3);
    dataD.push_back(d4);

    // Create object mahasiswa
    Mahasiswa m1("Michael", "778899", "Laki-laki", "UPI", "michael@upi.edu", "123456", "FPMIPA");
    Mahasiswa m2("Sarah", "332211", "Perempuan", "UPI", "sarah@upi.edu", "789012", "FPMIPA");
    Mahasiswa m3("Udin", "4432", "Laki-laki", "UPI", "udin@upi.edu", "6464", "FPMIPA");
    Mahasiswa m4("Rudi", "22334", "Laki-laki", "UPI", "Rudi@upi.edu", "2333", "FPMIPA");
    Mahasiswa m5("Risma", "1145", "Perempuan", "UPI", "Risma@upi.edu", "7557", "FPMIPA");
    Mahasiswa m6("Rini", "90988", "Perempuan", "UPI", "Rini@upi.edu", "3144", "FPMIPA");

    // Create a list to hold objects data mahasiswa
    vector<Mahasiswa> dataM;
    dataM.push_back(m1);
    dataM.push_back(m2);
    dataM.push_back(m3);
    dataM.push_back(m4);
    dataM.push_back(m5);
    dataM.push_back(m6);

    // Create object course
    Course c1("Algoritma Pemrograman");
    Course c2("Sistem Basis Data");
    Course c3("Sistem Kontrol");

    // Create a list to hold objects data course
    vector<Course> dataCourse;
    dataCourse.push_back(c1);
    dataCourse.push_back(c2);
    dataCourse.push_back(c3);

    // Inserting Mahasiswa objects into the list_mahasiswa in the course object
    c1.add_mahasiswa(m1);
    c1.add_mahasiswa(m2);
    c1.add_mahasiswa(m3);
    c1.add_mahasiswa(m4);
    c2.add_mahasiswa(m2);
    c2.add_mahasiswa(m3);
    c2.add_mahasiswa(m4);
    c2.add_mahasiswa(m5);
    c3.add_mahasiswa(m1);
    c3.add_mahasiswa(m2);
    c3.add_mahasiswa(m3);
    c3.add_mahasiswa(m4);
    c3.add_mahasiswa(m5);
    c3.add_mahasiswa(m6);

    // Inserting dosen objects into the list_dosen in the course object
    c1.add_dosen(d1);
    c1.add_dosen(d3);
    c2.add_dosen(d2);
    c3.add_dosen(d3);
    c3.add_dosen(d4);

    // Create object prodi
    Program_Studi p("Ilmu Komputer", "IK001");

    // Create a list to hold objects data prodi
    vector<Program_Studi> dataProdi;
    dataProdi.push_back(p);

    // Inserting course objects into the list_course in the prodi object
    p.add_course(c1);
    p.add_course(c2);
    p.add_course(c3);

    //  TITLE
    cout << "========================================================" << endl;
    cout << "                     UNIVERSITY" << endl;
    cout << "========================================================" << endl;
    cout << endl;

    // Show lecturer's data
    cout << "Data Dosen" << endl;
    cout << "============" << endl;

    // create as many loops as the lecturer's data
    for (int i = 0; i < dataD.size(); i++)
    {
        cout << "Dosen ke-" << i + 1 << endl;
        cout << "Nama : " << dataD[i].getNama() << endl;
        cout << "NIP : " << dataD[i].getNip() << endl;
        cout << "Gender : " << dataD[i].getGender() << endl;
        cout << "Fakultas : " << dataD[i].getFakultas() << endl;
        cout << "Pendidikan Terakhir : " << dataD[i].getPend_terakhir() << endl;
        cout << "Keahlian : " << dataD[i].getKeahlian() << endl;
        cout << "----------------------------------" << endl;
    }

    // Show student's data
    // create as many loops as the Mahasiswa data
    cout << "Data Mahasiswa" << endl;
    cout << "================" << endl;
    for (int i = 0; i < dataM.size(); i++)
    {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "NIM : " << dataM[i].getNim() << endl;
        cout << "Nama : " << dataM[i].getNama() << endl;
        cout << "Gender : " << dataM[i].getGender() << endl;
        cout << "Fakultas : " << dataM[i].getFakultas() << endl;
        cout << "----------------------------------" << endl;
    }

    // Show course's data with the lecturer
    // create as many loops as the study program's data
    vector<Dosen> dosenCourse;
    cout << "Program Studi " << p.getProdi() << " Kode Prodi :" << p.getKode() << endl;
    cout << "\nDaftar Mata Kuliah:" << endl;
    for (int i = 0; i < dataCourse.size(); i++)
    {
        cout << i + 1 << ". " << dataCourse[i].getMatkul() << " - Dosen: ";
        if (i == 0)
        {
            dosenCourse = c1.get_dosen_list();
        }
        else if (i == 1)
        {
            dosenCourse = c2.get_dosen_list();
        }
        else if (i == 2)
        {
            dosenCourse = c3.get_dosen_list();
        }
        for (int j = 0; j < dosenCourse.size(); j++)
        {
            cout << dosenCourse[j].getNama();
            if (j < dosenCourse.size() - 1)
                cout << ", ";
        }
        cout << endl;
    }

    // Tempat untuk memilih mata kuliah yang ingin ditampilkan datanya
    int pilih;
    cout << "\nPilih Mata Kuliah : ";
    cin >> pilih;
    vector<Mahasiswa> mahasiswaCourse;

    // jika pilih menu 1
    if (pilih == 1)
    {
        // inisialisasi nilai dosen dan mahasiswa course menjadi course ke-1
        dosenCourse = c1.get_dosen_list();
        mahasiswaCourse = c1.get_mahasiswa_list();
        // menampilkan mata kulaih
        cout << "\nMata Kuliah : " << dataCourse[0].getMatkul() << endl;
        // menampilkan dosen pengajar pada mata kuliah tersebtu
        cout << "Dosen Pengajar : ";
        for (int i = 0; i < dosenCourse.size(); i++)
        {
            cout << dosenCourse[i].getNama();
            if (i < dosenCourse.size() - 1)
                cout << ", ";
        }
        // menampilkan jumlah siswa yang mengikuti mata kuliah tersebut
        cout << "\nJumlah Siswa : " << mahasiswaCourse.size() << endl;
        // menampilkan daftar2 mahasiswa yang mengikuti mata kuliah tersebut
        cout << "Daftar Mahasiswa :" << endl;
        for (int i = 0; i < mahasiswaCourse.size(); i++)
        {
            cout << i + 1 << ". " << mahasiswaCourse[i].getNama() << " ("
                 << "NIM: " << mahasiswaCourse[i].getNim() << " Fakultas: " << mahasiswaCourse[i].getFakultas() << ")" << endl;
        }
    }
    // jika pilih menu 2
    else if (pilih == 2)
    {
        // inisialisasi nilai dosen dan mahasiswa course menjadi course ke-2
        dosenCourse = c2.get_dosen_list();
        mahasiswaCourse = c2.get_mahasiswa_list();
        // menampilkan mata kulaih
        cout << "\nMata Kuliah : " << dataCourse[1].getMatkul() << endl;
        // menampilkan dosen pengajar pada mata kuliah tersebtu
        cout << "Dosen Pengajar : ";
        for (int i = 0; i < dosenCourse.size(); i++)
        {
            cout << dosenCourse[i].getNama();
            if (i < dosenCourse.size() - 1)
                cout << ", ";
        }
        // menampilkan jumlah siswa yang mengikuti mata kuliah tersebut
        cout << "\nJumlah Siswa : " << mahasiswaCourse.size() << endl;
        // menampilkan daftar2 mahasiswa yang mengikuti mata kuliah tersebut
        cout << "Daftar Mahasiswa :" << endl;
        for (int i = 0; i < mahasiswaCourse.size(); i++)
        {
            cout << i + 1 << ". " << mahasiswaCourse[i].getNama() << " ("
                 << "NIM: " << mahasiswaCourse[i].getNim() << " Fakultas: " << mahasiswaCourse[i].getFakultas() << ")" << endl;
        }
    }
    // jika pilih menu 3
    else if (pilih == 3)
    {
        // inisialisasi nilai dosen dan mahasiswa course menjadi course ke-3
        dosenCourse = c3.get_dosen_list();
        mahasiswaCourse = c3.get_mahasiswa_list();
        // menampilkan mata kulaih
        cout << "\nMata Kuliah : " << dataCourse[2].getMatkul() << endl;
        // menampilkan dosen pengajar pada mata kuliah tersebtu
        cout << "Dosen Pengajar : ";
        for (int i = 0; i < dosenCourse.size(); i++)
        {
            cout << dosenCourse[i].getNama();
            if (i < dosenCourse.size() - 1)
                cout << ", ";
        }
        // menampilkan jumlah siswa yang mengikuti mata kuliah tersebut
        cout << "\nJumlah Siswa : " << mahasiswaCourse.size() << endl;
        // menampilkan daftar2 mahasiswa yang mengikuti mata kuliah tersebut
        cout << "\nDaftar Mahasiswa :" << endl;
        for (int i = 0; i < mahasiswaCourse.size(); i++)
        {
            cout << i + 1 << ". " << mahasiswaCourse[i].getNama() << " ("
                 << "NIM: " << mahasiswaCourse[i].getNim() << " Fakultas: " << mahasiswaCourse[i].getFakultas() << ")" << endl;
        }
    }
    return 0;
}