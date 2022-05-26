#ifndef VIDEO_H
#define VIDEO_H

class StandardVideoStream {
	/*ÂÔ*/
};

class OS;
class VideoPlayer {
public:
	VideoPlayer(OS* os) : mOS(os) {
		svs = new(StandardVideoStream);
	}
	virtual void Play(string fileName) {}
	virtual ~VideoPlayer() {
		delete svs;
	}
protected:
	StandardVideoStream* svs;
	OS* mOS;
};

class RMVB_Player : public VideoPlayer {
public:
	RMVB_Player(OS *os) : VideoPlayer(os) {}
	virtual void Play(string fileName);
};

class MPG_Player : public VideoPlayer {
public:
	MPG_Player(OS* os) : VideoPlayer(os) {}
	virtual void Play(string fileName);
};

class AVI_Player : public VideoPlayer {
public:
	AVI_Player(OS* os) : VideoPlayer(os) {}
	virtual void Play(string fileName);
};

#endif // !VIDEO_H
