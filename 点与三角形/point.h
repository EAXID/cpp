


#ifndef POINT_H
#define POINT_H 
class Point{
	
	
	public:
		Point(double =0,double =0);
        Point(const Point &);//注意 ，此处形参添加了const 
        ~Point();//只需要cout。。。 
               
		void setPoint(double,double);
        double getX();
        double getY();

        void displayPoint();
        
        void movePoint(double up,double down,double left,double right);//点的平移操作
        //重载求距离函数，形参类型不同
		double distance(Point & p);	//	成员函数实现 求两点之间的距离
        double distance(Point * p);	//	成员函数实现 求两点之间的距离
        
	private:
		double x;//横坐标
		double y;//纵坐标
};

#endif


