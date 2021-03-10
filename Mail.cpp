#include "Mail.h"

using namespace std;

Mail::Mail() {

};

Mail::~Mail() {
}

std::string Mail::getDate()
{
	time_t timeNow;
	time(&timeNow);
	struct tm* myTime = localtime(&timeNow);
	int day = myTime->tm_mday;
	int month = myTime->tm_mon + 1;
	int year = myTime->tm_year + 1900;
	return to_string(day) + "/" + to_string(month) + "/" + to_string(year);
}

std::string Mail::getTime()
{
	time_t timeNow;
	time(&timeNow);
	struct tm* myTime = localtime(&timeNow);
	int hour = myTime->tm_hour;
	int min = myTime->tm_min;
	int sec = myTime->tm_sec;
	return to_string(hour) + ":" + to_string(min) + ":" + to_string(sec);
}

int Mail::getIdentifier()
{
	return identifier;
}
;

mailStruct Mail::getMailStruct()
{
	return mail;
}

void Mail::setMailStruct(int id, string remitent, string destinatary, string cc, string bcc, string subject, string content)
{
	identifier = id;
	strcpy(mail.id, to_string(id).c_str());
	strcpy(mail.date, getDate().c_str());
	strcpy(mail.time, getTime().c_str());
	strcpy(mail.remitent, remitent.c_str());
	strcpy(mail.destinatary, destinatary.c_str());
	strcpy(mail.cc, cc.c_str());
	strcpy(mail.bcc, bcc.c_str());
	strcpy(mail.subject, subject.c_str());
	strcpy(mail.content, content.c_str());
}
void Mail::setMailStruct(mailStruct myMail)
{
	mail = myMail;
}
;
