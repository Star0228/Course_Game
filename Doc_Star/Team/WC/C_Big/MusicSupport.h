#ifndef MUSIC_H_
#define MUSIC_H_

#include "graphics.h"
#include "genlib.h"
#include "conio.h"
#include"extgraph.h"
#include"simpio.h"
#include"random.h"
#include"strlib.h"

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <windows.h>
#include <math.h>
#include <olectl.h>
#include <stdio.h>
#include <mmsystem.h>
#include <wingdi.h>
#include <ole2.h>
#include <ocidl.h>
#include <winuser.h>
#include <imgui.h>
#include <time.h>
#include <Windows.h>
#include <mmsystem.h>
#pragma comment(lib,"Winmm.lib")


/*������*/ 
void PlayMusic();

/*�ر�����*/ 
void CloseMusic();

/*���ܣ���ȡ����״̬��  0---����δ����   1---�������ڲ���*/ 
int GetMusicState();



#endif 

