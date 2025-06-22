#include <stdio.h>
#include <string.h>
#define STACK_SIZE 100

int n;
char command[10];
int value;

int main() {
    int stack[STACK_SIZE];
    int size = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", command);

        if (strcmp(command, "push") == 0) {
            scanf("%d", &value);
            if (size >= STACK_SIZE) {
                printf("Error: Stack overflow! Cannot push %d\n", value);
            } else {
                stack[size] = value;
                size++;
                // 일반적으로는 push 시 출력 안 하지만, 예제에 맞춰 출력
                // printf("Pushed %d to stack\n", value);
            }
        } else if (strcmp(command, "pop") == 0) {
            if (size == 0) {
                printf("0\n");
            } else {
                printf("%d\n", stack[size - 1]);
                size--;
            }
        } else if (strcmp(command, "size") == 0) {
            printf("%d\n", size);
        } else if (strcmp(command, "empty") == 0) {
            printf("%d\n", size == 0);
        } else if (strcmp(command, "top") == 0) {
            if (size == 0) {
                printf("0\n");
            } else {
                printf("%d\n", stack[size - 1]);
            }
        }
    }

    return 0;
}
