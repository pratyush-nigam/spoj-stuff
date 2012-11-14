#include<iostream>
using namespace std;

class CPolygon
{
	protected:
		int x,y;
	public:
		void set_values(int,int);
		virtual int area(){ return 0; };
};

class CRectangle : public CPolygon
{
	public:
		static int n;
		CRectangle();
		CRectangle(int,int);
		CRectangle(const CRectangle&);
		CRectangle operator+(CRectangle);
		//~CRectangle();
		int area(){ return x*y; }
		friend CRectangle duplicate(CRectangle);
};

int CRectangle::n = 0;

CRectangle CRectangle::operator+(CRectangle c)
{
	CRectangle t;
	t.x = c.x + x;
	t.y = c.y + y;
	return t;
}

CRectangle duplicate(CRectangle c)
{
	CRectangle d(c);
	return d;
}

CRectangle::CRectangle()
{
	x=0;
	y=0;
	n++;
};


CRectangle::CRectangle(const CRectangle& r)
{
	x = r.x;
	y = r.y;
}

CRectangle::CRectangle(int a,int b)
{
	x = a;
	y = b;
}

/*CRectangle::~CRectangle()
{
	delete x;
	delete y;
}*/

void CPolygon::set_values(int a, int b)
{
	x = a;
	y = b;
}

int main()
{
	CRectangle p;
	//p.set_values(3,4);
	CPolygon *p1 = &p;
	p1->set_values(3,4);
	cout << p1->area() << endl;
	/*CRectangle rect (1,2),r,a[10];
	//cout << "area:" << a->area() << endl;
	CRectangle r2(rect);
	rect.set_values(3,4);
	for(int i=0;i<10;i++)
	{
		a[i].set_values(5,6);
		cout << "area"<< i << ":" << a[i].area() << endl;
	}
	r2 = rect + r2;
	r = duplicate(rect);
	cout << "area:" << rect.area() << endl;
	cout << "area:" << r.area() << endl;
	cout << "area:" << r2.area() << endl;
	cout << "n = " << rect.n << endl;
	cout << "area:" << r.area() << endl;
	//cout << "area:" << a>area() << endl;*/
	return 0;
}
