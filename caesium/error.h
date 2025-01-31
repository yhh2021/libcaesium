#ifndef LIBCAESIUM_ERROR_H
#define LIBCAESIUM_ERROR_H

#include "caesium.h"

extern int error_code;

void libcaesium_display_error(error_level level, int code);

const char *get_error_message(int code);

#endif