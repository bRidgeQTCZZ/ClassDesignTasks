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
	virtual ~WinOS() {}
};

class LinuxOS : public OS {
public:
	virtual void Func();
	virtual ~LinuxOS() {}
};

#endif // !OS_H


