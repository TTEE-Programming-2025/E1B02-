#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i,j,k,password;
	char a;
	//1.
	for(i=0;i<20;i++){
		for(j=19-i;j>0;j--)
			printf(" ");
		for(k=0;k<1+i*2;k++)
			printf("*");
		printf("\n");
	}
	scanf("%c",&a);
	fflush(stdin);
	
	system("cls");
	
	//2.
	printf("enter password 4 numbers==> ");
	scanf("%d",&password);
	if(password==2024){
		scanf("%c",&a);
		system("cls");
 		}else{
			printf("incorrect\n");
			system("pause");
			return 0;
	}
	//3.
	printf("'A'..........'Z':Uppercase\n");
	printf("'a'..........'z':Lowercase\n");
	printf("'0'..........'9':Digit\n");
	printf("otherwise:E1B02���֯�\n");
		
	scanf("%c",&a);	
	fflush(stdin);
	system("cls");
	
	//4.
	char ch;
	printf("enter a char==>");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z'){
		printf("Uppercase\n");
		}else if(ch>='a'&&ch<='z'){
			printf("Lowercase\n");
			}else if(ch>='0'&&ch<='9'){
				printf("Digit\n");
				}else{
					printf("E1B02���֯�\n");
				
				}
	fflush(stdin);
	scanf("%c",&a);	
	fflush(stdin);
	system("cls");	
	//5
	printf("�߱o�G�Ĥ@�D�ڥ�for�j��A�~�h�j�鱱����r�𪺦�� ���h�j�鱱��e�����Ů� ���h�j�� ��X*��1357...�Ĥ@�D�]���L�k�T�w�p�����P�P��1 3 5 7..��X�Ӥ֥��F�[1\n "); 
	printf("�߱o�G�ĤG�D�ڥ�if else���D�p�Gpassword=2024�K�M���_�h�������O�]��������== =���t�O==������B���=���ᤩ2024\n");
	printf("�߱o�G�ĤT�D�Nprintf�D��\n");
	printf("�߱o�G�ĥ|�D�ڥ�if else���Dif ��J��ch�bA~Z�̭��K�OUppercase�A��J��ch�ba~z�̭��K�OLowercase�A��J��ch�b0~9�̭��K�ODigit,��L�K�OE1B02���֯��A�o�D���ڹ��r���d�򪺱���M�n��if else �ɭn�[�W�A���~����");
	printf("else���if");
	system("pause");
	return 0;
}
