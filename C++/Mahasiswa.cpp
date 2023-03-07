#include "header.hh"
// Default constructor
Mahasiswa::Mahasiswa() : Sivitas_Akademik()
{
    // initialize private variables
    nim = "";
    fakultas = "";
}

// Overloaded constructor with 5 parameters
Mahasiswa::Mahasiswa(string nama, string nik, string gender, string asal_universitas, string email_edu) : Sivitas_Akademik(nama, nik, gender, asal_universitas, email_edu)
{
}

// Overloaded constructor with 7 parameters
Mahasiswa::Mahasiswa(string nama, string nik, string gender, string asal_universitas, string email_edu, string nim, string fakultas) : Sivitas_Akademik(nama, nik, gender, asal_universitas, email_edu)
{
    // initialize private variables
    this->nim = nim;
    this->fakultas = fakultas;
}

// Getter method for nim
string Mahasiswa::getNim()
{
    return nim;
}

// Setter method for nim
void Mahasiswa::setNim(string nim)
{
    this->nim = nim;
}

// Getter method for fakultas
string Mahasiswa::getFakultas()
{
    return fakultas;
}

// Setter method for fakultas
void Mahasiswa::setFakultas(string fakultas)
{
    this->fakultas = fakultas;
}

// Destructor
Mahasiswa::~Mahasiswa() {}