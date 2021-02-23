#pragma once

//Remote��ǰ�����ˣ���Remote��Tv������
//��Tv�໹δ���壬�����������ǰ����
class Tv;
class Remote
{
private:
	enum { TV, DVD };
	int mode;
public:
	//��ΪTv��ֻ����ǰ�����������Щ����ԭ�ͻ����ܷ���Tv��ľ��巽��
	Remote(int m = TV) :mode(m) {}
	bool volup(Tv& t);
	bool voldown(Tv& t);
	void set_chan(Tv& t, int c);
	void set_mode(Tv& t, int m);
};

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
	//Ҫ������Ԫ��������RemoteҪ��ǰ��������֤Remote�Ѵ���
	friend void Remote::set_chan(Tv& t, int c);
	enum {Off,On};
	enum {TV,DVD};
	Tv(int s) :state(s){}
	bool volup();
	bool voldown();
	
};


//inline ���ܱ���ͨ������ʾ�Ҳ�����
//��Ϊ����Remoteʱ����δ���뵽Tv��������ʾ�Ҳ���
//ʹ��������������ҵ���������ĵط�
inline bool Remote::volup(Tv& t)
{
	return t.volup();
}

//ֻ��ָ��Ϊ��Ԫ�ĺ������ܷ���˽�г�Ա
inline void Remote::set_chan(Tv& t, int c)
{
	t.channel=c;
}