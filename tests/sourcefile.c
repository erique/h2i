
typedef int(*FUNC)(int a, int b);   // function pointer

int some_function(int a, int b)
{
	return a * b;
}

FUNC func = some_function;

// an instanciated struct
struct ThatStruct
{
	FUNC func;
	int a;
	int b;
} thatStruct = { .func = some_function, .a = 10, .b = 20 };

extern int some_external_function(struct ThatStruct* oneStruct);

int main()
{
	return some_external_function(&thatStruct);
}
