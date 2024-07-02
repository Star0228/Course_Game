#ifndef HEADER_FILE_NAME_H
#define HEADER_FILE_NAME_H

#include <windows.h>
#include <winuser.h>
#include "CreatMap.h" 
#include "graphics.h"
#include "extgraph.h"
#include "imgui.h"
#include "linkedlist.h"
#include "CreatMap.h"


static double mouse_x,mouse_y;

typedef enum {
	sceneA0,       /*  ����A0:��ʼ����  �޲˵�*/
	sceneA1,       /*  ����A1:��ʼ���� �в˵� */
	sceneB1,       /*  ����B1:�Ѷ�ѡ�� */
	sceneB2,       /*  ����B2:ʹ��˵��  */
	sceneB3,       /*  ����B3:�����ͼ  */
	sceneB4,       /*����B4�������༭��ͼ*/
	sceneB5,       /*����B5��ģʽѡ��*/
	sceneC,        /*����C��ɳĮ�ű�*/
	sceneC1,      /*����C1�������ؾ�*/
	sceneD         /*����D��������Ϸ*/
} gamestatus;

static int Gamestatus = 0;
static int isCtrl= 0;
void MouseEventProcess(int x, int y, int button, int event);
void KeyboardEventProcess(int key,int event);
void CharEventProcess(char key);
void Display2();
void creatfile(int a[]);
int inbutton(double mouse_x,double mouse_y,double x,double y,double width,double height);
char* get_file_path(void);

#endif
