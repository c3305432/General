#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


int main() {

    float image[5][5][3];
    float mean;
    int x, y;
    // Don’t change this srand() line!
    srand(0);
    for(y = 0; y < 2; y++) {
        for(x = 0; x < 5; x++) {
            image[x][y][0] = (float)rand()/(float)INT_MAX;
            image[x][y][1] = (float)rand()/(float)INT_MAX;
            image[x][y][2] = (float)rand()/(float)INT_MAX;
            
            mean = ((image[x][y][0]) + (image[x][y][1])+(image[x][y][2]))/3.0;
            
            image[x][y][0] = mean;
            image[x][y][1] = mean;
            image[x][y][2] = mean;
            printf("%d %d: %f %f %f\n", x, y, image[x][y][0], image[x][y][1], image[x][y][2]);
        }
    }
    return 0;
}
