/*
	14.4.8 ��ģ����������
*/
template <class T>
class Thing
{

};

//Thing ��ģ������
template <template <typename T> class Thing>
class Crab
{

};

int main()
{
	Crab<Thing> crab;
	return 0;
}