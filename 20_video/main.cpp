#include <iostream>
using namespace std;
#include "video.h"

int main() {
	//��Windows����ϵͳ�ϲ��� demo.rmvb ��Ƶ�ļ�
	VideoPlayer* vp = new RMVB_Player(new WinOS());
	vp->Play("demo.revb");
	delete vp;
	return 0;
}

/*
��1�������ͼ�������������ϵͳ������Ϸ�ʽ��ƣ��Ҷ��߾��Լ̳еķ�ʽʵ����չ��
��2��17
*/