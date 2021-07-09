#include<stdio.h>
#include<stdlib.h>

struct Kernel{
	int row;
	int col;
	int val;
};

struct Image{
	int row;
	int col;
	int val;
};

struct Res{
	int row;
	int col;
	int val;
};

int main(){
	
	
	int krow,kcol,n,i;
	scanf("%d%d%d",&krow,&kcol,&n);
	
	struct Kernel *kernel;
	kernel = (struct Kernel*)malloc( n * sizeof(struct Kernel));
	
	int krnl[krow][kcol];
	for(i = 0; i<n; i++){
		scanf("%d%d%d", &(kernel+i)->row, &(kernel+i)->col,&(kernel+i)->val);
		krnl[(kernel+i)->row][(kernel+i)->col] = (kernel+i)->val;
	}
	
	
	int irow,icol,m;
	scanf("%d%d%d",&irow,&icol,&m);
	
	struct Image *image;
	image = (struct Image*)malloc( m * sizeof(struct Image));
	
	int img[irow][icol];	
	for(i = 0; i<m; i++){
		scanf("%d%d%d", &(image+i)->row, &(image+i)->col,&(image+i)->val);
		img[(image+i)->row][(image+i)->col] = (image+i)->val;
	}
	
	struct Res *res;
	res = (struct Res*)malloc( m * sizeof(struct Res));
	
	int ptr1 = (0+krow)/2;
	int ptr2 = (0+kcol)/2;
	int j,index1,index2,k = 0;
	for(i = 0; i<irow; i++){
		
		for(j = 0; j<icol; j++){
			index1 = ptr1;
			index2 = ptr2;
			
			int prod =1;
			while(index2<krow && index2<irow){
				index1 = ptr1;
				while(index1<kcol && index1<icol){
					prod+=krnl[index1][index2] * img[i+index1][j+index2];
					index1++;
				}
				
				index2++;
			}
			
			index1 = ptr1-1;
			index2 = ptr2-1;
			while(index2>=0){
				
				index1 = ptr1-1;
				while(index1>=0){
					prod+=krnl[index1][index2] * img[i-index1][j-index2];
					index1--;
				}
				index2--;
				
			}
			
			(res+k)->row = i;
			(res+k)->col = j;
			(res+k)->val = prod;
			k++;
		}
	}
	
	//task 6;
	int ans[irow][icol];
	for(i = 0; i<m; i++){
		ans[(res+i)->row][(res+i)->col] = (res+i)->val; 
	}
	
	FILE *fp;
	fp = fopen("Output.txt", "w");
	
	for(i = 0; i<irow; i++){
		for(j = 0; j<icol; j++)
			fprintf(fp, "%d ", ans[i][j]);
		fprintf(fp,"\n");	
	}
	fclose(fp);
	
	//task 7
	free(kernel);
	free(image);
	free(res);
	return 0;	
}
