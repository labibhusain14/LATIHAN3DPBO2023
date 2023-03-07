#include "header.hh"

// Constructor
Sivitas_Akademik::Sivitas_Akademik() : Human()
{
    asal_universitas = "";
    email_edu = "";
}

// Constructor with base sivitas akademik attribute.
Sivitas_Akademik::Sivitas_Akademik(string nama, string nik, string gender) : Human(nama, nik, gender)
{
}

// Constructor with all attributes
Sivitas_Akademik::Sivitas_Akademik(string nama, string nik, string gender, string asal_universitas, string email_edu) : Human(nama, nik, gender)
{
    this->asal_universitas = asal_universitas;
    this->email_edu = email_edu;
}

// Getter and Setter
// Setter method for asal universitas
void Sivitas_Akademik::setUniv(string asal_universitas)
{
    this->asal_universitas = asal_universitas;
}

// Getter method for asal universitas
string Sivitas_Akademik::getUniv()
{
    return asal_universitas;
}

// Setter method for email
void Sivitas_Akademik::setEmail(string email_edu)
{
    this->email_edu = email_edu;
}

// Getter method for email
string Sivitas_Akademik::getEmail()
{
    return email_edu;
}

// Destructor
Sivitas_Akademik::~Sivitas_Akademik() {}
