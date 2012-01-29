// ***********************************************************************
// stream_comm.h
// ***********************************************************************
//
// This describes functions and types exported by stream_comm.c
//
// This file is licensed as described by the file LICENCE.

#ifndef STREAM_COMM_H_INCLUDED
#define STREAM_COMM_H_INCLUDED

#include "common.h"

extern void init_stream_comm(void);
extern u8 process_packet(void);

#endif // #ifndef STREAM_COMM_H_INCLUDED
