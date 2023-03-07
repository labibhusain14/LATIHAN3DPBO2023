#include "header.hh"

// Constructor
Human::Human()
{
    nama = "";
    nik = "";
    gender = "";
}

// Constructor with all atributes.
Human::Human(string nama, string nik, string gender)
{
    this->nama = nama;
    this->nik = nik;
    this->gender = gender;
}

// Getter and Setter
// set nama
void Human::setNama(string nama)
{
    this->nama = nama;
}

// get nama
string Human::getNama()
{
    return nama;
}

// set nik
void Human::setNik(string nik)
{
    this->nik = nik;
}

// get nik
string Human::getNik()
{
    return nik;
}

// set gender
void Human::setGender(string gender)
{
    this->gender = gender;
}

// get gender
string Human::getGender()
{
    return gender;
}

// Destructor
Human::~Human()
{
}
