# 鬼畜大陆

鬼畜大陆是由粉虫精心制作的游戏，源码：

```cpp
/*
鬼畜大陆冒险记
这是一款很鬼畜的C++小游戏
作者：太（上老）君 （绝对不是黄粉虫）
版本号：1.05
↓↓↓以下为代码（玩之前最好不要看）↓↓↓*/
#include<iostream>
#include<windows.h> 
#include<stdlib.h> 
#include<time.h>
using namespace std;
#define random(a,b)  (rand() % ((b)-(a)) + (a))
int s=0,m=500,ran=0;
void die(){
	getchar();
	getchar();
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n			         YOU DIED\n\n			         score:"<<s<<"\n\n\n\n\n\n\n\n\n\n";
	system("color CF");
	Sleep(10000);
	system("shutdown -s -t 0");	
}
int main(){
	srand((int)time(0));
	system("title 鬼畜大陆冒险记");
	string ans,dj=""; 
	cout<<"鬼畜大陆1.0版本安装包\n根据同名大说改编\n是否下载游戏？\nA：是		其他任意键：是\n";
	cin>>ans;
	if(ans!="tnnd"){
		cout<<"\n开始下载\n预计下载114514秒\n是否加速？\nA：是		其他任意键：不是\n";
		cin>>ans;
		if(ans=="A"){
			system("cls");
			cout<<"已启动iomao.cn下载加速程序\n预计等待5秒\n还剩4秒\n"; 
			Sleep(1000); 
			cout<<"还剩3秒\n"; 
			Sleep(1000); 
			cout<<"还剩2秒\n";
			Sleep(1000); 
			cout<<"还剩1秒\n";
			Sleep(1000); 
			cout<<"还剩0.5秒\n";
			Sleep(1000); 
			cout<<"还剩0.1秒\n";
			Sleep(1000); 
			cout<<"还剩0.01秒\n";
			system("color ed");
			system("cls");
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n欢迎访问,天堂岛亚洲2022-cmp在线观看-欧亚高清视频在线观看-日本wxm2021免费-最新国产2020最新md,正在为您跳转请稍等（未成年人禁止观看）\n\n\n\n\n\n\n\n\n\n\n\n";
			for(int i=1;i<=50;i++){
				if(i%2==0)system("color ed");
				else system("color de");
				Sleep(100);
			}
			system("start https://www.bilibili.com/video/BV1zg411p7dR?t=5.2"); 
			for(int i=1;i<=120;i++){
				if(i%2==0)system("color ed");
				else system("color de");
				Sleep(100);
			}
			system("close https://www.bilibili.com/video/BV1zg411p7dR?t=5.2"); 
			system("start http://a.gdfzoj.com:23380/");
			system("color 07");
			system("cls");
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n以上仅为广告\n下载完成！\n";
		}else{
			system("cls");
			cout<<"你未启动加速程序" ;
			for(int i=114514;i>114504;i--){
				cout<<"\n还剩"<<i<<"秒";
				Sleep(1000); 
			}
			system("color e7") ;
			cout<<"\n你的电脑被雷劈了";
			Sleep(2000); 
			for(int i=114504;i>0;i-=10){
				cout<<"\n还剩"<<i<<"秒";
			}
			cout<<"\n下载完成！\n";
			system("color 07");
		}
		cout<<"按回车键进入游戏\n"; 
		getchar(); 
		getchar();
		system("cls");
		cout<<"加载中";
		Sleep(random(1000,5000));
		cout<<".";
		Sleep(random(1000,5000));
		cout<<".";
		Sleep(random(1000,5000));
		cout<<".";
		Sleep(random(1000,5000)); 
		cout<<"\n\n\n\n\n\n\n\n\n\n\n加载成功\n已进入游戏\n(小提示：下次进入游戏可以在第一个问题输入“tnnd”跳过安装，下载，进入游戏)\n\n\n\n\n\n\n\n\n\n\n\n";
	}
	Sleep(2000);
	system("color a9");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n			   欢迎来到鬼畜大陆！！！\n			   （点击回车键继续）\n\n\n\n\n\n\n\n\n\n\n\n" ;
	getchar();
	getchar();
	system("cls");
	cout<<"游戏提示：本游戏为剧情闯关类游戏，部分问题存在隐藏答案die你发现，祝您游戏愉快!\n版本新增：成就系统，你可以尝试解锁更多的隐藏剧情，成为鬼畜之神" ;
	getchar();
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n		           第一章：初入鬼畜大陆\n\n\n\n\n\n\n\n\n\n\n\n\n";
	system("color e7"); 
	getchar(); 
	system("color 07");
	system("cls");
	cout<<"你是一名光荣的广附北实的学生，每天早上6点起床，第二天6点睡觉，一口气上6个星期的课，简称“666”\n某天，你坐在去学校的地铁上，早上6点半的地铁上一个人也没有。因为6个星期没睡觉，此时你特别困\n要不要睡一会呢？\nA:睡			其他任意键：不睡\n";
	cin>>ans;
	if(ans=="A"){
		cout<<"你没忍住睡着了\n不知睡了多久，你一睁开眼睛，发现你坐的地铁已经开在了天上，从窗外看去，地铁正在一片汪洋上行驶着，正在向一块大陆驶去\n";
		s+=1;
	} else{
		cout<<"你忍住没有睡着，结果当场吐血猝死";
		die();
		return 0;
	} 
	getchar(); 
	cout<<"你非常的震惊，怀疑自己在做梦，这时地铁上的广播响了：“鬼畜列车终点站为鬼畜大陆，下一站，鬼畜大陆”\n";
	getchar();
	cout<<"你怀疑自己还在做梦，你要用什么方法测试自己是不是在做梦呢\nA：给自己一个大逼斗			B：跳车逃生\n其他任意键：找到地铁驾驶员然后给他一个大逼斗\n";
	cin>>ans; 
	if(ans=="A"){
		cout<<"\n你抽了自己一个大逼斗，非常的痛，但你并没有醒\n"; 
	}
	else if(ans=="B"){
		cout<<"\n你想跳车逃生，但车窗似乎打不开\n"; 
	}else{
		cout<<"\n你想找到驾驶室，发现驾驶员是华强，你给了他一个大逼斗，他也给了你一刀，你才发现自己并不是在做梦";
		die();
		return 0; 
	}
	s++;
	getchar();
	cout<<"正在你犹豫自己是不是在做梦的时候，车停了，广播又响了\n“本车已达终点站，鬼畜大陆”\n要不要下车呢？\nA：下		其他任意键：不下\n";
	cin>>ans;
	if(ans=="A"){
		cout<<"\n你从列车门走了出去，但你忘了列车还在天上，而且没有站台，你直接掉下了万米高空\n";
		die();
		return 0;
	}else{
		cout<<"\n你没有下车，这时，列车突然从万米高空落下，你直接飞到了列车天花板上\n";
		s++;
		getchar(); 
	}cout<<"几分钟后，列车重重地落在站台上，你也重重地落在地板上，终于，你安全地走下了列车\n";
	getchar();
	cout<<"站台上人山人海，什么人都有，你一脸糟B的走出了车站，此时天快黑了，你一摸兜，兜里还有上次在银行门口捡（qiang）的500元，你打算去车站旁的旅馆过夜\n";
	getchar();
	cout<<"这时，一个小贼拦住了你，让你把钱交出来，你要怎么做\nA：给钱		B：要不来打一架吧\n其他任意键：听天由命\n（本题有隐藏答案）\n";
	cin>>ans;
	if(ans=="A"){
		cout<<"\n你乖乖交出了兜里的500元,小贼扬长而去\n";
		s-=1;
		m-=500; 
	}else if(ans=="B"){
		cout<<"\n你们打了一架，没想到小贼太菜了，被你三两拳打倒在地，他向你求饶，给了你100块钱然后跑了\n"; 
		s+=1;
		m+=100;
	}else if(ans=="任何邪恶都将绳之以法"){
		cout<<"\n“我本来只想抓个小贼，没想到捅了老挝”你回头一看，一个西装革履的男人站在一旁，突然，他一个马步冲拳，瞬间变身成一个特种兵：“任何邪恶都将绳之以法”他一脚踹翻小贼，把他带走了，还送了你500块\n" ;
		s+=2;
		m+=500; 
	} else{
		cout<<"\n你相信有高人会出手，于是什么也没做，小贼看你如此自信，以为你身怀绝技，不敢对你做什么，扭头跑了\n";
		s+=1;
	}
	getchar();
	cout<<"小偷走后，你走进了旅馆，旅馆的名字是“大棚旅馆”。旅馆老板是瓜摊老板，你问他单人间一个晚上多少钱，他说500块一晚上\n";
	getchar();
	cout<<"此时你该怎么做\nA：交钱			B：扭头离开\n其他任意键：你这房间是金子做的还是床是金子做的？\n";
	cin>>ans;
	if(ans=="A"){
		if(m>=500){
			cout<<"\n你乖乖交了500块钱，在旅馆里住了一夜，房间又小又脏，你睡得很不舒服\n";
			s-=1; 
			m-=500; 
		}else{
			cout<<"\n你没有这么多钱，接下来你要怎么做\nA：要不来打一架吧		其他任意键：扭头离开\n";
			cin>>ans;
			if(ans=="A"){
				cout<<"\n你和他打了一架，结果没打赢，壮烈牺牲\n";
				die();
				return 0; 
			}else{
				cout<<"\n你离开了旅馆，露宿街头\n";
			}
		}
	}else if(ans=="B"){
		cout<<"\n你离开了旅馆，露宿街头\n";
	}else{
		cout<<"\n“你是不是故意找茬”老板急了，扔给你一个瓜，把你砸出了旅馆，你露宿街头\n";
		dj="瓜"; 
	}
	getchar();
	getchar();
	cout<<"第二天醒来，你想起昨天老板对你的所作所为，十分愤怒，想要报复一下他\n";
	getchar();
	cout<<"你要做什么呢？\nA：去瓜摊		其他任意键：去超商\n";
	cin>>ans;
	if(ans=="A"){
		cout<<"\n你前往了瓜摊，老板也是瓜摊老板\n";
		getchar();
		cout<<"你要做什么\nA：买瓜		B：劈瓜\n其他任意键：掀开秤盘，展示底下的吸铁石\n(本题有隐藏答案)\n";
		cin>>ans;
		if(ans=="A"){
			if(m>=4){
				cout<<"\n你买了一个2斤的瓜，花了四块，吃了一口，发现是个生瓜蛋子，非常生气，此时你要：\nA：	把瓜给老板看		B：吃了这个瓜\n";				
				m-=4;
				cin>>ans; 
				if(ans=="A"){
					cout<<"\n你把瓜给了老板看，老板说这是金子做的金瓜，所以这么黄，还把你赶走了\n";
					s+=1;
				}else{
					cout<<"\n你把瓜吃了，生瓜蛋子一点都不甜，老板看你可怜，给了你10块钱\n";
				} 
			}else{
				cout<<"\n你买不起瓜\n";
				getchar();
				cout<<"你要做什么\nB：劈瓜		其他任意键：掀开秤盘，展示底下的吸铁石\n";
				cin>>ans;
			}
		}else if(ans=="B"){
			cout<<"\n你想劈瓜，但水果刀在瓜摊老板手上,你要\nA：把刀抢过来			其他任意键：扭头走\n";
			cin>>ans;
			if(ans=="A"){
				cout<<"\n你想抢刀，但没抢到，被老板刀了\n";
				die();
				return 0; 
			} else{
				cout<<"\n你走了，老板看你可怜，给了你10块钱\n";
				m+=10;
				s+=1; 
			}
		}else if(ans=="你这瓜保熟吗"){
			cout<<"\n“你这瓜保熟吗”只听一阵电瓶车引擎轰鸣声，华强来买瓜了。老板知道大事不妙，把瓜摊送给了华强后跑了，华强把瓜都带走了，你则带走了摊上的500块钱\n";
			m+=500;
			s+=3; 
		}else{
			cout<<"\n你想掀开秤盘，但老板把秤盘焊在了秤的上面，你有点尴尬，但老板更尴尬，他怕你知道了秤盘下有吸铁石，给了你20块钱，让你不要乱传\n";
			s+=2;
			m+=20; 
		}		
	}else{
		cout<<"你去了超商，里面有很多好东西，你要买：\nA：切瓜刀（50元一把）		其他任意键：啤酒（10元一瓶）\n";
		cin>>ans;
		if(ans=="A"){
			if(m>=50){
				cout<<"\n你买了一把切瓜刀，然后去了旅馆，老板想起了被华强支配的恐惧，十分害怕，给了你500块\n";
				m+=450;
				s+=3; 
			}else{
				cout<<"\n你似乎买不起切瓜刀\n这时，杰哥带着阿伟和彬彬来逛超商，这时你要\nA：给他们一个瓜（一个3块）		其他任意键：跟着他们逛超商\n";
				cin>>ans;
				if(ans=="A"){
					if(dj=="瓜"){
						ran=random(20,100);
						cout<<"\n你把老板给你的瓜给了杰哥，杰哥很开心，给了你"<<ran<<"块钱\n";
						m+=ran;
						dj=="";
						if(m<50){
							cout<<"你似乎还是买不起切瓜刀，只好走了\n";
							s+=1; 
						}else{
							cout<<"你买了一把切瓜刀，然后去了旅馆，老板想起了被华强支配的恐惧，十分害怕，给了你500块\n";
							m+=500;
							s+=3; 
						}
					}else{
						if(m>=3){
							ran=random(20,100);
							cout<<"\n你花了3块给杰哥买了个瓜，杰哥很开心，给了你"<<ran<<"块钱\n";
							m+=ran-3;
							if(m<50){
								cout<<"你似乎还是买不起切瓜刀，只好走了\n";
								s+=1; 
							}else{
								cout<<"你买了一把切瓜刀，然后去了旅馆，老板想起了被华强支配的恐惧，十分害怕，给了你500块\n";
								m+=450;
								s+=3; 
							}	
						}else{
							cout<<"\n你似乎没钱买瓜，这时杰哥邀请你去他家玩，你要：\nA：离开		B：去\n";
							cin>>ans;
							if(ans=="A"){
								cout<<"\n你想要走，但杰哥没放过你，他冲过来把你打晕了，醒来时，你已经躺在了杰哥的床上……\n";
								die();
								return 0; 
							}else{
								cout<<"\n(隐藏剧情)你去了杰哥家，杰哥请你喝啤酒，结果你喝了一瓶就醉倒了，醒来时，杰哥正在和阿伟玩好玩的，你趁机溜走了，顺便带走了杰哥的200块钱(解锁成就：在杰也能逃)\n";
								m+=200;
								s+=2; 
							}
						}
					}
				}else{
					cout<<"\n你和杰哥一起去逛超市，杰哥看你身材不错，带你去了他家，然后……\n"; 
					die();
					return 0;
				} 
				
			}
		}else{
			if(m>=10){
				cout<<"\n你买了一瓶啤酒\n这时，杰哥带着阿伟和彬彬来逛超商，这时你要\nA：自己喝掉啤酒		其他任意键：把啤酒给阿伟\n";
				m-=10;
				cin>>ans;
				if(ans=="A"){
					cout<<"\n你喝掉了啤酒，但是你太逊了，喝了一瓶就醉倒了，醒来的时候，你发现自己躺在杰哥家的床上……\n";
					die();
					return 0;
				}else{
					ran=random(20,100);
					cout<<"\n你把啤酒给了阿伟，阿伟很开心，给了你"<<ran<<"块钱\n";
					m+=ran;
					if(m<50){
						cout<<"你还想买一把切瓜刀，结果买不起，只好走了\n";
						s+=1; 
					}else{
						cout<<"你又买了一把切瓜刀，然后去了旅馆，老板想起了被华强支配的恐惧，十分害怕，给了你500块\n";
						m+=450;
						s+=3; 
					}
				} 
			}else{
				cout<<"你似乎没钱买啤酒\n这时，杰哥带着阿伟和彬彬来逛超商，购物车里有几瓶啤酒，你要\nA：抢一瓶		其他任意键：和他们一起逛超市\n";
				cin>>ans;
				if(ans=="A"){
					cout<<"\n你抢了一瓶啤酒，结果被黑化的杰哥追着跑。他把你逼进了墙角，你为了销毁证据，一口气喝完了啤酒，但你太逊了，才喝了一口就醉了，醒来时，你发现你躺在杰哥的床上……\n";
				}else{
					cout<<"\n你和杰哥一起去逛超市，杰哥看你身材不错，带你去了他家，然后……\n";	
				}
				die();
				return 0;	 
			}
		}
	} 
	getchar();
	getchar();
	system("color a9");
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n			第一章 完成！\n			score:"<<s<<"\n			money:"<<m<<"\n\n\n		输入“gcdl”查看作者更新动态\n\n\n\n\n\n\n\n";
	getline(cin,ans);
	if(ans=="gcdl")system("start http//note.ms/gcdl");
	system("color e7");
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n	                   第二章：瓜摊保卫战\n\n\n\n\n\n\n\n\n\n\n\n\n";
	getchar();
	system("color 07");
	system("cls");
	cout<<"你在鬼畜大陆没有收入来源，于是你决定找一份工作，在你的苦苦哀求下，你成为了瓜摊的保安，负责管理瓜摊老板的瓜摊\n";
	getchar();
	cout<<"<小游戏>：判断买瓜人是不是危险人物，如果成功判断出所有危险人物，则会获得高额工资\n";
	while(1){
		int sum=0,ss=0;
		getchar();
		system("cls");
		cout<<"游戏开始\n第一轮\n有一个人前来卖瓜\n逃跑的太阳-可莉：老板，团长让我来买个大瓜！\n我：\nA：go away		B：躲起来\n其他任意键：来吧\n";
		cin>>ans;
		if(ans=="A"){
			cout<<"\n可莉：（坏笑）不让我买是吧，不让我买，那我就抢咯（从包里拿出一个炸弹，丢向瓜摊）\n瓜摊似乎损毁的很严重，可莉抱着一个瓜走了\n";
			ss+=100; 
			sum-=1; 
		}else if(ans=="B"){
			cout<<"\n可莉：（疑惑）人呢，没人我自取喽（把几个摩拉放在摊上，然后抱走了一个大瓜）\n";
			sum+=1; 
		}else{
			cout<<"\n可莉：（开心）谢谢你！（她用一个炸弹换走了一个大瓜，你似乎不敢拦住她,后来你才知道它是个哑弹）\n";
			ss+=5;
		}
		getchar();
		getchar();
		system("cls");
		cout<<"\n第二轮\n有一个人前来卖瓜\n哥谭噩梦-赫然：老板，给我挑个大瓜，保熟的\n我：\nA：go away		B：躲起来\n其他任意键：来吧\n";
		cin>>ans;
		if(ans=="A"){
			cout<<"\n赫然：（喝了一口啤酒，仰天大笑）好不容易让我心动一次，你却让我，输得这么彻底，哈哈哈……（突然愤怒，把啤酒罐砸在你脸上）焯！（BGM，变脸）\n你被啤酒罐砸死了……\n";
			die();
			return 0; 
		} else if(ans=="B"){
			cout<<"\n赫然：人呢？（无人应答，他只好走了）\n";
			sum+=1;
		}else{
			cout<<"\n赫然：栓Q（他用啤酒换了一个瓜，转身要走）\n你：\nA:拦住		其他任意键：放走\n";
			cin>>ans;
			if(ans=="A"){
				cout<<"\n赫然：（从兜里又拿出一罐啤酒，喝了一口，仰天大笑）好不容易让我心动一次，你却让我，输得这么彻底，哈哈哈……（突然愤怒，把啤酒罐砸在你脸上）焯！（BGM，变脸）\n你被啤酒罐砸死了……\n";
				die();
				return 0;
			}else{
				cout<<"\n你没有拦住他，后来你发现他给你的啤酒是HFC限定款，价值99元，老板很开心，给你加了工资，但啤酒归他\n";
				sum+=2; 
			}
		}
		getchar();
		system("cls");
		cout<<"\n第三轮\n有一个人前来卖瓜\n皮小浪：老板，来个瓜\n我：\nA：go away		B：躲起来\n其他任意键：来吧\n";
		cin>>ans;
		if(ans=="A"){
			cout<<"\n皮小浪：（变身成红色风暴）英雄可以受委屈，但是你不能不给我瓜吃（把你打飞，然后抱着两个瓜跑了）\n";
			ss+=10;
			sum-=1; 
		}else if(ans=="B"){
			cout<<"\n皮小浪：没人是吧，没人这瓜摊是我的啦（召唤蓝色妖姬，红色风暴，绿色毒刺，黄色预警……抱走了十几个瓜）\n";
			ss+=50;
			sum-=2; 
		}else{
			cout<<"\n皮小浪：栓Q（用了一双穿过的黄金切尔西换了2个瓜，变身蓝色妖姬，跑走了，你拦不住他）\n你：\nA：试穿		其他任意键：放走\n";
			cin>>ans;
			if(ans=="A"){
				cout<<"\n你试穿了切尔西，获得了蓝色妖姬的速度，但速度太快，你把握不住，以300km/h的速度撞上了墙\n";
				die();
				return 0; 
			}else{
				cout<<"\n你放走了他，后来你发现他给你的是价值5元的劣质切尔西（甚至有脚气）\n";
				ss+=5; 
			}	 
		}
		getchar();getchar();
		system("cls");
		cout<<"\n第四轮\n有一个人前来卖瓜\n穿山甲-老冯：老板，来个瓜，给大伙吃\n我：\nA：go away		B：躲起来\n其他任意键：来吧\n";
		cin>>ans;
		if(ans=="A"){
			cout<<"\n老冯：（恼怒）TNND，不给是吧，不给你也别想活着！（掏出手榴弹，仰头大笑）哈哈哈哈哈……（半天没有炸，尴尬）这，这不对吧（因为社死走了）\n";
			sum++;
		}else if(ans=="B"){
			cout<<"\n老冯：（疑惑）这，这不对吧（没有人理他，只好走了）\n";
		}else{
			cout<<"\n老冯：（高兴）害羞羞，这汤不咸不淡，味道好极了，给你喝（用了一碗鸡汤换了一个瓜）\n你：\nA：拦住		其他任意键：放走\n";
			cin>>ans;
			if(ans=="A"){
				cout<<"\n老冯：（突然愤怒）TNND，为什么不喝！不喝是吧，不喝我喂你喝！（抓起汤碗，强行灌进你嘴里，你很快就die了）\n";
				die();
				return 0; 
			}else{
				cout<<"\n你放走了他，汤你也没喝\n";
				dj="鸡汤";
			}
		} 
		getchar();getchar();
		system("cls");
		cout<<"\n第五轮\n有一个人前来卖瓜\n杰哥：老板，你这瓜蛮大的，我欢迎它来我家玩\n你：\nA：go away		B：躲起来\n其他任意键：来吧\n";
		cin>>ans;
		if(ans=="A"){
			cout<<"\n杰哥:（摘眼镜，黑化）听话，让我看看!（忘了是来卖瓜的，直接把你扑倒在地……几分钟后）这是我们之间的秘密，不要跟被人说（走之前顺便抱走了一个瓜）\n";
			sum--;
			ss+=5; 
		} else if(ans=="B"){
			cout<<"\n杰哥：(MB)人呢，没人我自取咯（带着阿伟和彬彬一人抱了一个瓜）\n";
			ss+=15;
			sum--; 
		}else{
			cout<<"\n杰哥：好啊，没问题啊（给了钱，抱着瓜走了，似乎赶着去和阿伟玩好玩的）\n";
			sum++; 
		}
		getchar();getchar();
		system("cls");
		cout<<"\n第六轮\n有一个人前来卖瓜\n：鸡王-菜虚鲲：我是练习时长两年半的个人练习生菜虚鲲，喜欢唱，跳，rap，西瓜\n我：\nA：go away		B：躲起来\n其他任意键：来吧\n";
		cin>>ans;
		if(ans=="A"){
			cout<<"\n菜虚鲲：（懊恼）你干嘛，嗨嗨哟（脱掉外套，抱起一个西瓜，原地表演了一个鸡你太美）贝贝，oh（跳完以后就抱着西瓜走了）\n";
			ss+=5;	
		}else if(ans=="B"){
			cout<<"\n菜虚鲲：（疑惑）你干嘛，嗨嗨哟（发现没人，只好走了）\n";
			sum++; 
		}else{
			cout<<"\n菜虚鲲：我还有更多自己编歌，编曲，编舞的原创作品，喜欢的话请多多给我瓜吃吧（抱着一个瓜，没给钱就想走）\n你：\nA：拦住		其他任意键：放走\n";
			cin>>ans;
			if(ans=="A"){
				cout<<"\n菜虚鲲：（突然愤怒，一个铁山靠把你击飞）鸡你太美~（把你击飞后，他又顺了1个瓜）\n";
				sum--;
				ss+=10; 
			}else{
				cout<<"\n你放走了他，后来你越想越气，成为了小黑子\n";
				sum+=1;
				ss+=5; 
				Sleep(1000);
				system("start http//note.ms/ikun"); 
			}
		} 
		getchar();getchar();
		system("color ec");
		system("cls");
		cout<<"\n\n\n\n\n\n\n     				前方高能";
		getchar(); 
		system("cls");
		cout<<"\n第七轮\n有一个人骑着电瓶车前来卖瓜\n瓜摊噩梦-华强：老板，你这瓜多少块一斤？：\n我：\nA：go away		B：躲起来\n其他任意键：来吧\n";
		cin>>ans;
		if(ans=="A"){
			cout<<"\n华强：（吓了一跳，发现剧情不对，怀疑自己走错瓜摊了）这……（只好走了）\n";
			sum+=3;	
		}else if(ans=="B"){
			cout<<"\n华强：（MB）What's up（看四周无人，坐在瓜摊里把瓜都吃完了，你不敢上前拦他）\n";
			sum--;
			ss+=150; 
		}else{
			cout<<"\n华强：两块钱一斤？你这瓜瓜皮是金子做的还是瓜子是金子做的\n你：\nA：你是不是故意找茬		B：这瓜都送你了\nC：这瓜就是金子做的		其他任意键：保熟的瓜能不贵吗\n（本题有隐藏答案）\n";
			cin>>ans;
			if(ans=="A"){
				cout<<"\n华强：行了，别念台词了，直接来吧（抄起切瓜刀给了你一刀）\n";
				die(); 
				return 0; 
			}else if(ans=="B"){
				cout<<"\n华强：What's up？（虽然很惊讶，但也没拒绝，把瓜都带走了）\n";
				ss+=200;
			}else if(ans=="这碗鸡汤给你喝"&&dj=="鸡汤"){
				cout<<"\n华强：What's up？（虽然很惊讶，但也没拒绝，把鸡汤都喝完了，几分钟后，华强原地去世）\n";
				sum+=3; 
			}else{
				cout<<"\n华强：（毫不犹豫，抄起切瓜刀劈了一个瓜，是个生瓜蛋子）你：\nA：你劈我瓜是吧		B：你看，这瓜是金子做的吧\n其他任意键：你再劈一个看看\n";
				cin>>ans;
				if(ans=="A"){
					cout<<"\n华强：（冷笑，你发觉大事不妙，想要跑，华强从你背后给了你一刀）\n";
					die();
					return 0; 
				}else if(ans=="B"){
					cout<<"\n华强；（冷笑）行，这瓜我买了（买了两个生瓜蛋子）\n"; 
					sum+=2; 
				} else{
					cout<<"\n华强：（又劈了一个瓜，还是一个生瓜蛋子，你还想说什么，但他把你也劈了）\n";
					die();
					return 0; 
				}
			}
		}
		getchar();getchar();
		system("color e9");
		system("cls");
		int ran=random(8,28);
		cout<<"\n\n\n\n\n\n\n\n\n\n\n	           瓜摊保卫成功！\n	           得分："<<sum<<"\n	           工资："<<50+sum*ran<<"\n	           瓜摊损失："<<ss<<"\n	           总收入："<<50+sum*ran-ss<<"\n\n\n\n\n\n\n\n\n\n\n";
		m+=50+sum*ran-ss;
		if(m<0){
			system("color 07"); 
			system("cls");
			cout<<"\n你破产了\n";
			die();
			return 0; 
		}else{
			system("color 07");
			system("cls"); 
			cout<<"\n你“出色”地完成了瓜摊保卫工作，接下来你要：\nA：继续当瓜摊的保安		其他任意键：换一份更赚钱的工作\n";
			cin>>ans;
			if(ans=="A"){
				cout<<"\n你仍是一名瓜摊保安\n";
				getchar();
			} else{
				cout<<"\n你换了一份工作……（未完待续）\n";
				break; 
			}
		}	
	}
}
```

⠀⠀⠀⠀⠰⢷⢿⠄		<br>
⠀⠀⠀⠀⠀⣼⣷⣄		<br>
⠀⠀⣤⣿⣇⣿⣿⣧⣿⡄	<br>
⢴⠾⠋⠀⠀⠻⣿⣷⣿⣿⡀	<br>
O  ⠀  ⢀⣿⣿⡿⢿⠈⣿	<br>
⠀⠀⠀⢠⣿⡿⠁⠀⡊⠙	<br>
⠀⠀⠀⢿⣿⠀⠀⠹⣿		<br>
⠀⠀⠀⠀⠹⣷⡀⠀⣿⡄ 	<br>
⠀⠀⠀⠀⣀⣼⣿⠀⢈⣧	<br>

## 留言板
author:漏出鸡脚了吧！

eason[^1]：小黑子<br>
回复：你干嘛，嗨嗨哟

更新日志：<br>
2023.1.10： 0.5：测试版上线<br>
2023.1.10： 1.0：游戏第一章正式上线<br>
                    1.01：优化了游戏界面，更新了一些好康的东西<br>
                    1.02：修复已知bug<br>
2023.1.11:   1.03：重置渲染，增加彩色界面<br>
		    1.04: 优化广告界面，游戏界面<br>
2023.1.13    1.05：更新第二章瓜摊保卫战内容<br>
2023.2.17    1.05：玩不了啦！！！！！！<br>
2023.2.18     π    : 死了啦，都你害的啦，拜托<br>

[^1]: Eason 是鸡奶奶。