class Rectangle{
	private:
	int s1, s2;
	
	public:
	Rectangle(){
		s1=1;
		s2=1;
	}
	
	Rectangle(int a,int b){
		s1 = a;
		s2 = b;
	}
	
	int Area(int s1, int s2){
		return(s1*s2);
	}
};