#include "functions.h"

int main()
{
	struct studentList*start = NULL;
	struct studentList*startAddedStudent = NULL;
	readStudentListFromTheFile(&start);
	getNewStudentFromKeybord(&startAddedStudent);
	printfStudentList(&start);
	printf("\n\n");
	addNewStudent(&start, &startAddedStudent);
	printfStudentList(&start);
	deleteStudent(&start);
	printf("\n\n");
	printfStudentList(&start);
	freeMemoryList(&start);
	
	return 0;
}







/*void addFirst(struct studentList**firstStudent, struct studentList**addedStudent)
{
	(*addedStudent)->next = *firstStudent;
	*firstStudent = *addedStudent;
}*/




