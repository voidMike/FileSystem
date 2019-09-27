#include "FileSystem.h"
#include "FileSystemConstants.h"
#include <string>

FileSystem::FileSystem()
{
	FileSystem(FS_DEFAULT_NAME);
}
FileSystem::FileSystem(const char* fs)
{	
	
}
FileSystem::FileSystem(std::string fs):FileSystem::FileSystem(fs.c_str()){};