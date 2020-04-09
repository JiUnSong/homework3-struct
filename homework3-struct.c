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

struct student1{		//typedef를 안한 구조체 student1
	char lastName;
	int studentId;
	char grade;
};

typedef struct{			//typedef를 한 구조체 student2
	char lastName;
	int studentId;
	char grade;
}student2;

int main(void) {
	struct student1 st1 = {'A', 100, 'A'};	// main함수에서 구조체 정의

	printf("st1.lastName = %c\n", st1.lastName);		// st1의 값 출력
	printf("st1.studentId = %d\n", st1.studentId);		// st1의 값 출력
	printf("st1.grade = %c\n", st1.grade);				// st1의 값 출력

	student2 st2 = {'B', 200, 'B'};		// student2  st2 값 초기화

	printf("\nst2.lastName = %c\n", st2.lastName);		// st2의 값 출력
	printf("st2.studentId = %d\n", st2.studentId);		// st2의 값 출력
	printf("st2.grade = %c\n", st2.grade);				// st2의 값 출력

	student2 st3;		// student2 st3 정의
	st3 = st2;			// st3 에 st2의 값 대입

	printf("\nst3.lastName = %c\n", st3.lastName);		// st3의 값 출력
	printf("st3.studentId = %d\n", st3.studentId);		// st3의 값 출력
	printf("st3.grade = %c\n", st3.grade);				// st3의 값 출력
/*
	if(st3 == st2)			 // equal test
		printf("equal\n");
	else
		printf("not equal\n");
*/
	return 0;		// 0값을 반환

}
