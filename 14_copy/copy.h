#ifndef COPY_H
#define COPY_H

class Input {
public:
	virtual ~Input() {};
	virtual int Read() = 0;
};

class Output {
public:
	virtual ~Output() {};
	virtual void Write(int c) = 0;
};

class Keyboard : public Input {
public:
	virtual ~Keyboard() {}
	virtual int Read() {
		/*ÂÔ*/
	}
};

class Printer : public Output {
public:
	virtual ~Printer() {}
	virtual void Write(int c) {
		/*ÂÔ*/
	}
};

void Copy(Input& input, Output& output)
{
	int c;
	while ((c = input.Read()) != EOF)
		output.Write(c);
}

#endif // !COPY_H
