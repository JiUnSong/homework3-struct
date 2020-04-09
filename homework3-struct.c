/*
 ============================================================================
 Name        : homework3-struct.c
 Author      : Ji Un Song
 Version     :
 Copyright   :
 Description :
 ============================================================================
 */

#include <stdio.h>

struct student1{		//typedef�� ���� ����ü student1
	char lastName;
	int studentId;
	char grade;
};

typedef struct{			//typedef�� �� ����ü student2
	char lastName;
	int studentId;
	char grade;
}student2;

int main(void) {
	struct student1 st1 = {'A', 100, 'A'};	// main�Լ����� ����ü ����

	printf("st1.lastName = %c\n", st1.lastName);		// st1�� �� ���
	printf("st1.studentId = %d\n", st1.studentId);		// st1�� �� ���
	printf("st1.grade = %c\n", st1.grade);				// st1�� �� ���

	student2 st2 = {'B', 200, 'B'};		// student2  st2 �� �ʱ�ȭ

	printf("\nst2.lastName = %c\n", st2.lastName);		// st2�� �� ���
	printf("st2.studentId = %d\n", st2.studentId);		// st2�� �� ���
	printf("st2.grade = %c\n", st2.grade);				// st2�� �� ���

	student2 st3;		// student2 st3 ����
	st3 = st2;			// st3 �� st2�� �� ����

	printf("\nst3.lastName = %c\n", st3.lastName);		// st3�� �� ���
	printf("st3.studentId = %d\n", st3.studentId);		// st3�� �� ���
	printf("st3.grade = %c\n", st3.grade);				// st3�� �� ���
/*
	if(st3 == st2)			 // equal test
		printf("equal\n");
	else
		printf("not equal\n");
*/
	return 0;		// 0���� ��ȯ

}
