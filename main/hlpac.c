// SPDX-License-Identifier: MPL-2.0
#include"hlpac_structure.h"
#include"hlpac_x86.c"
#define HLPA_VERSION "0.0.1" /* just for programmers */
#include"hlpac_mapping.c"
#include"hlpac_hlpa_parser.c"
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
                fputs("IndexError: argv index out of range; -c less the backed parts.\n",stderr);
                return -1;
            }
            config=argv[i];
        }
        else if(argv[i][0]=='-'){
            fputs("ValueError: unsupport option.\n",stderr);
            return -1;
        }
        else{
            fputs("ValueError: unsupport multi files.\n",stderr);
            return -1;
        }
    }
    input=argv[1];
    size_t string_size;
    uint8_t *hlpa_binary_structure;
    if((string_size=strlen(input))<6||*(input+string_size-6)=='/'||*(input+string_size-6)=='\\'){
        fputs("Exception: unsupport input file.\n",stderr);
        return -1;
    }
    if(!strcmp(input+string_size-5,".hlpa")){
        ; // TODO: 读取hlpa并解析后处理为同bhpa的内存结构
    }else if(!strcmp(input+string_size-5,".bhpa")){
        ; // TODO: 读取bhpa并处理为内存结构
    }else{
        fputs("Exception: unsupport input file.\n",stderr);
        return -1;
    }
    puts("HLPAC is in unusable state");
    return 0;
}