#include "game.h"

int read_score()
{
    FILE* pfile;
    int number;

    // ���ļ�
    pfile = fopen("file.txt", "r");
    if (pfile == NULL)
    {
        return 0;
    }

    // ��ȡ����
    fscanf(pfile, "%d", &number);

    // �ر��ļ�
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