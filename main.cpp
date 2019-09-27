#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <map>
#include "FileSystem.h"
enum Commands{
	evMkdir,
	evCreate,
	evPut,
	evGet,
	evLs,
	evCp,
	evMv,
	evRename,
	evEcho,
	evCat,
	evRm,
	evStat
};
const static std::map<std::string,Commands> mapCommandValues={
	{"mkdir",evMkdir},
	{"create",evCreate},
	{"put",evPut},
	{"get",evGet},
	{"ls",evLs},
	{"cp",evCp},
	{"mv",evMv},
	{"rename",evRename},
	{"echo",evEcho},
	{"cat",evCat},
	{"rm",evRm},
	{"stat",evStat}
}
int main(int argc, char* argv[])
{
	std::string input{""};
	std::stringstream strstream;
	std::string token{""};
	while(token!="end")
	{
		if(mapCommandValues.find(token)!=mapCommandValues.end())
		switch(mapCommandValues[token])
		{
			case evMkdir:
				break;
			case evCreate:
				break;
			case evPut:
				break;
			case evGet:
				break;
			case evLs:
				break;
			case evCp:
				break;
			case evMv:
				break;
			case evRename:
				break;
			case evEcho:
				break;
			case evCat:
				break;
			case evRm:
				break;
			case evStat:
				break;
		}
		else
		{
			//TODO: unrecognized command message.
		}
	}
	return 0;
}