#pragma once
#include <string>
class FileSystem{
	private:
	public:
	FileSystem();
	FileSystem(std::string fs);
	
	int 	mkdir(std::string&& pathname);
	int 	create(std::string&& pathname);
	int 	put(std::string&& src, std::string&& dest);
	void	get(std::string&& src, std::string&& dest);
	void 	ls(std::string&& pathname);
	int 	cp(std::string&& src, std::string&& dest);
	int 	mv(std::string&& src, std::string&& dest);
	void 	rename(std::string && pathname, std::string&& newname);
	void 	echo(std::string&& text, std::string&& dest);
	void 	cat(std::string&& pathname);
	void 	rm(/*todo params*/);
	void 	stat(std::string&& pathname);
};