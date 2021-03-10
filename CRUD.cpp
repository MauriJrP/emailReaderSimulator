#include <iostream>
#include "CRUD.h"

using namespace std;

CRUD::CRUD() {
    createFile();
}

CRUD::~CRUD() {

}

void CRUD::createFile() {
    fstream file;
	file.open("./prueba.txt", ios::in | ios::out | ios::binary);
    if (!file.is_open())
    {
        //Error al abrir el archivo;

        file.open("./prueba.txt", ios::out);

        if (!file.good())
        {
            //Error al crear el archivo;
        }
        else
        {
            file.close();
        }
    }
    file.close();
}

void CRUD::createMail(mailStruct mail, int id)
{
    fstream file;
    file.open("./prueba.txt", ios::in | ios::out | ios::binary);
    file.seekp((id - 1) *sizeof(struct mailStruct), ios::beg);
    file.write((char*) &mail, sizeof(struct mailStruct));
    file.close();
}

void CRUD::updateMail(mailStruct mail, int id)
{
    fstream file;
    file.open("./prueba.txt", ios::in | ios::out | ios::binary);
    file.seekp((id - 1) * sizeof(struct mailStruct), ios::beg);
    file.write((char*)&mail, sizeof(struct mailStruct));
    file.close();
}

mailStruct CRUD::getMail(int id) const {
    mailStruct myMail;
    fstream file;
	file.open("./prueba.txt", ios::in | ios::out | ios::binary);
    file.seekg((id - 1) * sizeof(struct mailStruct), ios::beg);
    file.read((char*)&myMail, sizeof(struct mailStruct));
    file.close();
    return myMail;
}