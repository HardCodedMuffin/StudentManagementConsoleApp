#ifndef Student_H
#define Student_H


using namespace std;

struct Student
{
	char first_name[50], last_name[50], course[100], id[20];
	int section;

	int start_stream();
	void add_record();
	void list_records();
	void search_record();
	void modify_record();
	void delete_record();
	void close_stream();
};
#endif // !Student_H

