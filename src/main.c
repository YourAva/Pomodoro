#include <stdio.h>
#include <unistd.h>

int main(){
    printf("\033[0;31m _____                 _             \n|  _  |___ _____ ___ _| |___ ___ ___ \n|   __| . |     | . | . | . |  _| . |\n|__|  |___|_|_|_|___|___|___|_| |___|\033[0m\n\n");
    while(1){
        Pomodoro();
    }
    return 0;
}

int Pomodoro(){
    int minutes;
    int seconds;
    int time;

    int turns = 0;
    int breaks = 0;

    while(turns !=4){
        time = 1500;
        turns++;
        while(time > 0){
            sleep(1);
            time--;
            minutes = time / 60;
            seconds = time % 60;
            printf("\r%02d:%02d -- \033[0;31mPomodoro %i\033[0m", minutes, seconds, turns);
            fflush(stdout);
        }
        if(breaks < 4){
            time = 300;
            breaks++;
            while(time > 0){
                sleep(1);
                time--;
                minutes = time / 60;
                seconds = time % 60;
                printf("\r%02d:%02d -- \033[0;32m5 Minute Break\033[0m", minutes, seconds);
            }
        } else {
            time = 1200;
            while(time > 0){
                sleep(1);
                time--;
                minutes = time / 60;
                seconds = time % 60;
                printf("\r%02d:%02d -- 20 Minute Break", minutes, seconds);
            }
        }
    return 0;
    }
}
