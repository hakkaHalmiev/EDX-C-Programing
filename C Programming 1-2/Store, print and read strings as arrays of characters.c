#include <stdio.h>
int main(void) {
    //! showArray(word, cursors[i])
    char word[4]; //arrray of characters (string)
    printf("Please enter a word with 4 letters: ");
    scanf("%s", word); // string tanımlarken ve kullanıcıdan string bir harf alırken "&" işaretini kullanmayız.
    printf("The word read is: %s.\n", word);
    printf("The characters are: <%c> <%c> <%c> <%c>\n", word[0], word[1], word[2], word[3]);
    word[1] = 'a'; // 
    printf("The new word is %s\n", word);
    return 0;
}