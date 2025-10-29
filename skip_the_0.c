#include <stdio.h>

int main() {
    char phone[30];
    scanf("%s", phone);   // 输入电话号码，比如 0123456789

    int i = 0;
    // 跳过开头的所有 '0'
    while (phone[i] == '0') {
        i++;
    }

    // 如果全是0，输出一个0
    if (phone[i] == '\0') {
        printf("0\n");
    } else {
        printf("%s\n", phone + i); // 输出从第一个非0开始的部分
    }

    return 0;
}
