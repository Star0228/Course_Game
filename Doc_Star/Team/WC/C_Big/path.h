#ifdef PATH_H
#define PATH_H

#define TIMER_BLINK001 3
const int mseconds001 = 500;
#define MAXM  10000

int FindPath(int n,int Map[],int StartX,int StartY,int EndX,int EndY);
int FindNextStep();
void DrawNextStep();
void DrawTipRoad();//��������·�� 
void TipTimerEvent(int TimeID);//���ӻ�����  ��   ���ӻ����һ�κ�  ��ʹ��startTimer()���»ָ� 
void DrawTip(int i);//��������·�� 
#endif
