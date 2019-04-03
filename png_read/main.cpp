#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    std::ifstream jpgFile;
    jpgFile.open("test.png", std::ifstream::binary);
    if(!jpgFile.is_open())
    {
        std::cout << "Error open file" << std::endl;
        return -1;
    }

    std::vector<uint8_t> v{std::istreambuf_iterator<char>{jpgFile}, {}};
    std::cout << "Read complete, got " << v.size() << " bytes\n";
    for(std::vector<uint8_t>::iterator iter = v.begin(); iter != v.end(); ++iter)
    {
        std::cout << *iter;
    }
    std::cout << std::endl;


    return 0;
}