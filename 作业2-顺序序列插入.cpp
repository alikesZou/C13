#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 1000
//�������Ա� 
typedef struct Qlist{
	float *elem;
	int length;
}Qlist; 

//�����Ա���
int length_Qlist(float *elem){
	int i = 1;
	while(elem[i] > elem[i-1]){
		i++;
	}
	return i;
} 

//����Ԫ��x 
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
	Qlist va;//����һ�����Ա�
	va.length = 0; 
	va.elem = (float*)malloc(sizeof(float)*MAXSIZE);//��ʼ�� 
	
	int i = 0;
	char c;
	do{
		scanf("%f",&va.elem[i++]);
		va.length++; 
	}while((c = getchar()) !='\n');//����һ�����Ա�
	//va.length = length_Qlist(va.elem);//�����Ա��� 
	//printf("%d",va.length); 
	float x = 0;
	scanf("%f",&x);//����x
	sort_Qlist(va,x);//����x 
	int j = 0;
	for( j = 0; j < va.length;j++){
		printf("%f\n",va.elem[j]);
	}
	//printf("%f",va.elem[j++]);
	
	
	
}


