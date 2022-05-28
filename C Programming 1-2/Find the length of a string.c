#include <stdio.h>
int main(void) {
    //! showArray(word, cursors=[i])
    char word[30];
    int i = 0;
    printf("Please enter a word: ");
    scanf("%s", word);
    while (word[i]!='\0') // Eğer harf \0 karakteri ise döngüden çıkılacaktır.\0 karakteri word dizisinde kelimenin bittiğini gösteren operatördür.
        i++;
    printf("%s has word length %d.\n", word, i);//Böylece kullanıcının girdiği kelimenin kaç harften oluştuğunu buluruz.
    return 0;
}