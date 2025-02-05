#include <stdio.h>
struct test
{
	int a;
	int b;
};

int main()
{
	struct test st;
	struct test* ptr;
	ptr = &st;
	ptr->a = 1;
	ptr->b = 2;
	printf("stÀÇ a¸â¹ö : %d \n", st.a);
	printf("stÀÇ b¸â¹ö : %d \n", st.b);

	return 0;
}