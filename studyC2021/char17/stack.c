#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LEN 1000
#define TRUE 1
#define FALSE 0
typedef char Data;

typedef struct _stack {
	Data arr[MAX_LEN];
	int top;
} Stack;

void StackInit(Stack* sp) {
	sp->top = -1;

}

void push(Stack* sp, Data data) {
	if ((sp->top) + 1 >= MAX_LEN) return;
	sp->arr[++(sp->top)] = data;
}

Data pop(Stack* sp) {
	return sp->arr[(sp->top)--];
}

void printStack(Stack* sp) {
	printf("Stack: ");
	for (int i = 0; i < (sp->top) + 1; i++) {
		printf("%c", sp->arr[i]);
	}
	printf("\n");
}

int main()
{
	Stack stack;
	StackInit(&stack);

	push(&stack, 'a');
	push(&stack, 'b');
	push(&stack, 'c');

	printStack(&stack);

	printf("After pop() \n");
	pop(&stack);
	printStack(&stack);


	return 0;
}