#include <stdio.h>
#include "backtruc.h"

void check(char *regexp, char *text);
int main(void)
{

    check("ab", "ab");
    check("fga", "abcefgab");
    check("e*a", "abcefgab");
    check("kba", "abcefgab");
    check("k*a", "abcefgab");
    check("^b", "abcefgab");
    check("^ab.*b", "abcefgab");
    check("^ab.*bg", "abcefgab");
}

void check(char *regexp, char *text){
    int match_result = match(regexp, text);
    printf("%s match %s result: %d\n", regexp, text, match_result);   
}