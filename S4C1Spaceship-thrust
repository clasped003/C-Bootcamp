    /*1st challenge of Section 4 of The Complete C Programming Bootcamp course */

#include <stdio.h>

typedef enum
{
    THRUST_OFF = 0,
    THRUST_LOW = 5,
    THRUST_MEDIUM = 9,
    THRUST_HIGH = 12,
    THRUST_MAX = 20
} SpaceshipThrust;
int main(){
    SpaceshipThrust thrust;
    
    puts("Spaceship thrust logger.");
    sleep(2);
    puts("Logging spaceship thrust.");
    sleep(1);
    thrust = THRUST_OFF;
    printf("-->Set Thrust initial state: %d\n", thrust);
    sleep(2);
    thrust = THRUST_MAX;
    printf("-->Set Thrust for Take-off: %d\n", thrust);
    sleep(1);
    thrust = THRUST_MEDIUM;
    printf("-->Set Thrust for Ionosphere: %d\n", thrust);
    sleep(2);
    thrust = THRUST_LOW;
    printf("-->Set thrust for Deep Space: %d\n", thrust);
    sleep(1);
    printf("**Confirmed successful launch**");
    return 0;
}
