#pragma once
#include <iostream>
#include <fstream>
#include "Mail.h"

class CRUD
{
private:

public:
	CRUD();
	~CRUD();

	//fstream file;

	void createFile();
	void createMail(mailStruct, int);
	void updateMail(mailStruct, int);
	mailStruct getMail(int) const;
	

private:
};