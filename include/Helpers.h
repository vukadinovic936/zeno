//helpers.h
#include <string>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <unordered_map>
#include <sstream>
#include <math.h>
#include <vector>
#include <cstdio>
#include <memory>
#include <stdexcept>
#include <array>
#include <sys/stat.h>
#include <filesystem>
#include <unistd.h>

using std::ifstream; using std::ostringstream;
#pragma once
namespace Helpers{
	std::string read_file(std::string file_path);
	std::string add_binary(std::string a,std::string b);
	std::string subtract_binary(std::string a, std::string b);
	std::string move_by(std::string a, int by);
	void append_to_file(std::string file_path, std::string content);
	void write_file(std::string file_path, std::string content);
	double get_entropy(std::unordered_map<char,int> freq);
	void clear_file(std::string file_path);
	bool test_algo(std::string algo_name);
	std::vector<std::string> split(std::string str, char delimiter);	
	std::string exec(const char* cmd);
	long get_file_size(std::string filename);
	double compression_rate(std::string compressed_file_path, std::string original_file_path);
	std::string cur_dir();
	std::string join_paths(std::string path1, std::string path2);
}