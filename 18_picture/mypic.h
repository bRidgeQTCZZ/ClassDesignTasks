#ifndef MYPIC_H
#define MYPIC_H

class Printer {
	/*第三方类库定义*/
};

class Bitmap {
	/*第三方类库定义*/
};

class Config;

class Mypic {
public:
	bool SendTo(Config* config) {
		/*略*/
	}
	//其它略
};

#endif // !MYPIC_H

/*
（1）设计新的Config类，包含获取相关配置参数的函数，派生出不同设备的参数子类，设备的不同配置再从子类派生出孙子类
（2）从PrinterConfig类派生出新类
（3）从Config派生出新类
*/