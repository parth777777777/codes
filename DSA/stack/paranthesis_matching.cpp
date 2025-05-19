#include <cstring>
#include <stdio.h>

struct Stack {
    int size;
    int top;
    char *S;
} st;

void create(struct Stack *st) {
    printf("Enter size of stack : ");
    scanf("%d", &st->size);
    st->top = -1;
    st->S = new char[st->size];
}

void display(struct Stack st) {
    printf("Stack contains : \n");
    for (int i = st.top; i > -1; i--)
        printf("%c ", *(st.S + i));
    printf("\n");
}

void push(struct Stack *st, char x) {
    if (st->top == st->size - 1) {
        printf("Stack overflow\n");
        return;
    }
    st->S[++st->top] = x;
}

char pop(struct Stack *st) {
    if (st->top == -1) {
        printf("Stack underflow\n");
        return -1;
    }
    return st->S[st->top--];
}

int isEmpty(struct Stack st) {
    if (st.top == -1)
        return 1;
    return 0;
}

int isFull(struct Stack st) {
    if (st.top == st.size - 1)
        return 1;
    return 0;
}

char peek(struct Stack st, int index) {
    if (st.top + index + 1 < 0) {
        printf("invalid index\n");
        return -1;
    }
    return st.S[st.top - index + 1];
}

char stackTop(struct Stack st) {
    if (!isEmpty(st))
        return st.S[st.top];
    return -1;
}

int isBalanced(const char *exp) {
    struct Stack st;
    st.size = strlen(exp);
    st.S = new char[st.size];
    st.top = -1;

    for (int i = 0; exp[i] != '\0'; i++) {
        if (exp[i] == '(')
            push(&st, exp[i]);
        else if (exp[i] == ')') {
            if (st.top == -1) {
                delete[] st.S;
                return 0;
            }
            pop(&st);
        }
    }
    int balanced = (st.top == -1);
    delete[] st.S; 
    return balanced;
}

int main() {
    const char *exp = "((a+b)*(b-a))";
    printf("%d\n", isBalanced(exp));
}

