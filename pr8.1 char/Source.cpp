#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int Count(char* str) {
    int count = 0;
    int len = strlen(str);

    if (len < 3) return 0;

    for (int i = 0; i <= len - 3; i++) {
        char temp[4];
        strncpy(temp, str + i, 3);
        temp[3] = '\0';

        if (strcmp(temp, "abc") == 0) {
            count++;
        }
    }
    return count;
}

void Change(char* str, char* result) {
    int len = strlen(str);
    result[0] = '\0';

    if (len < 3) {
        strcpy(result, str);
        return;
    }

    int j = 0;
    for (int i = 0; i < len; i++) {
        if (i <= len - 3) {
            char temp[4];
            strncpy(temp, str + i, 3);
            temp[3] = '\0';

            if (strcmp(temp, "abc") == 0) {
                strcat(result, "**");
                i += 2;
                j += 2;
                continue;
            }
        }
        result[j] = str[i];
        result[j + 1] = '\0';
        j++;
    }
}

int main() {
    char str[101];
    char result[151];

    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    cout << "String contained " << Count(str) << " groups of 'abc'" << endl;

    Change(str, result);
    strcpy(str, result);

    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << result << endl;

    return 0;
}