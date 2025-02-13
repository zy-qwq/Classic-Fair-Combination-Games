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
	printf("现在请想象我们面前有 %d 根小棒。",sum);
	Sleep(2000);
	printf("\n\n接下来你将与我进行交互。");
	Sleep(2000);
	printf("\n\n从先手开始，我们轮流操作，每人每次可以拿走 1 到 %d 根小棒。",cnt);
	Sleep(2000);
	printf("\n\n拿走最后一根小棒的人获胜。");
	Sleep(6000);
	system("cls");
	printf("接下来，你将进行第一次抉择。");
	Sleep(2000);
	printf("\n\n如果你想成为先手，请输入 0。");
	Sleep(2000);
	printf("\n\n如果你想成为后手，请输入 1。");
	Sleep(2000);
	int cmd;
	printf("\n\n请输入你的选择：");
	scanf("%d",&cmd);
	printf("\n那么接下来就让我们开始游戏。");
	Sleep(4000);
	while(sum){
		system("cls"); 
		if(cmd==0){
			printf("轮到你了。现在我们还有 %d 根小棒。",sum);
			Sleep(2000);
			printf("\n\n你需要输入一个 1 到 %d 的整数 x，表示你拿走 x 根小棒，你要保证本次操作前至少还剩 x 根小棒。",cnt);
			Sleep(2000);
			printf("\n\n注意：你输入的 x 必须要合法。");
			Sleep(2000);
			printf("\n\n请输入你选择的 x：");
			int num;
			scanf("%d",&num);
			sum-=num;
		}
		else{
			printf("轮到我了。现在我们还有 %d 根小棒。",sum);
			Sleep(2000);
			int num;
			if(sum%(cnt+1)==0){
				num=Rand(1,cnt);
			}
			else{
				num=sum%(cnt+1);
			}
			if(sum!=num) printf("\n\n那么我就拿走 %d 根小棒吧。",num);
			else printf("\n\n那么我就全部拿走吧。"); 
			sum-=num;
		}
		Sleep(2000);
		cmd=1-cmd;
	}
	system("cls");
	cmd=1-cmd;
	if(cmd==0){
		printf("恭喜你拿走了最后一根小棒，取得了最终的胜利！");
	}
	else{
		printf("最后一根小棒被我拿走了，你距离最终的胜利只差了一步。");
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
	printf("现在请想象我们面前有 %d 堆小棒，从左到右每堆小棒的根数为：",n);
	for(int i=1;i<=n;i++){
		printf("%d",nim[i]);
		if(i!=n) printf("，");
		else printf("。");
	}
	Sleep(2000);
	printf("\n\n接下来你将与我进行交互。");
	Sleep(2000);
	printf("\n\n从先手开始，我们轮流操作，每人每次可以从一堆中拿走任意根小棒，可以全部拿走，但不能不拿。");
	Sleep(2000);
	printf("\n\n拿走最后一根小棒的人获胜。");
	Sleep(6000);
	system("cls");
	printf("接下来，你将进行第一次抉择。");
	Sleep(2000);
	printf("\n\n如果你想成为先手，请输入 0。");
	Sleep(2000);
	printf("\n\n如果你想成为后手，请输入 1。");
	Sleep(2000);
	int cmd;
	printf("\n\n请输入你的选择：");
	scanf("%d",&cmd);
	printf("\n那么接下来就让我们开始游戏。");
	Sleep(4000);
	while(n){
		system("cls"); 
		if(cmd==0){
			if(n>=2){
				printf("轮到你了。现在我们还有 %d 堆小棒，从左往右每堆小棒的根数为：",n);
				for(int i=1;i<=n;i++){
					printf("%d",nim[i]);
					if(i!=n) printf("，");
					else printf("。");
				}
				Sleep(2000);
				printf("\n\n你需要先输入一个 1 到 %d 的整数 x，表示你在从左往右第 x 堆拿走小棒。",n);
				Sleep(2000);
				printf("\n\n注意：你输入的 x 必须要合法。");
				Sleep(2000);
				printf("\n\n请输入你选择的 x：");
				int pos;
				scanf("%d",&pos);
				Sleep(2000);
				printf("\n非常好，你选择了第 %d 堆小棒，",pos);
				if(nim[pos]!=1){
					printf("现在请你输入一个 1 到 %d 的整数 y，表示你在第 %d 堆小棒中拿走 y 根。",nim[pos],pos);
					int num;
					printf("\n\n请输入你选择的 y：");
					scanf("%d",&num);
					Sleep(2000);
					nim[pos]-=num;
				}
				else{
					printf("那你只能从这一堆中拿走 1 根小棒了。");
					nim[pos]=0;
				}
			}
			else{
				if(nim[1]!=1){
					printf("轮到你了。现在我们只剩 1 堆小棒了，这堆小棒还有 %d 根。",nim[1]);
					Sleep(2000);
					printf("\n\n你需要输入一个 1 到 %d 的整数 x，表示你在这一堆拿走 x 根小棒。",nim[1]);
					Sleep(2000);
					printf("\n\n注意：你输入的 x 必须要合法。");
					Sleep(2000);
					printf("\n\n请输入你选择的 x：");
					int num;
					scanf("%d",&num);
					nim[1]-=num;
				}
				else{
					printf("轮到你了。现在我们只剩 1 根小棒了。",nim[1]);
					Sleep(2000);
					printf("\n\n那么你就只能拿走这根小棒了。");
					nim[1]=0;
				}
			}
		}
		else{
			if(n>=2){
				printf("轮到我了。现在我们还有 %d 堆小棒，从左往右每堆小棒的根数为：",n);
				for(int i=1;i<=n;i++){
					printf("%d",nim[i]);
					if(i!=n) printf("，");
					else printf("。");
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
				printf("\n\n那我就在从左往右第 %d 堆里拿走 %d 根小棒吧。",pos,num);
			}
			else{
				if(nim[1]!=1){
					printf("轮到我了。现在我们只剩 1 堆小棒了，这堆小棒还有 %d 根。",nim[1]);
					Sleep(2000);
					printf("\n\n那我就把这一堆全部拿走吧。");
					nim[1]=0;
				} 
				else{
					printf("轮到我了。现在我们只剩 1 根小棒了。",nim[1]);
					Sleep(2000);
					printf("\n\n那我就把这根小棒拿走吧。");
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
		printf("恭喜你拿走了最后一根小棒，取得了最终的胜利！");
	}
	else{
		printf("最后一根小棒被我拿走了，你距离最终的胜利只差了一步。");
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
	printf("现在请想象我们面前有一块黑板，上面写着 1 到 %d 共 %d 个整数。",n,n);
	Sleep(2000);
	printf("\n\n接下来你将与我进行交互。");
	Sleep(2000);
	printf("\n\n从先手开始，我们轮流操作，每人每次可以选择一个黑板上有的整数 x，擦掉黑板上 x 和 x 的所有约数。");
	Sleep(2000);
	printf("\n\n擦掉最后一个数的人获胜。");
	Sleep(6000);
	system("cls");
	printf("接下来，你将进行第一次抉择。");
	Sleep(2000);
	printf("\n\n如果你想成为先手，请输入 0。");
	Sleep(2000);
	printf("\n\n如果你想成为后手，请输入 1。");
	Sleep(2000);
	int cmd;
	printf("\n\n请输入你的选择：");
	scanf("%d",&cmd);
	int State=(1<<n)-1,cnt=n;
	while(cnt){
		Sleep(2000);
		system("cls");
		if(cmd==0){
			if(cnt!=1){
				printf("轮到你了。现在黑板上还有 %d 个数，从小到大分别是 ",cnt);
				bool output=false;
				for(int i=1;i<=n;i++){
					if(State&(1<<(i-1))){
						if(output){
							printf("，");
						}
						printf("%d",i);
						output=true;
					}
				}
				printf("。"); 
				Sleep(2000);
				printf("\n\n你需要输入一个黑板上的整数 x，表示你要擦掉黑板上 x 及 x 的所有约数。");
				Sleep(2000);
				printf("\n\n注意：你输入的 x 必须要合法。");
				Sleep(2000);
				printf("\n\n请输入你选择的 x：");
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
				printf("轮到你了。现在黑板上只剩一个 %d 了。",num);
				Sleep(2000);
				printf("\n\n那你只能把它擦掉了。");
				State=cnt=0;
			}
		}
		else{
			if(cnt!=1){
				printf("轮到我了。现在黑板上还有 %d 个数，从小到大分别是 ",cnt);
				bool output=false;
				for(int i=1;i<=n;i++){
					if(State&(1<<(i-1))){
						if(output){
							printf("，");
						}
						printf("%d",i);
						output=true;
					}
				}
				printf("。"); 
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
				printf("\n\n那我就擦掉 %d 和 %d 的所有约数吧。",t,t);
			}
			else{
				int num;
				for(int i=1;i<=n;i++){
					if(State==(1<<(i-1))){
						num=i;
					}
				}
				printf("轮到我了。现在黑板上只剩一个 %d 了。",num);
				Sleep(2000);
				printf("\n\n那我就把它擦掉了。");
				State=cnt=0;
			}
		}
		Sleep(2000);
		cmd=1-cmd;
	}
	system("cls");
	cmd=1-cmd;
	if(cmd==0){
		printf("恭喜你擦掉了最后一个数，取得了最终的胜利！");
	}
	else{
		printf("最后一个数被我擦掉了，你距离最终的胜利只差了一步。");
	}
	Sleep(4000);
	system("cls"); 
}
int main(){
	srand(time(0));
	system("color F0");
	printf("欢迎进入《经典公平组合游戏》。");
	Sleep(2000);
	printf("\n\n在游戏中，请严格遵循规定操作。任何不合法的操作都可能产生异常问题。"); 
	Sleep(2000);
	printf("\n\n你的所有输入均需以换行结尾。");
	Sleep(4000);
	system("cls");
	printf("博弈论是经济学的一个分支，主要研究具有竞争或对抗性质的对象，在一定规则下产生的各种行为。");
	Sleep(2000);
	printf("\n\n博弈论考虑游戏中的个体的预测行为和实际行为，并研究它们的优化策略。");
	Sleep(2000);
	printf("\n\n通俗地讲，博弈论主要研究的是：在一个游戏中，进行游戏的多位玩家的策略。");
	Sleep(2000);
	printf("\n\n公平组合游戏（Impartial Game）的定义如下：");
	Sleep(2000);
	printf("\n\n游戏有两个人参与，二者轮流做出决策，双方均知道游戏的完整信息；");
	Sleep(2000);
	printf("\n\n任意一个游戏者在某一确定状态可以作出的决策集合只与当前的状态有关，而与游戏者无关；");
	Sleep(2000);
	printf("\n\n游戏中的同一个状态不可能多次抵达，游戏以玩家无法行动为结束，且游戏一定会在有限步后以非平局结束。");
	Sleep(4000);
	system("cls");
	printf("接下来让我们以一个最简单的例子作为引入。");
	Sleep(4000); 
	game_Bash();
	printf("上面的例子叫做 Bash game。接下来我们有更多的公平组合游戏可以选择。");
	Sleep(4000);
	while(1){
		system("cls");
		printf("1. Bash game\n\n2. Nim game\n\n3. Divisor game"); 
		Sleep(2000);
		printf("\n\n请选择你想要进行的游戏的编号，如果想要退出请输出 0。");
		Sleep(2000);
		printf("\n\n你的选择：");
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
	printf("相信在以上的体验中，你已经了解了一些博弈论的基本知识。");
	Sleep(2000);
	printf("\n\n也许你会认为，只要掌握了博弈论，生活中的一切问题都能得到完美的解答。");
	Sleep(2000);
	printf("\n\n然而，就算博弈的内容再复杂，也复杂不过人心。");
	Sleep(2000);
	printf("\n\n不管在什么时候，人们都不可能成为只进行最优决策的机器。");
	Sleep(2000);
	printf("\n\n人们会根据自己的情感和意愿来做决定，而不只是死板地遵循着最优的策略。");
	Sleep(2000);
	printf("\n\n况且，人也会犯错，也会有低落的时刻。你又如何保证，你的每一个决定，都能让你变得更好呢？");
	Sleep(2000);
	printf("\n\n生活中的许多时候，你并不了解别人的想法与策略。这些人心的博弈，又岂能是一门理论所能探究的呢？");
	Sleep(2000);
	printf("\n\n也许，只有当我们真正放下输赢，不再为那些无关紧要的事争执的那一刻，所有问题才会解决吧……");
	Sleep(4000);
	system("cls");
	printf("感谢使用《经典公平组合游戏》。");
	Sleep(2000);
	printf("\n\n所有文件可以访问 https://github.com/zy-qwq/Classic-Fair-Combination-Games.git 进行查看。");
	Sleep(2000);
	printf("\n\n期待与你的再次相遇。"); 
	return 0;
}
