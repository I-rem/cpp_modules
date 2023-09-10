#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        std::string filename = argv[1];
        std::string s1 = argv[2];
        std::string s2 = argv[3];

        std::ifstrean ifs(filename);
        std::ofstream ofs("test.out");
        ofs.close();
        ifs.close();
    }
    return 0;
}
