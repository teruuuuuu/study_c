#include <stdio.h>
#include<string.h> 
#include "hello.h"

int main(int argc, const char * argv[]) {
    if(strcmp(hello(),"hello world")==0){
        printf("success");
    }else{
        printf("fail");
    }
    return 0;
}