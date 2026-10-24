// SPDX-License-Identifier: MPL-2.0
#ifndef HLPAC_MAPPING_H
#define HLPAC_MAPPING_H 1
#include"hlpac_structure.h"
typedef struct{
    uint64_t key;
    union{
        void* datas;
        intptr_t digit;
    };
}HLPAMappingElement;
typedef struct{
    size_t max_count;
    size_t curr_count;
    uint8_t* flags;
    HLPAMappingElement* datas;
}HLPAMapping;
HLPAMapping* hlpac_mapping_create();
HLPAMapping* hlpac_mapping_new();
void hlpac_mapping_init(HLPAMapping* self);
void hlpac_mapping_set(HLPAMapping* self,uint64_t hash,void* value);
void* hlpac_mapping_get(HLPAMapping* self,uint64_t hash);
typedef struct{
    void* bin;
    HLPAMapping relocate_table_all_section;
    HLPAMapping symbol_table_all_section;
    HLPAMapping symbol_table_disp;
}HLPABuildTable;
#endif