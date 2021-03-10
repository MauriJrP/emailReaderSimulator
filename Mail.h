#pragma once
#include <iostream>
#include <string>
#include <ctime>
//using namespace std;


struct  mailStruct {
	char id[10] = { ' ' };
	char date[11] = { ' ' };
	char time[10] = { ' ' };
	char remitent[50] = { ' ' };
	char destinatary[50] = { ' ' };
	char cc[500] = { ' ' };
	char bcc[500] = { ' ' };
	char subject[100] = { ' ' };
	char content[5000] = { ' ' };
};

class Mail
{

private:
	int identifier;
	mailStruct mail;

public: 
	Mail();
	~Mail();

	std::string getDate();
	std::string getTime();
	int getIdentifier();

	mailStruct getMailStruct();
	void setMailStruct(int, std::string, std::string, std::string, std::string, std::string, std::string);
	void setMailStruct(mailStruct);
};



