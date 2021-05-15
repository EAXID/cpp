


#ifndef POINT_H
#define POINT_H 
class Point{
	
	
	public:
		Point(double =0,double =0);
        Point(const Point &);//ע�� ���˴��β������const 
        ~Point();//ֻ��Ҫcout������ 
               
		void setPoint(double,double);
        double getX();
        double getY();

        void displayPoint();
        
        void movePoint(double up,double down,double left,double right);//���ƽ�Ʋ���
        //��������뺯�����β����Ͳ�ͬ
		double distance(Point & p);	//	��Ա����ʵ�� ������֮��ľ���
        double distance(Point * p);	//	��Ա����ʵ�� ������֮��ľ���
        
	private:
		double x;//������
		double y;//������
};

#endif


