class point
{
	public:
		point(double x1,double y1);
		~point();
		point(const point &p1);
		void setpoint(double x1,double y1);
		double getx();
		double gety();
		void Ps(point p2);
	private:
		double x;
		double y;
};
void ps(double x1,double x2,double y1,double y2);
