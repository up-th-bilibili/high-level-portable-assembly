// SPDX-License-Identifier: MPL-2.0
#include"hlpac_structure.h"
#include"hlpac_x86.c"
#define HLPA_VERSION "0.0.1" /* just for programmers */
#include"hlpac_mapping.c"
#include<stdio.h>
#include<string.h>
int main(int argc,char** argv){
    char *input,*output=nullptr,*config=nullptr;
    if(argc<2){
        fputs("Usage: hlpac <input-file> [options]*\n",stderr);
        return -1;
    }
    for(int i=2;i<argc;i++){
        if(!strcmp(argv[i],"-o")||!strcmp(argv[i],"--output")){
            i+=1;
            if(i>=argc){
                fputs("IndexError: argv index out of range; -o less the backed parts.",stderr);
                return -1;
            }
            output=argv[i];
        }
        else if(!strcmp(argv[i],"-c")||!strcmp(argv[i],"--config")){
            i+=1;
            if(i>=argc){
                fputs("IndexError: argv index out of range; -c less the backed parts.",stderr);
                return -1;
            }
            config=argv[i];
        }
    }
    input=argv[1];
    puts("HLPAC is in unusable state");
    return 0;
}
