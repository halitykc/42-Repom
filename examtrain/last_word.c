#include <unists.h>
int main() {
    // Write C code here
    char s1[] = "this        ...       is sparta, then again, maybe    not";
 
    int i = 0;
    while (s1[i])
        i++;
    i--;
    while ( i>= 0 && (s1[i] == ' ' || s1[i] == '\t'))
        i--;
    while (i >= 0 && s1[i] != ' ' && s1[i] != '\t')
        i--;
    i++;
    while(s1[i] && s1[i] != ' ' && s1[i] !='\t')
        write(1,&s1[i++],1);

}
