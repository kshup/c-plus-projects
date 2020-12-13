#include <stdio.h>
int kelimeSayisiBul(char *);
int kelimeSayisiBul(char *chpt) {
    int i=0;
    int kelimeSayisi=0;
    while (chpt[i]!='\0') {
        if(chpt[i]==' ')
        kelimeSayisi++;
        i++;
    }
    return kelimeSayisi+1;
}
int main() {
    char chpt[100];
    int kelimeSayisi=0;
    puts("bir cumle giriniz:");
    gets(chpt);
     kelimeSayisi=kelimeSayisiBul(chpt);
    printf("girdiginiz cumle %d kelimeden olusuyor.", kelimeSayisi);
    return 0;
}
