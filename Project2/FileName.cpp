#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h>
#define TRIGGER 50

void oldmen() {
    printf("���L���ѤH�k�M�j�� �}�l��A��}�åΡI\n\n");
}

void passive() {
    int tool;
    while (1) {
        printf("�п�ܪZ���I\n1.�ѤH��W�����\n2.�p�Ĥ�W�����F�X�_�J\n3.�a�ۨ��Z�O�P���ܿ�\n\n(��J�N��): ");
        scanf_s("%d", &tool);
        puts("");

        switch (tool) {
        case 1:
            printf("�ǥX���@��I�ѤH�L�ˤF�A�AĹ�o�ӧQ�C�ѤH�۪��z�������A��o�F�շR�y\n\n");
            return;
        case 2:
            printf("�S�y������ˮ`�A�����p�ĭ��F�I�A�D����p�Ķ������@�P�r��A�˦a���`\n\n");
            return;
        case 3:
            printf("�u�k�H���������q�N�O�n�ή��Y�I�A�@�����˦ѤH�A���ѤH�����_�ӤF�]�i�౾�F�^�C\n���L�A��o�F�շR�y�AWORTH�I�I�I\n\n");
            return;
        default:
            printf("�L�Ī����\n\n");
            break;
        }
    }
}


int main() {
    int choice, random, fight;

    srand(time(0));

    while (1) {
        printf("�O�_��ܮy�b�շR�y�W�G(��J�N��(1)�O or (0)�_): ");
        scanf_s("%d", &choice);
        puts("");

        if (choice == 1) {
            random = rand() % 101;
            if (random < TRIGGER) {
                oldmen();
                printf("�O�_��ܩM�ѤH�i����餬�ʡG(��J�N��(1)�O or (0)�_): ");
                scanf_s("%d", &fight);
                puts("");
                if (fight == 1) {
                    passive();
                    printf("\n");
                }
                else if (fight == 0) {
                    printf("�ѤH�ܥ��[�F �j��Ұʪ��餬��\n\n");
                    printf("�A�P��X�G�N�Ƥ��� �ѤH�w�g�ǳƧ����A�F�I\n\n");
                    Sleep(3000);
                    passive();
                }
                else {
                    printf("�L�Ī����\n\n");
                }
            }
            else {
                printf("���L���ѤH�S�z�A�C\n\n");
            }
        }
        else if (choice == 0) {
            printf("�A�S�y�b�շR�y�W �M���׹L�@��!\n\n");
            break;
        }
        else {
            printf("�L�Ī���ܡC\n\n");
        }
    }

    system("pause");
    return 0;
}
