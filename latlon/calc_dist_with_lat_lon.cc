
#include <math.h>

#include <iomanip>
#include <iostream>


long double toRadians(const long double _degree) {
    long double one_deg = (M_PI) / 180;
    return (one_deg * _degree);
}

long double distance(long double lat1, long double long1, long double lat2, long double long2) {
    // Convert the latitudes and longitudes from degree to radians.
    lat1 = toRadians(lat1);
    long1 = toRadians(long1);
    lat2 = toRadians(lat2);
    long2 = toRadians(long2);

    // Haversine Formula
    long double dlong = long2 - long1;
    long double dlat = lat2 - lat1;

    long double ans = pow(sin(dlat / 2), 2) + cos(lat1) * cos(lat2) * pow(sin(dlong / 2), 2);
    ans = 2 * asin(sqrt(ans));

    // Radius of Earth in meters, R = 6371 Kilometers
    long double R = 6371 * 1000;

    // Calculate the result
    ans = ans * R;

    return ans;
}

// Driver Code
int main(int argc, char *argv[]) {
    // long double lat1 = 53.32055555555556;
    // long double long1 = -1.7297222222222221;
    // long double lat2 = 53.31861111111111;
    // long double long2 = -1.6997222222222223;

    // long double lat1 = 22.58954839;
    // long double long1 = 113.95668220;
    // long double lat2 = 22.58954879;
    // long double long2 = 113.95704202;


    // long double lat1 = 2235.37294526;
    // long double long1 = 11357.40096126;
    // long double lat2 = 2235.37292719;
    // long double long2 = 11357.42251300;

    long double lat1 = 22.5897360473;
    long double long1 = 113.9567687273;
    long double lat2 = 22.5867198037;
    long double long2 = 113.9559546435;

    std::cout << std::setprecision(15) << std::fixed << distance(lat1, long1, lat2, long2) << " Meters" << std::endl;

    return 0;
}
