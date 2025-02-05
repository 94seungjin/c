#include <stdio.h>

struct Human {
	int age;
	int height;
	int weight;
};
int main()
{
	struct Human Psi;

	Psi.age = 99;
	Psi.height = 188;
	Psi.weight = 88;

	printf("Psi에 대한 정보 \n");
	printf("나이	: %d \n", Psi.age);
	printf("키		: %d \n", Psi.height);
	printf("몸무게	: %d \n", Psi.weight);

	return 0;
}
