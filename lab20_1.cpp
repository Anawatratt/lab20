#include<iostream>

using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1,Rect R2){

	double upper=min(R1.y,R2.y);
	double lower=max(R1.y-R1.h,R2.y-R2.h);
	double h=(upper-lower);

	double yupper=max(R1.x,R2.x);
	double ylower=min(R1.x+R1.w,R2.x+R2.w);
	double w=(ylower-yupper);

	if(h*w<=0){
		return 0;
	}
	return (h*w);
}






int main(){
	Rect R1 = {1,1,5,5};
	Rect R2 = {2,2,5,5};

	cout<<overlap(R1,R2);
}
