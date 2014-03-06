#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int a[200][200];
int b[200];
int c[200][200];

void arrgen(int *arr,int asize){
   int i;
	
   for (i=0;i<asize;i++){
      arr[i] = rand() % 8192;
   }
}

void arrgen2d(int *a,int rows,int cols){
  int i,j;
  for (i = 0;i<rows;i++){
     for (j=0;j<cols;j++){
         a[i*cols+j] = rand() % 8192;
     }
  }
}
     
void icas6(int *a,int *c,int rows,int cols){
   int i,j,m,n,t;
   int k[5];
   for (i=1;i<rows-1;i++){
     for (j = 1; j < cols-1;j++){
	k[0]=0;
        k[1] = a[(i-1)*cols + j  ];
	k[2] = a[(i+1)*cols + j  ];
	k[3] = a[i*cols     + j-1];
	k[4] = a[i*cols     + j+1];
        n = k[0];
	if(k[1] > n) n= k[1];
	if(k[2] > n) n= k[2];
	if(k[3] > n) n= k[3];
	if(k[4] > n) n= k[4];
//        for(m=1;m<5;m++){
//          if(k[m] > n) n= k[m];
//        }
    
	c[i*cols +j] = n;  
     }
   }
}
void main(){
 srand(time(NULL));
 arrgen(&b[0],200);
 arrgen2d(&a[0][0],200,200);
 int x;
 for (x=1;x<100;x++){
  icas6(&a[0][0],&c[0][0],200,200);
 }
}
