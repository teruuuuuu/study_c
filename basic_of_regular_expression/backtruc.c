#include <stdio.h>
#include "backtruc.h"

int match(char *regexp, char *text)
{
    // printf("match regexp: %s,  text: %s\n", regexp, text);
    if( regexp[0] == '^' ){
        return matchhere(regexp+1, text);
    }
    do {
        if(matchhere(regexp, text)){
            return 1;
        }
    }while (*text++ != '\0');
    return 0;
}

int matchhere(char *regexp, char *text)
{
    // printf("matchhere regexp: %s,  text: %s\n", regexp, text);
    if(regexp[0] == '\0'){
        return 1;
    }
    if (regexp[1] == '*'){
        return matchstar(regexp[0], regexp+2, text);
    }
    if (*text != '\0' && (regexp[0] == '.' || regexp[0] == *text)){
        return matchhere(regexp+1, text+1);
    }
    return 0;
}

int matchstar(int c, char *regexp, char *text) 
{
    // printf("matchstar c:%c, regexp: %s,  text: %s\n", c, regexp, text);
    do {
        if (matchhere(regexp, text)){
            return 1;
        }
    } while(*text != '\0' && ( *text++ == c || c == '.'));
    return 0;    
}