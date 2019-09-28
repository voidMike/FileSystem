#pragma once

inline int const MAX_FILE_SIZE 		= 65536;		// 64 KiB
inline int const FS_SIZE			= 20*1024*1024;	// 20 MiB
inline int const MIN_BLOCK_SIZE		= 5;
inline int const BLOCK_SIZE 		= 4*1024;		// 4  KiB
inline int const MAX_BLOCK_PER_FILE = MAX_FILE_SIZE/BLOCK_SIZE;
inline int const FS_BLOCK_COUNT 	= FS_SIZE/BLOCK_SIZE;
inline int const DIR_MAX_DEPTH		= 2; 	// root/dir/
inline const char* FS_DEFAULT_NAME 	= "fs01.bin";
inline const char* ILLEGAL_CHARS	= "/"; 	// Including NULL character.

static_assert(MAX_FILE_SIZE%BLOCK_SIZE==0,"BLOCK_SIZE must divide with no remainder MAX_FILE_SIZE");
