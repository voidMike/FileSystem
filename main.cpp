#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <map>
#include <vector>
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
const static std::map<std::string, Commands> mapCommandValues = {
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
};
int main(int argc, char* argv[])
{
	FileSystem test;
	std::string input{""};
	std::stringstream strstream;
	std::vector<std::string> tokens = { "" };
	while(tokens[0]!="end")
	{
		if(mapCommandValues.find(tokens[0])!=mapCommandValues.end()) // Prettier than trying to catch an exception with map.at()
		switch(mapCommandValues.at(tokens[0]))
		{
		case evMkdir: {
			break;
		}
		case evCreate: {
			break;
		}
		case evPut: {
			break;
		}
		case evGet: {
			break;
		}
		case evLs: {
			break;
		}
		case evCp: {
			break;
		}
		case evMv: {
			break;
		}
		case evRename: {
			break;
		}
		case evEcho: {
			break;
		}
		case evCat: {
			break;
		}
		case evRm: {
			break;
		}
		case evStat: {
			break;
		}
		}
		else
		{
			std::cout << tokens[0] << ": command not found\n";
		}
		do {
			input = "";
			tokens.clear();
			strstream.str("");
			strstream.clear();
			std::getline(std::cin, input);
			strstream << input;
			while (strstream >> std::quoted(input)) {
				std::cout << "Extracted token: " << input << "\n";
				tokens.push_back(input);
			}
		} while (!tokens.size());
	}
	return 0;
}