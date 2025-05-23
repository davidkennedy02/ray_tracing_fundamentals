#include "colour.h"
#include "vec3.h"

#include <iostream>

int main() {

    // Defining the image width and height 

    int image_width = 256;
    int image_height = 256;

    // Rendering the image 

    std::cout << "P3\n" << image_width << " " << image_height << "\n255\n";

    for (int j = 0; j < image_height; j++) {

        std::clog << "\rScanlines remaining: " << (image_height - j) << " " << std::flush;

        for (int i = 0; i < image_width; i++) {
            auto pixel_colour = colour(double(i)/(image_width-1),
                                       double(j)/(image_height-1), 
                                       0
                                );
            write_colour(std::cout, pixel_colour);
        }
    }

    std::clog << "\rDone.                \n";
}