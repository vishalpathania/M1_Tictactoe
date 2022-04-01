#include "game_operations.h"

char mat[3][3] = { '_', '_', '_', '_', '_', '_', '_', '_', '_' };
void printMatrix(char val)
{
    unsigned char i, j;
    
    if (!val) {
        /*For blank matrix*/

        for (i = 0; i < 3; i++) {
            printf("\t\t\t");
            for (j = 0; j < 3; j++) {
                printf("[%3c ] ", mat[i][j]);
            }
            printf("\n");
        }

        return;
    }
    for (i = 0; i < 3; i++) {
        printf("\t\t\t");
        for (j = 0; j < 3; j++) {
            printf("[%3c ] ", mat[i][j]);
        }
        printf("\n");
    }
    return;
}

void insertValue(int i, int j, unsigned char user)
{
    //  printf("\n ##### %d, %d ###\n",i,j);
    mat[i][j] = ((user == 0x00) ? 'X' : 'O');
}

unsigned char isFull(void)
{
    unsigned char i, j, count = 0;
    ;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) {
            if (mat[i][j] == '_')
                ++count;
        }
    return count;
}

unsigned char isOver(void)
{

    unsigned char i, j, user;
    unsigned char storeChar = 0, flag;
    int sum = 0;
    // case 1
    /*sum of 'X'+'X'+'X' = 264 and sum of 'O'+'O'+'O' =237*/
    flag = 0;
    for (i = 0; i < 3; i++) {
        sum = 0;
        for (j = 0; j < 3; j++) {
            if (mat[i][j] == '_')
                break;
            sum += mat[i][j];
            storeChar = mat[i][j];
        }

        if (sum == 237 || sum == 264) {
            return storeChar;
        }
    }

    // case 2
    for (i = 0; i < 3; i++) {
        sum = 0;
        for (j = 0; j < 3; j++) {
            if (mat[j][i] == '_')
                break;
            sum += mat[j][i];
            storeChar = mat[j][i];
        }

        if (sum == 237 || sum == 264) {
            return storeChar;
        }
    }

    // case 3

    for (i = 0; i < 3; i++) {
        sum = 0;
        for (j = 0; j < 3; j++) {
            if (i == j) {
                if (mat[i][j] == '_')
                    break;
                sum += mat[i][j];
                storeChar = mat[i][j];
            }
        }
        if (sum == 237 || sum == 264) {
            return storeChar;
        }
    }

    return 0;
}