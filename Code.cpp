#include<iostream>
#include<cstdio>
#include<windows.h>
#include<ctime>
#include<cstdlib>
using namespace std;
int Rand(int l,int r){
	return rand()%(r-l+1)+l;
}
void game_Bash(){
	int sum=Rand(10,30);
	int cnt=Rand(5,9);
	Sleep(4000);
	system("cls");
	printf("����������������ǰ�� %d ��С����",sum);
	Sleep(2000);
	printf("\n\n�������㽫���ҽ��н�����");
	Sleep(2000);
	printf("\n\n�����ֿ�ʼ����������������ÿ��ÿ�ο������� 1 �� %d ��С����",cnt);
	Sleep(2000);
	printf("\n\n�������һ��С�����˻�ʤ��");
	Sleep(6000);
	system("cls");
	printf("���������㽫���е�һ�ξ���");
	Sleep(2000);
	printf("\n\n��������Ϊ���֣������� 0��");
	Sleep(2000);
	printf("\n\n��������Ϊ���֣������� 1��");
	Sleep(2000);
	int cmd;
	printf("\n\n���������ѡ��");
	scanf("%d",&cmd);
	printf("\n��ô�������������ǿ�ʼ��Ϸ��");
	Sleep(4000);
	while(sum){
		system("cls"); 
		if(cmd==0){
			printf("�ֵ����ˡ��������ǻ��� %d ��С����",sum);
			Sleep(2000);
			printf("\n\n����Ҫ����һ�� 1 �� %d ������ x����ʾ������ x ��С������Ҫ��֤���β���ǰ���ٻ�ʣ x ��С����",cnt);
			Sleep(2000);
			printf("\n\nע�⣺������� x ����Ҫ�Ϸ���");
			Sleep(2000);
			printf("\n\n��������ѡ��� x��");
			int num;
			scanf("%d",&num);
			sum-=num;
		}
		else{
			printf("�ֵ����ˡ��������ǻ��� %d ��С����",sum);
			Sleep(2000);
			int num;
			if(sum%(cnt+1)==0){
				num=Rand(1,cnt);
			}
			else{
				num=sum%(cnt+1);
			}
			if(sum!=num) printf("\n\n��ô�Ҿ����� %d ��С���ɡ�",num);
			else printf("\n\n��ô�Ҿ�ȫ�����߰ɡ�"); 
			sum-=num;
		}
		Sleep(2000);
		cmd=1-cmd;
	}
	system("cls");
	cmd=1-cmd;
	if(cmd==0){
		printf("��ϲ�����������һ��С����ȡ�������յ�ʤ����");
	}
	else{
		printf("���һ��С�����������ˣ���������յ�ʤ��ֻ����һ����");
	}
	Sleep(4000);
	system("cls");
}
int nim[10];
void game_Nim(){
	int n=Rand(2,5);
	for(int i=1;i<=n;i++){
		nim[i]=Rand(1,15);
	}
	Sleep(4000);
	system("cls");
	printf("����������������ǰ�� %d ��С����������ÿ��С���ĸ���Ϊ��",n);
	for(int i=1;i<=n;i++){
		printf("%d",nim[i]);
		if(i!=n) printf("��");
		else printf("��");
	}
	Sleep(2000);
	printf("\n\n�������㽫���ҽ��н�����");
	Sleep(2000);
	printf("\n\n�����ֿ�ʼ����������������ÿ��ÿ�ο��Դ�һ�������������С��������ȫ�����ߣ������ܲ��á�");
	Sleep(2000);
	printf("\n\n�������һ��С�����˻�ʤ��");
	Sleep(6000);
	system("cls");
	printf("���������㽫���е�һ�ξ���");
	Sleep(2000);
	printf("\n\n��������Ϊ���֣������� 0��");
	Sleep(2000);
	printf("\n\n��������Ϊ���֣������� 1��");
	Sleep(2000);
	int cmd;
	printf("\n\n���������ѡ��");
	scanf("%d",&cmd);
	printf("\n��ô�������������ǿ�ʼ��Ϸ��");
	Sleep(4000);
	while(n){
		system("cls"); 
		if(cmd==0){
			if(n>=2){
				printf("�ֵ����ˡ��������ǻ��� %d ��С������������ÿ��С���ĸ���Ϊ��",n);
				for(int i=1;i<=n;i++){
					printf("%d",nim[i]);
					if(i!=n) printf("��");
					else printf("��");
				}
				Sleep(2000);
				printf("\n\n����Ҫ������һ�� 1 �� %d ������ x����ʾ���ڴ������ҵ� x ������С����",n);
				Sleep(2000);
				printf("\n\nע�⣺������� x ����Ҫ�Ϸ���");
				Sleep(2000);
				printf("\n\n��������ѡ��� x��");
				int pos;
				scanf("%d",&pos);
				Sleep(2000);
				printf("\n�ǳ��ã���ѡ���˵� %d ��С����",pos);
				if(nim[pos]!=1){
					printf("������������һ�� 1 �� %d ������ y����ʾ���ڵ� %d ��С�������� y ����",nim[pos],pos);
					int num;
					printf("\n\n��������ѡ��� y��");
					scanf("%d",&num);
					Sleep(2000);
					nim[pos]-=num;
				}
				else{
					printf("����ֻ�ܴ���һ�������� 1 ��С���ˡ�");
					nim[pos]=0;
				}
			}
			else{
				if(nim[1]!=1){
					printf("�ֵ����ˡ���������ֻʣ 1 ��С���ˣ����С������ %d ����",nim[1]);
					Sleep(2000);
					printf("\n\n����Ҫ����һ�� 1 �� %d ������ x����ʾ������һ������ x ��С����",nim[1]);
					Sleep(2000);
					printf("\n\nע�⣺������� x ����Ҫ�Ϸ���");
					Sleep(2000);
					printf("\n\n��������ѡ��� x��");
					int num;
					scanf("%d",&num);
					nim[1]-=num;
				}
				else{
					printf("�ֵ����ˡ���������ֻʣ 1 ��С���ˡ�",nim[1]);
					Sleep(2000);
					printf("\n\n��ô���ֻ���������С���ˡ�");
					nim[1]=0;
				}
			}
		}
		else{
			if(n>=2){
				printf("�ֵ����ˡ��������ǻ��� %d ��С������������ÿ��С���ĸ���Ϊ��",n);
				for(int i=1;i<=n;i++){
					printf("%d",nim[i]);
					if(i!=n) printf("��");
					else printf("��");
				}
				Sleep(2000);
				int xorsum=0;
				for(int i=1;i<=n;i++){
					xorsum^=nim[i];
				}
				int pos,num;
				if(xorsum==0){
					pos=Rand(1,n);
					num=Rand(1,nim[pos]);
				}
				else{
					for(int i=1;i<=n;i++){
						if((xorsum^nim[i])<nim[i]){
							pos=i;
							num=nim[i]-(xorsum^nim[i]);
							break;
						}
					}
				}
				nim[pos]-=num;
				printf("\n\n���Ҿ��ڴ������ҵ� %d �������� %d ��С���ɡ�",pos,num);
			}
			else{
				if(nim[1]!=1){
					printf("�ֵ����ˡ���������ֻʣ 1 ��С���ˣ����С������ %d ����",nim[1]);
					Sleep(2000);
					printf("\n\n���ҾͰ���һ��ȫ�����߰ɡ�");
					nim[1]=0;
				} 
				else{
					printf("�ֵ����ˡ���������ֻʣ 1 ��С���ˡ�",nim[1]);
					Sleep(2000);
					printf("\n\n���ҾͰ����С�����߰ɡ�");
					nim[1]=0;
				}
			}
		}
		for(int i=1;i<=n;i++){
			if(nim[i]==0){
				for(int j=i+1;j<=n;j++){
					nim[j-1]=nim[j];
				}
				n--;
				break;
			}
		}
		Sleep(2000);
		cmd=1-cmd;
	}
	system("cls");
	cmd=1-cmd;
	if(cmd==0){
		printf("��ϲ�����������һ��С����ȡ�������յ�ʤ����");
	}
	else{
		printf("���һ��С�����������ˣ���������յ�ʤ��ֻ����һ����");
	}
	Sleep(4000);
	system("cls"); 
}
bool win[1048576];
int go[1048576];
bool flag[30];
void game_Divisor(){
	memset(win,0,sizeof(win));
	memset(go,0,sizeof(go));
	int n=Rand(5,20);
	for(int i=1;i<(1<<n);i++){
		for(int j=1;j<=n;j++){
			flag[j]=0;
		}
		for(int j=1;j<=n;j++){
			if(i&(1<<(j-1))){
				flag[j]=true;
			}
		}
		for(int j=1;j<=n;j++){
			if(flag[j]){
				int tmp=i;
				for(int k=1;k<=j;k++){
					if(j%k==0  &&  i&(1<<(k-1))){
						tmp-=(1<<(k-1));
					}
				}
				if(!win[tmp]){
					win[i]=true;
					go[i]=tmp;
				}
				else if(!win[i]){
					go[i]=tmp;
				}
			}
		}
	}
	Sleep(4000);
	system("cls");
	printf("����������������ǰ��һ��ڰ壬����д�� 1 �� %d �� %d ��������",n,n);
	Sleep(2000);
	printf("\n\n�������㽫���ҽ��н�����");
	Sleep(2000);
	printf("\n\n�����ֿ�ʼ����������������ÿ��ÿ�ο���ѡ��һ���ڰ����е����� x�������ڰ��� x �� x ������Լ����");
	Sleep(2000);
	printf("\n\n�������һ�������˻�ʤ��");
	Sleep(6000);
	system("cls");
	printf("���������㽫���е�һ�ξ���");
	Sleep(2000);
	printf("\n\n��������Ϊ���֣������� 0��");
	Sleep(2000);
	printf("\n\n��������Ϊ���֣������� 1��");
	Sleep(2000);
	int cmd;
	printf("\n\n���������ѡ��");
	scanf("%d",&cmd);
	int State=(1<<n)-1,cnt=n;
	while(cnt){
		Sleep(2000);
		system("cls");
		if(cmd==0){
			if(cnt!=1){
				printf("�ֵ����ˡ����ںڰ��ϻ��� %d ��������С����ֱ��� ",cnt);
				bool output=false;
				for(int i=1;i<=n;i++){
					if(State&(1<<(i-1))){
						if(output){
							printf("��");
						}
						printf("%d",i);
						output=true;
					}
				}
				printf("��"); 
				Sleep(2000);
				printf("\n\n����Ҫ����һ���ڰ��ϵ����� x����ʾ��Ҫ�����ڰ��� x �� x ������Լ����");
				Sleep(2000);
				printf("\n\nע�⣺������� x ����Ҫ�Ϸ���");
				Sleep(2000);
				printf("\n\n��������ѡ��� x��");
				int num;
				scanf("%d",&num);
				for(int i=1;i<=num;i++){
					if(num%i==0){
						if(State&(1<<(i-1))){
							State-=(1<<(i-1));
							cnt--;
						}
					}
				}
			}
			else{
				int num;
				for(int i=1;i<=n;i++){
					if(State==(1<<(i-1))){
						num=i;
					}
				}
				printf("�ֵ����ˡ����ںڰ���ֻʣһ�� %d �ˡ�",num);
				Sleep(2000);
				printf("\n\n����ֻ�ܰ��������ˡ�");
				State=cnt=0;
			}
		}
		else{
			if(cnt!=1){
				printf("�ֵ����ˡ����ںڰ��ϻ��� %d ��������С����ֱ��� ",cnt);
				bool output=false;
				for(int i=1;i<=n;i++){
					if(State&(1<<(i-1))){
						if(output){
							printf("��");
						}
						printf("%d",i);
						output=true;
					}
				}
				printf("��"); 
				Sleep(2000);
				int t;
				for(int i=n;i>=1;i--){
					if(State&(1<<(i-1))){
						if(!(go[State]&(1<<(i-1)))){
							t=i;
							break;
						}
					}
				}
				for(int i=1;i<=t;i++){
					if(t%i==0  &&  State&(1<<(i-1))){
						State-=(1<<(i-1));
						cnt--;
					}
				}
				printf("\n\n���ҾͲ��� %d �� %d ������Լ���ɡ�",t,t);
			}
			else{
				int num;
				for(int i=1;i<=n;i++){
					if(State==(1<<(i-1))){
						num=i;
					}
				}
				printf("�ֵ����ˡ����ںڰ���ֻʣһ�� %d �ˡ�",num);
				Sleep(2000);
				printf("\n\n���ҾͰ��������ˡ�");
				State=cnt=0;
			}
		}
		Sleep(2000);
		cmd=1-cmd;
	}
	system("cls");
	cmd=1-cmd;
	if(cmd==0){
		printf("��ϲ����������һ������ȡ�������յ�ʤ����");
	}
	else{
		printf("���һ�������Ҳ����ˣ���������յ�ʤ��ֻ����һ����");
	}
	Sleep(4000);
	system("cls"); 
}
int main(){
	srand(time(0));
	system("color F0");
	printf("��ӭ���롶���乫ƽ�����Ϸ����");
	Sleep(2000);
	printf("\n\n����Ϸ�У����ϸ���ѭ�涨�������κβ��Ϸ��Ĳ��������ܲ����쳣���⡣"); 
	Sleep(2000);
	printf("\n\n���������������Ի��н�β��");
	Sleep(4000);
	system("cls");
	printf("�������Ǿ���ѧ��һ����֧����Ҫ�о����о�����Կ����ʵĶ�����һ�������²����ĸ�����Ϊ��");
	Sleep(2000);
	printf("\n\n�����ۿ�����Ϸ�еĸ����Ԥ����Ϊ��ʵ����Ϊ�����о����ǵ��Ż����ԡ�");
	Sleep(2000);
	printf("\n\nͨ�׵ؽ�����������Ҫ�о����ǣ���һ����Ϸ�У�������Ϸ�Ķ�λ��ҵĲ��ԡ�");
	Sleep(2000);
	printf("\n\n��ƽ�����Ϸ��Impartial Game���Ķ������£�");
	Sleep(2000);
	printf("\n\n��Ϸ�������˲��룬���������������ߣ�˫����֪����Ϸ��������Ϣ��");
	Sleep(2000);
	printf("\n\n����һ����Ϸ����ĳһȷ��״̬���������ľ��߼���ֻ�뵱ǰ��״̬�йأ�������Ϸ���޹أ�");
	Sleep(2000);
	printf("\n\n��Ϸ�е�ͬһ��״̬�����ܶ�εִ��Ϸ������޷��ж�Ϊ����������Ϸһ���������޲����Է�ƽ�ֽ�����");
	Sleep(4000);
	system("cls");
	printf("��������������һ����򵥵�������Ϊ���롣");
	Sleep(4000); 
	game_Bash();
	printf("��������ӽ��� Bash game�������������и���Ĺ�ƽ�����Ϸ����ѡ��");
	Sleep(4000);
	while(1){
		system("cls");
		printf("1. Bash game\n\n2. Nim game\n\n3. Divisor game"); 
		Sleep(2000);
		printf("\n\n��ѡ������Ҫ���е���Ϸ�ı�ţ������Ҫ�˳������ 0��");
		Sleep(2000);
		printf("\n\n���ѡ��");
		int cmd;
		scanf("%d",&cmd);
		printf("\n");
		if(cmd==0){
			break;
		}
		else if(cmd==1){
			game_Bash();
		}
		else if(cmd==2){
			game_Nim();
		}
		else if(cmd==3){
			game_Divisor();
		}
	}
	system("cls");
	printf("���������ϵ������У����Ѿ��˽���һЩ�����۵Ļ���֪ʶ��");
	Sleep(2000);
	printf("\n\nҲ�������Ϊ��ֻҪ�����˲����ۣ������е�һ�����ⶼ�ܵõ������Ľ��");
	Sleep(2000);
	printf("\n\nȻ�������㲩�ĵ������ٸ��ӣ�Ҳ���Ӳ������ġ�");
	Sleep(2000);
	printf("\n\n������ʲôʱ�����Ƕ������ܳ�Ϊֻ�������ž��ߵĻ�����");
	Sleep(2000);
	printf("\n\n���ǻ�����Լ�����к���Ը��������������ֻ���������ѭ�����ŵĲ��ԡ�");
	Sleep(2000);
	printf("\n\n���ң���Ҳ�᷸��Ҳ���е����ʱ�̡�������α�֤�����ÿһ�����������������ø����أ�");
	Sleep(2000);
	printf("\n\n�����е����ʱ���㲢���˽���˵��뷨����ԡ���Щ���ĵĲ��ģ���������һ����������̽�����أ�");
	Sleep(2000);
	printf("\n\nҲ��ֻ�е���������������Ӯ������Ϊ��Щ�޹ؽ�Ҫ������ִ����һ�̣���������Ż����ɡ���");
	Sleep(4000);
	system("cls");
	printf("��лʹ�á����乫ƽ�����Ϸ����");
	Sleep(2000);
	printf("\n\n�����ļ����Է��� https://github.com/zy-qwq/Classic-Fair-Combination-Games.git ���в鿴��");
	Sleep(2000);
	printf("\n\n�ڴ�������ٴ�������"); 
	return 0;
}
