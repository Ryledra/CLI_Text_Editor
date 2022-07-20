#include "readFile.hpp"

std::string readFile::file_contents(const std::filesystem::path& path)
{
    // Sanity check
    if (!std::filesystem::is_regular_file(path))
        return { };

    // Open the file
    // Note that we have to use binary mode as we want to return a string
    // representing matching the bytes of the file on the file system.
    std::ifstream file(path, std::ios::in | std::ios::binary);
    if (!file.is_open())
        return { };

    // Read contents
    std::string content{std::istreambuf_iterator<char>(file), std::istreambuf_iterator<char>()};

    // Close the file
    file.close();

    return content;
}