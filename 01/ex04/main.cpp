#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        std::string s1 = argv[2];
        std::string s2 = argv[3];

        std::ifstream ifs(argv[1]);
        if (!ifs.is_open())
            return 1;
        std::ofstream ofs("test.out");
        if (!ofs.is_open())
            return 1;

        std::string str;
        std::size_t found;
        while (std::getline(ifs, str))
        {
            found = str.find(s1);
            if (found == std::string::npos)
                ofs << str << std::endl;
            else
            {
                ofs << str.substr(0, found) << s2 << str.substr(found + s2.length(), std::string::npos) << std::endl;
            }
        }


        ifs.close();
        ofs.close();
    }
    else
        return 1;
}
