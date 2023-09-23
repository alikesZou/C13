#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 1000
//定义线性表 
typedef struct Qlist{
	float *elem;
	int length;
}Qlist; 

//求线性表长度
int length_Qlist(float *elem){
	int i = 1;
	while(elem[i] > elem[i-1]){
		i++;
	}
	return i;
} 

//插入元素x 
void sort_Qlist(Qlist &va,float x){
	int i = 0;
	while(va.elem[i] < x && i <= va.length){
		i++;
	}
	for(int j = ++va.length;j > i;j--){
		va.elem[j] = va.elem[j-1];
	}
	va.elem[i] = x;
}

int main(){
	Qlist va;//定义一个线性表
	va.length = 0; 
	va.elem = (float*)malloc(sizeof(float)*MAXSIZE);//初始化 
	
	int i = 0;
	char c;
	do{
		scanf("%f",&va.elem[i++]);
		va.length++; 
	}while((c = getchar()) !='\n');//输入一个线性表
	//va.length = length_Qlist(va.elem);//求线性表长度 
	//printf("%d",va.length); 
	float x = 0;
	scanf("%f",&x);//输入x
	sort_Qlist(va,x);//插入x 
	int j = 0;
	for( j = 0; j < va.length;j++){
		printf("%f\n",va.elem[j]);
	}
	//printf("%f",va.elem[j++]);
	
	
	
}


