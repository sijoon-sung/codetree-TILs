#include <stdio.h>
#include <string.h>

#define STACK_SIZE 10000

int main() {
    int stack[STACK_SIZE];
    int size = 0;
    int n;
    char command[10];
    int value;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", command);

        if (strcmp(command, "push") == 0) {
            scanf("%d", &value);
            stack[size++] = value;
        } else if (strcmp(command, "pop") == 0) {
            if (size == 0) {
                printf("-1\n");
            } else {
                printf("%d\n", stack[--size]);
            }
        } else if (strcmp(command, "size") == 0) {
            printf("%d\n", size);
        } else if (strcmp(command, "empty") == 0) {
            printf("%d\n", size == 0 ? 1 : 0);
        } else if (strcmp(command, "top") == 0) {
            if (size == 0) {
                printf("-1\n");
            } else {
                printf("%d\n", stack[size - 1]);
            }
        }
    }

    return 0;
}
