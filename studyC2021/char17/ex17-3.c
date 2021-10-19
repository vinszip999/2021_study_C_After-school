#include <stdio.h>

struct profile
{
	int age;
	double height;
};

struct student
{
	struct profile pf;
	int id;
	double grade;

};

int main(void)
{
	struct student vins;

	vins.pf.age = 18;
	vins.pf.height = 160;
	vins.id = 2400;
	vins.grade = 4.5;

	printf("나이 : %d\n", vins.pf.age);
	printf("키 : %.1lf\n", vins.pf.height);
	printf("학번 : %d\n", vins.id);
	printf("학점 : %.1lf\n", vins.grade);

}