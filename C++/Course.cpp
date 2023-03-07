#include "header.hh"
// Default constructor
Course::Course()
{
    matkul = "";
}

// Constructor with all atributes.
Course::Course(string matkul)
{
    this->matkul = matkul;
}

// Getter and Setter
// Setter method for matkul
void Course::setMatkul(string matkul)
{
    this->matkul = matkul;
}

// Getter method for matkul
string Course::getMatkul()
{
    return matkul;
}
// Getter method for dosen_list
vector<Dosen> Course::get_dosen_list()
{
    return dosen_list;
}

// Getter method for mahasiswa_list
vector<Mahasiswa> Course::get_mahasiswa_list()
{
    return mahasiswa_list;
}

// Getter method for add dosen
void Course::add_dosen(Dosen dosen)
{
    dosen_list.push_back(dosen);
}

// Getter method for add mahasiswa
void Course::add_mahasiswa(Mahasiswa Mahasiswa)
{
    mahasiswa_list.push_back(Mahasiswa);
}

// Destructor
Course::~Course()
{
}