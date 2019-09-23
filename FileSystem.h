#pragma once
class FileSystem{
	private:
	public:
	FileSystem();
	FileSystem(const char*);
	FileSystem(std::string); // Delegates to FileSystem(const char*);
	int 	mkdir(/*todo params*/);
	int 	create(/*todo params*/);
	int 	put(/*todo params*/);
	void	get(/*todo params*/);
	void 	ls(/*todo params*/);
	int 	cp(/*todo params*/);
	int 	mv(/*todo params*/);
	void 	rename(/*todo params*/);
	void 	echo(/*todo params*/);
	void 	cat(/*todo params*/);
	void 	rm(/*todo params*/);
	void 	stat(/*todo params*/);
};