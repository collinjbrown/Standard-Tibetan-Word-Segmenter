#ifndef FILEHANDLING_H
#define FILEHANDLING_H

#include <iostream>
#include <fstream>
#include <sstream>

std::wstring WReadFile(std::string path);
std::string ReadFile(std::string path);

void WriteFile(std::string path, std::wstring data);

#endif