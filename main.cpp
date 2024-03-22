#include <fstream>
#include <iostream>
#include <string>

struct coordinate
{
    float longitude;
    float latitude;
    float altitude;
};

struct system
{
    struct coordinate current_coord;
    struct coordinate last_coord;
    struct coordinate planned_coord;
};

int main(int argc, char**  argv)
{
    struct coordinate coord_001;
    struct coordinate coord_002;
    struct coordinate coord_003;

    coord_001.latitude = 0.1;
    coord_001.longitude = 0.2;
    coord_001.altitude = 0.3;

    coord_001.latitude = 0.5;
    coord_001.longitude = 0.6;
    coord_001.altitude = 0.8;

    coord_001.latitude = 1;
    coord_001.longitude = 2;
    coord_001.altitude = 3;


    struct system thing;

    thing.current_coord = coord_001;
    thing.last_coord = coord_002;
    thing.planned_coord = coord_003;
    
    std::cout << "coord_001: " << coord_001.longitude << " " << coord_001.latitude << " " << coord_001.altitude << std::endl;
    std::cout << "system coordinates (latitude): " << thing.current_coord.latitude << std::endl;

    return 0;
}