#include <Windows.h>
#include<iostream>
#include <string>

int main(int argc, char* argv[]) {
    std::string images[] = { "1.png","2.png","3.png","4.png","5.png","6.png","7.png","8.png","9.png","10.png","11.png","12.png","13.png","14.png","15.png","16.png","17.png""18.png","19.png","20.png","21.png","22.png","23.png",
    "24.png", "25.png", "26.png", "27.png", "28.png", "29.png", "30.png", "31.png", "32.png", "33.png", "34.png", "35.png", "36.png", "37.png", "38.png", "39.png", "40.png", "41.png", "42.png","43.png"};
    int numImages = 1000;

    std::string s1 = argv[0];
    s1 = s1.substr(0, s1.find_last_of("\\/"));
        while (true) {
        for (int i=1;i<40;i++) {
            if(i>5 && i<10) {continue;}

            std::string imagePath = s1 + "\\Wallpapers\\"+ images[i];

            try{
            SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, (void*)imagePath.c_str(), SPIF_UPDATEINIFILE | SPIF_SENDCHANGE);
            }
            catch(int x)
            {

            }
            if (i==26)
            {
                i=27;
            }
            if (i==33)
            {
                i=34;
            }
            if (i==15)
            {
                i=16;
            }
            
            Sleep(1500); // Wait for 1.5 seconds before switching to the next image

        }
    free(NULL);
    }
    return 0;
}
