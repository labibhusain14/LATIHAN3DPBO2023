#include "header.hh"

// Constructor
Program_Studi::Program_Studi()
{
    prodi = "";
    kode = "";
}

// Constructor with all attributes
Program_Studi::Program_Studi(string prodi, string kode)
{
    this->prodi = prodi;
    this->kode = kode;
}

// Setter and Getter methods for private attributes
// Setter method for prodi
void Program_Studi::setProdi(string prodi)
{
    this->prodi = prodi;
}

// Getter method for prodi
string Program_Studi::getProdi()
{
    return this->prodi;
}

// Setter method for kode
void Program_Studi::setKode(string kode)
{
    this->kode = kode;
}

// Getter method for kode
string Program_Studi::getKode()
{
    return this->kode;
}

// getter method for course_list
vector<Course> Program_Studi::get_course_list()
{
    return course_list;
}

//  method for add course
void Program_Studi::add_course(Course course)
{
    course_list.push_back(course);
}
// Destructor
Program_Studi::~Program_Studi()
{
}
