#ifndef backtruc_h
#define backtruc_h


int match(char *regexp, char *text);

int matchhere(char *regexp, char *text);
int matchstar(int c, char *regexp, char *text);

#endif 
