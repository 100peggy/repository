#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h>
#define TRIGGER 50

void oldmen() {
    printf("路過的老人勃然大怒 開始對你手腳並用！\n\n");
}

void passive() {
    int tool;
    while (1) {
        printf("請選擇武器！\n1.老人手上的拐杖\n2.小孩手上的健達出奇蛋\n3.靠自身蠻力與之抗衡\n\n(輸入代號): ");
        scanf_s("%d", &tool);
        puts("");

        switch (tool) {
        case 1:
            printf("傑出的一手！老人摔倒了，你贏得勝利。老人自知理虧走掉，獲得了博愛座\n\n");
            return;
        case 2:
            printf("沒造成任何傷害，還讓小孩哭了！你遭受到小孩媽媽的劇烈猛攻，倒地身亡\n\n");
            return;
        case 3:
            printf("真男人之間的較量就是要用拳頭！你一拳擊倒老人，但老人站不起來了（可能掛了）。\n不過你獲得了博愛座，WORTH！！！\n\n");
            return;
        default:
            printf("無效的選擇\n\n");
            break;
        }
    }
}


int main() {
    int choice, random, fight;

    srand(time(0));

    while (1) {
        printf("是否選擇座在博愛座上：(輸入代號(1)是 or (0)否): ");
        scanf_s("%d", &choice);
        puts("");

        if (choice == 1) {
            random = rand() % 101;
            if (random < TRIGGER) {
                oldmen();
                printf("是否選擇和老人進行肢體互動：(輸入代號(1)是 or (0)否): ");
                scanf_s("%d", &fight);
                puts("");
                if (fight == 1) {
                    passive();
                    printf("\n");
                }
                else if (fight == 0) {
                    printf("老人變本加厲 強制啟動肢體互動\n\n");
                    printf("你感到出乎意料之時 老人已經準備攻擊你了！\n\n");
                    Sleep(3000);
                    passive();
                }
                else {
                    printf("無效的選擇\n\n");
                }
            }
            else {
                printf("路過的老人沒理你。\n\n");
            }
        }
        else if (choice == 0) {
            printf("你沒座在博愛座上 和平度過一天!\n\n");
            break;
        }
        else {
            printf("無效的選擇。\n\n");
        }
    }

    system("pause");
    return 0;
}
