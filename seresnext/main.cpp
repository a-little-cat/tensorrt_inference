#include "seresnext.h"

int main(int argc, char **argv)
{
    if (argc < 3)
    {
        std::cout << "Please design config file and image folder!" << std::endl;
        return -1;
    }
    std::string config_file = argv[1];
    std::string folder_name = argv[2];
    SEResNeXt SEResNeXt(config_file);
    SEResNeXt.LoadEngine();
    SEResNeXt.InferenceFolder(folder_name);
    return 0;
}