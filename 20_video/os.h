#ifndef OS_H
#define OS_H

class OS {
public:
	virtual void Func() {} //�������ֲ��Ź��������ϵͳ�й�
	virtual ~OS() {}
};

class WinOS : public OS {
public:
	virtual void Func();
};

class LinuxOS : public OS {
public:
	virtual void Func();
};

#endif // !OS_H


