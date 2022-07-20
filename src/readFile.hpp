#ifndef RY_READFILE_HPP
#define RY_READFILE_HPP

#include <filesystem>
#include <fstream>

namespace readFile  {
    std::string file_contents(const std::filesystem::path& path);
}
#endif