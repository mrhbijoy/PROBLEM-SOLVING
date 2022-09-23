for (int i = strlen(str) - 1; i >= 0; i--) {
    if (i % 3 == 0 && i != 0) {
        printf(",");
    }
    printf("%c", str[i]);

}