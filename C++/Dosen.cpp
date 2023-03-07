#include "header.hh"

// Constructor
Dosen::Dosen() : Sivitas_Akademik()
{
    nip = "";
    fakultas = "";
    pend_terakhir = "";
    keahlian = "";
}

// Constructor with base sivitas akademik attribute.
Dosen::Dosen(string nama, string nik, string gender, string asal_universitas, string email_edu) : Sivitas_Akademik(nama, nik, gender, asal_universitas, email_edu)
{
}

// Constructor with all attributes
Dosen::Dosen(string nama, string nik, string gender, string asal_universitas, string email_edu, string nip, string fakultas, string pend_terakhir, string keahlian) : Sivitas_Akademik(nama, nik, gender, asal_universitas, email_edu), nip(nip)
{
    this->nip = nip;
    this->fakultas = fakultas;
    this->pend_terakhir = pend_terakhir;
    this->keahlian = keahlian;
}

// Getter and Setter
// Setter method for nip
void Dosen::setNip(string nip)
{
    this->nip = nip;
}

// getter method for nip
string Dosen::getNip()
{
    return nip;
}

// Setter method for fakultas
void Dosen::setFakultas(string fakultas)
{
    this->fakultas = fakultas;
}

// getter method for fakultas
string Dosen::getFakultas()
{
    return fakultas;
}

// Setter method for pendidikan terakhir
void Dosen::setPend_terakhir(string pend_terakhir)
{
    this->pend_terakhir = pend_terakhir;
}

// Getter method for pendidikan terakhir
string Dosen::getPend_terakhir()
{
    return pend_terakhir;
}

// Setter method for keahlian
void Dosen::setKeahlian(string keahlian)
{
    this->keahlian = keahlian;
}

// getter method for keahlian
string Dosen::getKeahlian()
{
    return keahlian;
}

// Destructor
Dosen::~Dosen() {}
