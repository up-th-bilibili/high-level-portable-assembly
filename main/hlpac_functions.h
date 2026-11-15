// SPDX-License-Identifier: MPL-2.0
#ifndef HLPAC_FUNCTIONS_H
#define HLPAC_FUNCTIONS_H 1
#include"hlpac_mapping.h"
[[nodiscard]] uint8_t* hlpac_read_file(const char* source_file,size_t* file_size);
#endif