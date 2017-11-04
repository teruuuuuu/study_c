#include <time.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <memory.h>
#include <sys/time.h>

#include "util.h"


int main(int argc, const char * argv[]) {
    char datetime_buf[TIMEVAL_TO_STR_BUFFER_SIZE];
    static double pre_time = 0.0;
  
    struct timeval tv;
    gettimeofday(&tv, NULL);
    timeval_to_str(&tv, datetime_buf);
    printf("%s\n", datetime_buf);

    struct timeval tv2;
    tv2.tv_sec = 1507000000;
    tv2.tv_usec = 0;
    timeval_to_str(&tv2, datetime_buf);
    printf("%s\n", datetime_buf);

    if(strcmp(datetime_buf,"2017/10/03 12:06:40.000000")==0){
        printf("success");
    }else{
        printf("fail");
    }
    // print_time_diff();
    // print_time_diff();
    // print_time_diff();
}