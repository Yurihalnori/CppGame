#include <graphics.h>
#include <conio.h>

int main()
{
  initgraph(1280, 720);
  setorigin(680,360);

  IMAGE img;
  loadimage(&img,_T("D:\\kaltist(1).jpg"));
  putimage(-680,-360,&img);

  TCHAR title[] = _T("�Թ���Ϸ");
  settextstyle(64, 0, _T("����"));
  int w=textwidth(title);
  outtextxy(-w/2, -160, title);

  TCHAR title1[] = _T("��ASDW������Ϸ��P�˳�");
  settextstyle(64, 0, _T("����"));
  w=textwidth(title1);
  outtextxy(-w/2, 0, title1);

  TCHAR title2[] = _T("���������ʼ��Ϸ");
  settextstyle(64, 0, _T("����"));
  w=textwidth(title2);
  outtextxy(-w/2, 160, title2);

  _getch();
  closegraph();
  return 0;
}