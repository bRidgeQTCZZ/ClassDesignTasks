#ifndef CONFIG_H
#define CONFIG_H

class Config {};

class PrinterConfig : public Config {
public:
	PrinterConfig(Printer& printer) {
		GetMargin();
		GetAlignKind();
	}
protected:
	void GetMargin();
	void GetAlignKind();
	int marginLeft;
	int marginTop;
	int marginRight;
	int marginBottom;
	int alignKind;
};

class PrinterPointConfig : public PrinterConfig {
public:
	PrinterPointConfig(Printer& printer) : PrinterConfig(printer) {
		GetMarginLT();
		GetMarginRB();
		marginLeft = marginLT.x;
		marginTop = marginLT.y;
		marginRight = marginRB.x;
		marginBottom = marginRB.y;
	}
protected:
	void GetMarginLT();
	void GetMarginRB();
	Point marginLT;
	Point marginRB;
	int alignKind;
};

class Point {
public:
	int x, y;
};

class BitmapConfig : public Config {
public:
	BitmapConfig(Bitmap& bitmap) {
		GetOffset();
		GetTransparent();
		GetMask();
	}
protected:
	void GetOffset();
	void GetTransparent();
	void GetMask();
	int xOffset;
	int yOffset;
	int transparent;
	int mask;
};

#endif // !CONFIG_H
