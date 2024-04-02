#include "game.h"

int read_score()
{
    FILE* pfile;
    int number;

    // 打开文件
    pfile = fopen("file.txt", "r");
    if (pfile == NULL)
    {
        return 0;
    }

    // 读取整数
    fscanf(pfile, "%d", &number);

    // 关闭文件
    fclose(pfile);

    return number;
}

void write_score(int score)
{
    FILE* pfile;
    pfile = fopen("file.txt", "w");
    if (pfile != NULL)
    {
        fprintf(pfile, "%d", score);
        fclose(pfile);
    }
}

void comparsion_and_write_score(int score)
{
    int history = read_score();
    if (score > history)
        write_score(score);
}