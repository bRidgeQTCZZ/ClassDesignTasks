#include <iostream>
using namespace std;
#include "video.h"

int main() {
	//在Windows操作系统上播放 demo.rmvb 视频文件
	VideoPlayer* vp = new RMVB_Player(new WinOS());
	vp->Play("demo.revb");
	delete vp;
	return 0;
}

/*
（1）设计意图：播放器与操作系统采用组合方式设计，且二者均以继承的方式实现扩展性
（2）17
*/