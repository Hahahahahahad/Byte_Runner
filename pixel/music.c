//#include "game.h"
//
//void Music(int n)
//{
//	switch (n)
//	{
//	case 2:
//		//循环播放音乐，在遇到下一次播放音乐时被打断 
//		PlaySound(NULL,NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);	break;
//
//	case 1:
//		//播放一次音乐，在遇到下一次播放音乐时被打断 
//		PlaySound(NULL, NULL, SND_FILENAME | SND_ASYNC);				break;
//
//	case 0:
//		//停止播放背景音乐 
//		PlaySound(NULL, NULL, SND_FILENAME);							break;
//	}
//
//}

//void BGM( int n)
//{
//	char File[100];
//	if (n == 1 || n == 2)	strcpy(File, "play ");
//	else if (n == 0)	strcpy(File, "close ");
//	strcat(File, c);
//	if (n == 2)		strcat(File, " repeat");
//	mciSendString(File, NULL, 0, NULL);
//}
