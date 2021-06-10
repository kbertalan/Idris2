#ifndef __IDRIS_BUFFER_H__
#define __IDRIS_BUFFER_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void* newBuffer(int bytes);
void freeBuffer(void* buf);

int getBufferSize(void* buffer);

void setBufferByte(void* buffer, int loc, int byte);
void setBufferInt(void* buffer, int loc, int64_t val);
void setBufferDouble(void* buffer, int loc, double val);
void setBufferString(void* buffer, int loc, char* str);

void copyBuffer(void* from, int start, int len,
                void* to, int loc);

uint8_t getBufferByte(void* buffer, int loc);
int64_t getBufferInt(void* buffer, int loc);
double getBufferDouble(void* buffer, int loc);
char* getBufferString(void* buffer, int loc, int len);

#endif
