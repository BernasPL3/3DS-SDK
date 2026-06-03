#include <stdio.h>

typedef struct {
    float x;
    float y;
    float vx;
    float vy;
    int onGround;
} Player;

Player player = {50, 100, 0, 0, 0};

void update() {
    player.vy += 0.3f;

    player.x += player.vx;
    player.y += player.vy;

    if (player.y > 100) {
        player.y = 100;
        player.vy = 0;
        player.onGround = 1;
    }
}

int main() {
    while (1) {
        update();
    }

    return 0;
}
