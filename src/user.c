#include <string.h>
#include "user.h"

int login(const char* username, const char* password) {
    const char* correct_username = "admin";
    const char* correct_password = "1234";

    if (strcmp(username, correct_username) == 0 && strcmp(password, correct_password) == 0) {
        return 1;
    }
    return 0;
}
