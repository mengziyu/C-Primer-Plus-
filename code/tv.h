#pragma once
class Tv
{
private:
	int state;
	int volume;
	int maxchannel;
	int channel;
	int mode;
	int input;
public:
	//����Ҫ��ǰ��������䱾����˵��Remote��һ����
	friend class Remote;
	enum {Off,On};
	enum {TV,DVD};
	Tv(int s) :state(s){}
	bool volup();
	bool voldown();
	
};

class Remote
{
private:
	int mode;
public:
	Remote(int m=Tv::TV):mode(m) {}
	bool volup(Tv& t) { t.volup(); }
	bool voldown(Tv& t) { t.voldown(); }
	//����ֱ�ӷ���˽�г�Ա
	void set_chan(Tv& t, int c) { t.channel = c; }
	void set_mode(Tv& t, int m) { t.mode = m; }
};