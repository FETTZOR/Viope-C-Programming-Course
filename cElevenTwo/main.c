#include <stdio.h>
int main() {
    FILE *fp;
    char read_name[100];
    char last_name_read[100];
    char phone_read[100];
    int new;
    int i;


    fp = fopen("phonedir.txt", "r");
    fscanf(fp, "%d", &new);
    for(i = 0; i < new; i++) {
        fscanf(fp, "%s", read_name);
        fscanf(fp, "%s", last_name_read);
        fscanf(fp, "%s", phone_read);
        printf("%s %s %s\n", read_name, last_name_read, phone_read);
    }
    fclose(fp);

    return 0;
}