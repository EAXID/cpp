
#ifndef POINT_H
#define POINT_H


class Point{
	
	friend double distanc(Point &p,Point &p4);	//	��Ԫ����ʵ��������֮��ľ���
	friend double distanc(Point *p,Point *p4);	//	��Ԫ����ʵ��������֮��ľ���
	public:
		Point(double =0,double =0);
        Point(const Point &);
        ~Point(); 
               
		void setPoint(double,double);
        inline double getX() const;
        inline double getY() const;

        void displayPoint() const;
        void movePoint();//���ƽ�Ʋ���
        //��������뺯�����β����Ͳ�ͬ
		double distance(Point &);	//	��Ա����ʵ�� ������֮��ľ���
        double distance(Point *);	//	��Ա����ʵ�� ������֮��ľ���
        
        static int getCount();//��̬��Ա���� 
	private:
		double x;//������
		double y;//������
		
		static int count;//��̬���ݳ�Ա 
};
#endif
