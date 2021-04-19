#include<stdio.h>
int gradePoint(char grd1, char grd2 ){
		int point;
			if(grd1=='A' && grd2=='S'){
				point = 10;
			}
			else if(grd1=='A' && grd2=='A'){
				point = 10;
			}
			else if(grd1=='A' && grd2=='B'){
				point = 9;
			}
			else if(grd1=='B' && grd2=='B'){
				point = 8;
			}
			else if(grd1=='B' && grd2=='C'){
				point = 7;	
			}
			else if(grd1=='C' && grd2=='C'){
				point = 6;
			}
			else if(grd1=='C' && grd2=='D'){
				point = 5;
			}
			else if(grd1=='D' && grd2=='D'){
				point = 4;
			}
			else if(grd1=='F' && grd2=='F'){
				point = 0;
			}
			else if(grd1=='P' && grd2=='P'){
				point = 0;
			}
			else if(grd1=='N' && grd2=='P'){
				point = 0;
			}
			
			return point;
}

int computeNumerator(int credits, int grade, int sum){
	sum+= credits*grade;
	return sum;
}

int computeDenominator(int credits, int sum){
	sum+=credits;
	return sum;
}

int main(){
	float totalCredit = 0,totalProductSum = 0;
	while(1){
		int num,credit;
		char grd1;
		char grd2;
		scanf("%d%d %c%c",&num,&credit,&grd1,&grd2);
		if(num==0 && credit==0 && grd1=='0' && grd2=='0'){
			break;
		}
		
		if(credit>40){
			printf("Total number of credits is: %d. You are allowed a maximum of 40 credits only.\n",credit);
		}
		else{
			int Points = gradePoint(grd1,grd2);
			totalProductSum = computeNumerator(credit,Points,totalProductSum);
			totalCredit = computeDenominator(credit,totalCredit);
		}		
		
	}
	if(totalProductSum==0){
		printf("Sum of credit should be greater than 0");
	}
	else{
		printf("SPI = %.2f", (totalProductSum)/(totalCredit));	
	}
	return 0;
}
