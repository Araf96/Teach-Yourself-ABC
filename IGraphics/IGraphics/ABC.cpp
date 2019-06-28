#include<Windows.h>
# include "iGraphics.h"
# include"gl.h"
#include<math.h>
#include<stdlib.h>



int f,c,mm=0,ff,n,count=1,ax,count1=1,count2=1;
int sou=1,ss;
int k=0,ff1,ax1;

void iDraw()
{
	
	iClear();
	
	if(mm==0){
		iShowBMP(0,0,"menu.bmp");
	}

	if(mm==1)
		iShowBMP(0,0,"learn.bmp");
		if(mm==3){

			iSetColor(255,255,255);
			iFilledRectangle(0,0,1700,1000);
			iSetColor(200,150,100);
			iFilledRectangle(0,0,30,1000);
			iFilledRectangle(0,0,1700,30);
			iFilledRectangle(0,970,1700,300);
			iFilledRectangle(1670,0,30,1000);
			if(n==1){
				iShowBMP(450, 100, "1.bmp");
			}
			if(n==2){
				iShowBMP(449, 103, "2.bmp");
			}
			if(n==3){
				iShowBMP(445, 58, "3.bmp");
			}
			if(n==4){
				iShowBMP(441, 73, "4.bmp");
			}
			if(n==5){
				iShowBMP(451, 116, "5.bmp");
			}
			if(n==6){
				iShowBMP(450, 109, "6.bmp");
			}
			if(n==7){
				iShowBMP(450, 100, "7.bmp");
			}
			if(n==8){
				iShowBMP(450, 100, "8.bmp");
			}
			if(n==9){
				iShowBMP(451, 120, "9.bmp");
			}
			if(n==10){
				iShowBMP(450, 100, "10.bmp");
			}
		}
		
		if(mm==2){
			
			iSetColor(255,255,255);
			iFilledRectangle(0,0,300,1000);

			iShowBMP(0, 900, "A.bmp");
			iShowBMP(100, 900, "b.bmp");
			iShowBMP(200, 900, "c.bmp");
			iShowBMP(0, 800, "d.bmp");
			iShowBMP(100, 800, "e.bmp");
			iShowBMP(200, 800, "f.bmp");
			iShowBMP(0, 700, "g.bmp");
			iShowBMP(100, 700, "h.bmp");
			iShowBMP(200, 700, "i.bmp");
			iShowBMP(0, 600, "j.bmp");
			iShowBMP(100, 600, "k.bmp");
			iShowBMP(200, 600, "l.bmp");
			iShowBMP(0, 500, "m.bmp");
			iShowBMP(100, 500, "n.bmp");
			iShowBMP(200, 500, "o.bmp");
			iShowBMP(0, 400, "p.bmp");
			iShowBMP(100, 400, "q.bmp");
			iShowBMP(200, 400, "r.bmp");
			iShowBMP(0, 300, "s.bmp");
			iShowBMP(100, 300, "t.bmp");
			iShowBMP(200, 300, "u.bmp");
			iShowBMP(0, 200, "v.bmp");
			iShowBMP(100, 200, "ww.bmp");
			iShowBMP(200, 200, "x.bmp");
			iShowBMP(0, 100, "y.bmp");
			iShowBMP(100, 100, "z.bmp");
			iShowBMP(190, 100, "emo.bmp");
			iShowBMP(0, 0, "end.bmp");
			iSetColor(255,255,0);
			iFilledRectangle(300,0,20,1000);

			iShowBMP(320, 0, "abcfront.bmp");
			if((f==1)||(f==2)||(f==3)||(f==4)||(f==5)||(f==6)||(f==7)||(f==8)||(f==9)||(f==10)||(f==11)||(f==12)||(f==13)||(f==14)||(f==15)||(f==16)||(f==17)||(f==18)||(f==19)||(f==20)||(f==21)||(f==22)||(f==23)||(f==24)||(f==25)||(f==26)){
				iSetColor(255,255,255);
				iFilledRectangle(350,0,1350,1000);

				iSetColor(255,255,0);
				iFilledRectangle(300,0,50,1000);
				iSetColor(255,255,0);
				iFilledRectangle(300,0,1450,50);
				iSetColor(255,255,0);
				iFilledRectangle(300,475,1700,50);
				iFilledRectangle(970,0,50,1000);
				iFilledRectangle(300,950,1700,50);
				iFilledRectangle(1650,0,50,1000);
			}

	
			
			
			if(f==1){
				
				iShowBMP(450, 560, "apple.bmp");
				iShowBMP(1100, 560, "ant.bmp");
				iShowBMP(450, 70, "alligator.bmp");
				
				iShowBMP(1100, 70, "angel.bmp");
			}
			if(f==2){
				iShowBMP(450, 590, "ball.bmp");
				
				iShowBMP(1100, 560, "banana.bmp");
				iShowBMP(450, 70, "butterfly.bmp");
				iShowBMP(1100, 70, "ballon.bmp");
			}
			if(f==3){
				iShowBMP(450, 560, "cat.bmp");
				iShowBMP(1100, 560, "crow.bmp");
				iShowBMP(450, 70, "candy.bmp");
				iShowBMP(1100, 70, "cow.bmp");
			}
			if(f==4){
				iShowBMP(450, 560, "duck.bmp");
				iShowBMP(1100, 560, "deer.bmp");
				iShowBMP(450, 70, "dog.bmp");
				iShowBMP(1100, 70, "date.bmp");
			}
			if(f==5){
				iShowBMP(450, 560, "egg.bmp");
				iShowBMP(1100, 560, "eel.bmp");
				iShowBMP(450, 70, "elephant.bmp");
				iShowBMP(1100, 70, "eagle.bmp");
			}
			if(f==6){
				iShowBMP(405, 560, "fish.bmp");
				iShowBMP(1100, 560, "frog.bmp");
				iShowBMP(450, 70, "flower.bmp");
				iShowBMP(1100, 70, "fruit.bmp");
			}
			if(f==7){
				iShowBMP(450, 560, "ginger.bmp");
				iShowBMP(1100, 540, "giraffe.bmp");
				iShowBMP(450, 50, "grape.bmp");
				iShowBMP(1100, 70, "guava.bmp");
			}
			if(f==8){
				iShowBMP(450, 560, "hen.bmp");
				iShowBMP(1100, 560, "hut.bmp");
				iShowBMP(450, 70, "honey.bmp");
				iShowBMP(1100, 45, "hare.bmp");
			}
			if(f==9){
				iShowBMP(450, 560, "ink.bmp");
				iShowBMP(1100, 560, "igloo.bmp");
				iShowBMP(450, 70, "icecream.bmp");
				iShowBMP(1100, 70, "ice.bmp");
			}
			if(f==10){
				iShowBMP(450, 560, "jasmine.bmp");
				iShowBMP(1100, 560, "jaguar.bmp");
				iShowBMP(450, 70, "jar.bmp");
				iShowBMP(1100, 70, "jojoba.bmp");
			}
			if(f==11){
				iShowBMP(450, 560, "kite.bmp");
				iShowBMP(1100, 560, "kangaroo.bmp");
				iShowBMP(450, 70, "kiwi.bmp");
				iShowBMP(1100, 70, "king.bmp");
			}
			if(f==12){
				iShowBMP(450, 540, "lemon.bmp");
				iShowBMP(1100, 560, "lily.bmp");
				iShowBMP(450, 70, "lotus.bmp");
				iShowBMP(1100, 60, "lion.bmp");
			}
			if(f==13){
				iShowBMP(450, 560, "mouse.bmp");
				iShowBMP(1100, 560, "mango.bmp");
				iShowBMP(450, 70, "melon.bmp");
				iShowBMP(1100, 70, "meat.bmp");
			}
			if(f==14){
				iShowBMP(450, 560, "nest.bmp");
				iShowBMP(1100, 560, "nectar.bmp");
				iShowBMP(450, 50, "nut.bmp");
				iShowBMP(1100, 70, "net.bmp");
			}
			if(f==15){
				iShowBMP(450, 560, "orange.bmp");
				iShowBMP(1100, 560, "olive.bmp");
				iShowBMP(450, 50, "onion.bmp");
				iShowBMP(1100, 50, "owl.bmp");
			}
			if(f==16){
				iShowBMP(450, 550, "papaya.bmp");
				iShowBMP(1140, 560, "potato.bmp");
				iShowBMP(450, 70, "penguin.bmp");
				iShowBMP(1100, 70, "pigeon.bmp");
			}
			if(f==17){
				iShowBMP(450, 540, "queen.bmp");
				iShowBMP(1100, 550, "quail.bmp");
				iShowBMP(450, 50, "quiver.bmp");
				iShowBMP(1100, 50, "quilt.bmp");
			}
			if(f==18){
				iShowBMP(450, 550, "rabbit.bmp");
				iShowBMP(1100, 550, "radish.bmp");
				iShowBMP(450, 60, "rice.bmp");
				iShowBMP(1100, 60, "rose.bmp");
			}
			if(f==19){
				iShowBMP(450, 560, "sun.bmp");
				iShowBMP(1100, 560, "strawberry.bmp");
				iShowBMP(450, 70, "sunflower.bmp");
				iShowBMP(1100, 70, "sheep.bmp");
			}
			if(f==20){
				iShowBMP(450, 560, "tomato.bmp");
				iShowBMP(1100, 560, "tiger.bmp");
				iShowBMP(450, 70, "tulip.bmp");
				iShowBMP(1100, 70, "turnip.bmp");
			}
			if(f==21){
				iShowBMP(450, 560, "umbrella.bmp");
				iShowBMP(1100, 560, "unicycle.bmp");
				iShowBMP(450, 70, "uniform.bmp");
				iShowBMP(1100, 70, "umpire.bmp");
			}
			if(f==22){
				iShowBMP(450, 560, "van.bmp");
				iShowBMP(1100, 560, "vase.bmp");
				iShowBMP(450, 70, "vegetables.bmp");
				iShowBMP(1100, 70, "violin.bmp");
			}
			if(f==23){
				iShowBMP(450, 560, "watch.bmp");
				iShowBMP(1100, 560, "wall.bmp");
				iShowBMP(450, 70, "wheel.bmp");
				iShowBMP(1100, 70, "window.bmp");
			}
			if(f==24){
				iShowBMP(450, 560, "xanthic.bmp");
				iShowBMP(1100, 560, "xyster.bmp");
				iShowBMP(450, 70, "xray.bmp");
				iShowBMP(1100, 70, "xylophone.bmp");
			}
			if(f==25){
				iShowBMP(450, 560, "yak.bmp");
				iShowBMP(1100, 560, "yolk.bmp");
				iShowBMP(450, 70, "yarn.bmp");
				iShowBMP(1100, 70, "yoyo.bmp");
			}
			if(f==26){
				iShowBMP(450, 560, "zebra.bmp");
				iShowBMP(1100, 560, "zoo.bmp");
				iShowBMP(450, 70, "zip.bmp");
				iShowBMP(1100, 70, "zucchini1.bmp");
			}
			if(f==27){
				iSetColor(255,255,255);
				iFilledRectangle(0,0,1700,1000);
				iShowBMP(450, 100, "abcend.bmp");

			}
		}
		if(mm==4){
			iSetColor(0,101,50);
			iFilledRectangle(0,0,1700,1000);
			iShowBMP(350,100,"examselect.bmp");
			
		}
		if(mm==5){
			iSetColor(255,255,255);
			iFilledRectangle(0,0,1700,1000);
			iSetColor(200,100,100);
			iFilledRectangle(0,0,50,1000);
			iFilledRectangle(0,0,1700,50);
			iFilledRectangle(0,950,1700,50);
			iFilledRectangle(1650,0,50,1000);
			iFilledRectangle(1060,0,50,1000);
			iFilledRectangle(40,300,1050,20);
			iFilledRectangle(550,0,20,320);
			iFilledRectangle(40,162,1050,20);
			iShowBMP(1200,60,"prev.bmp");
			iShowBMP(1500,60,"next.bmp");
			iShowBMP(1250,550,"result.bmp");
			iShowBMP(50,325,"1tt.bmp");
			if(ax==1){
				iShowBMP(1250,800,"qus.bmp");
				iShowBMP(1375,725,"11.bmp");
				iShowBMP(350,450,"sunx.bmp");
				iShowBMP(280,210,"a1.bmp");
				iShowBMP(280,75,"q1.bmp");
				iShowBMP(780,210,"s1.bmp");
				iShowBMP(780,75,"f1.bmp");
				if(ff==2){
					
					iShowBMP(1250,450,"correct.bmp");
					iShowBMP(1325,275,"happy.bmp");
				}
				else if(ff==1){
					iShowBMP(1250,450,"wrong.bmp");
					iShowBMP(1325,275,"sad.bmp");
				}
				
			}
			if(ax==2){
				iShowBMP(350,450,"alligatorx.bmp");
				iShowBMP(1250,800,"qus.bmp");
				iShowBMP(1375,725,"12.bmp");
				iShowBMP(280,210,"j1.bmp");
				iShowBMP(280,75,"a1.bmp");
				iShowBMP(780,210,"p1.bmp");
				iShowBMP(780,75,"l1.bmp");
				if(ff==2){
					iShowBMP(1250,450,"correct.bmp");
					iShowBMP(1325,275,"happy.bmp");
				}
				else if(ff==1){
					iShowBMP(1250,450,"wrong.bmp");
					iShowBMP(1325,275,"sad.bmp");
				}
			}
			if(ax==3){
				iShowBMP(350,450,"orangex.bmp");
				iShowBMP(1250,800,"qus.bmp");
				iShowBMP(1375,725,"13.bmp");
				iShowBMP(280,210,"t1.bmp");
				iShowBMP(280,75,"i1.bmp");
				iShowBMP(780,210,"o1.bmp");
				iShowBMP(780,75,"s1.bmp");
				if(ff==2){
					iShowBMP(1250,450,"correct.bmp");
					iShowBMP(1325,275,"happy.bmp");
				}
				else if(ff==1){
					iShowBMP(1250,450,"wrong.bmp");
					iShowBMP(1325,275,"sad.bmp");
				}
			}
			if(ax==4){
				iShowBMP(350,450,"pigeonx.bmp");
				iShowBMP(1250,800,"qus.bmp");
				iShowBMP(1375,725,"14.bmp");
				iShowBMP(280,210,"p1.bmp");
				iShowBMP(280,75,"s1.bmp");
				iShowBMP(780,210,"r1.bmp");
				iShowBMP(780,75,"z1.bmp");
				if(ff==2){
					iShowBMP(1250,450,"correct.bmp");
					iShowBMP(1325,275,"happy.bmp");
				}
				else if(ff==1){
					iShowBMP(1250,450,"wrong.bmp");
					iShowBMP(1325,275,"sad.bmp");
				}
			}
			if(ax==5){
				iShowBMP(350,450,"tomatox.bmp");
				iShowBMP(1250,800,"qus.bmp");
				iShowBMP(1375,725,"15.bmp");
				iShowBMP(280,210,"o1.bmp");
				iShowBMP(280,75,"x1.bmp");
				iShowBMP(780,210,"t1.bmp");
				iShowBMP(780,75,"k1.bmp");
				if(ff==2){
					iShowBMP(1250,450,"correct.bmp");
					iShowBMP(1325,275,"happy.bmp");
				}
				else if(ff==1){
					iShowBMP(1250,450,"wrong.bmp");
					iShowBMP(1325,275,"sad.bmp");
				}
			}
			if(ax==6){
				iShowBMP(350,450,"nestx.bmp");
				iShowBMP(1250,800,"qus.bmp");
				iShowBMP(1375,725,"16.bmp");
				iShowBMP(280,210,"n1.bmp");
				iShowBMP(280,75,"s1.bmp");
				iShowBMP(780,210,"h1.bmp");
				iShowBMP(780,75,"c1.bmp");
				if(ff==2){
					iShowBMP(1250,450,"correct.bmp");
					iShowBMP(1325,275,"happy.bmp");
				}
				else if(ff==1){
					iShowBMP(1250,450,"wrong.bmp");
					iShowBMP(1325,275,"sad.bmp");
				}
			}
			if(ax==7){
				iShowBMP(350,450,"eggx.bmp");
				iShowBMP(1250,800,"qus.bmp");
				iShowBMP(1375,725,"17.bmp");
				iShowBMP(280,210,"a1.bmp");
				iShowBMP(280,75,"g1.bmp");
				iShowBMP(780,210,"e1.bmp");
				iShowBMP(780,75,"p1.bmp");
				if(ff==2){
					iShowBMP(1250,450,"correct.bmp");
					iShowBMP(1325,275,"happy.bmp");
				}
				else if(ff==1){
					iShowBMP(1250,450,"wrong.bmp");
					iShowBMP(1325,275,"sad.bmp");
				}
			}
			if(ax==8){
				iShowBMP(350,450,"datex.bmp");
				iShowBMP(1250,800,"qus.bmp");
				iShowBMP(1375,725,"18.bmp");
				iShowBMP(280,210,"r1.bmp");
				iShowBMP(280,75,"d1.bmp");
				iShowBMP(780,210,"s1.bmp");
				iShowBMP(780,75,"a1.bmp");
				if(ff==2){
					iShowBMP(1250,450,"correct.bmp");
					iShowBMP(1325,275,"happy.bmp");
				}
				else if(ff==1){
					iShowBMP(1250,450,"wrong.bmp");
					iShowBMP(1325,275,"sad.bmp");
				}
			}
			if(ax==9){
				iShowBMP(350,450,"mangox.bmp");
				iShowBMP(1250,800,"qus.bmp");
				iShowBMP(1375,725,"19.bmp");
				iShowBMP(280,210,"o1.bmp");
				iShowBMP(280,75,"d1.bmp");
				iShowBMP(780,210,"m1.bmp");
				iShowBMP(780,75,"i1.bmp");
				if(ff==2){
					iShowBMP(1250,450,"correct.bmp");
					iShowBMP(1325,275,"happy.bmp");
				}
				else if(ff==1){
					iShowBMP(1250,450,"wrong.bmp");
					iShowBMP(1325,275,"sad.bmp");
				}
			}
			if(ax==10){
				iShowBMP(350,450,"guavax.bmp");
				iShowBMP(1250,800,"qus.bmp");
				iShowBMP(1375,725,"110.bmp");
				iShowBMP(280,210,"g1.bmp");
				iShowBMP(280,75,"q1.bmp");
				iShowBMP(780,210,"s1.bmp");
				iShowBMP(780,75,"f1.bmp");
				if(ff==2){
					iShowBMP(1250,450,"correct.bmp");
					iShowBMP(1325,275,"happy.bmp");
				}
				else if(ff==1){
					iShowBMP(1250,450,"wrong.bmp");
					iShowBMP(1325,275,"sad.bmp");
				}
			}
		}
		if(mm==6){
			iSetColor(255,255,255);
			iFilledRectangle(0,0,1700,1000);
			iSetColor(200,100,100);
			iFilledRectangle(0,0,50,1000);
			iFilledRectangle(0,0,1700,50);
			iFilledRectangle(0,950,1700,50);
			iFilledRectangle(1650,0,50,1000);
			iFilledRectangle(1060,0,50,1000);
			iFilledRectangle(40,300,1050,20);
			iFilledRectangle(550,0,20,320);
			iFilledRectangle(40,162,1050,20);
			iShowBMP(1200,60,"prev.bmp");
			iShowBMP(1500,60,"next.bmp");
			iShowBMP(1250,550,"result.bmp");
			if(ax1==1){
				iShowBMP(1250,800,"qus.bmp");
				iShowBMP(1375,725,"11.bmp");
				iShowBMP(350,450,"n4.bmp");
				iShowBMP(280,205,"12.bmp");
				iShowBMP(280,70,"110.bmp");
				iShowBMP(780,205,"14.bmp");
				iShowBMP(780,70,"11.bmp");
				iShowBMP(50,325,"q11.bmp");
				if(ff1==2){
					
					iShowBMP(1250,450,"correct.bmp");
					iShowBMP(1325,275,"happy.bmp");
				}
				else if(ff1==1){
					iShowBMP(1250,450,"wrong.bmp");
					iShowBMP(1325,275,"sad.bmp");
				}
				
			}
			if(ax1==2){
				iShowBMP(350,450,"n9.bmp");
				iShowBMP(1250,800,"qus.bmp");
				iShowBMP(1375,725,"12.bmp");
				iShowBMP(280,205,"18.bmp");
				iShowBMP(280,70,"19.bmp");
				iShowBMP(780,205,"14.bmp");
				iShowBMP(780,70,"110.bmp");
				iShowBMP(50,325,"q2.bmp");
				if(ff1==2){
					iShowBMP(1250,450,"correct.bmp");
					iShowBMP(1325,275,"happy.bmp");
				}
				else if(ff1==1){
					iShowBMP(1250,450,"wrong.bmp");
					iShowBMP(1325,275,"sad.bmp");
				}
			}
			if(ax1==3){
				iShowBMP(350,450,"n11.bmp");
				iShowBMP(1250,800,"qus.bmp");
				iShowBMP(1375,725,"13.bmp");
				iShowBMP(280,205,"12.bmp");
				iShowBMP(280,70,"14.bmp");
				iShowBMP(780,205,"11.bmp");
				iShowBMP(780,70,"19.bmp");
				iShowBMP(50,325,"q3.bmp");
				if(ff1==2){
					iShowBMP(1250,450,"correct.bmp");
					iShowBMP(1325,275,"happy.bmp");
				}
				else if(ff1==1){
					iShowBMP(1250,450,"wrong.bmp");
					iShowBMP(1325,275,"sad.bmp");
				}
			}
			if(ax1==4){
				iShowBMP(350,450,"n3.bmp");
				iShowBMP(1250,800,"qus.bmp");
				iShowBMP(1375,725,"14.bmp");
				iShowBMP(280,205,"13.bmp");
				iShowBMP(280,70,"11.bmp");
				iShowBMP(780,205,"14.bmp");
				iShowBMP(780,70,"110.bmp");
				iShowBMP(50,325,"q4.bmp");
				if(ff1==2){
					iShowBMP(1250,450,"correct.bmp");
					iShowBMP(1325,275,"happy.bmp");
				}
				else if(ff1==1){
					iShowBMP(1250,450,"wrong.bmp");
					iShowBMP(1325,275,"sad.bmp");
				}
			}
			if(ax1==5){
				iShowBMP(350,450,"n6.bmp");
				iShowBMP(1250,800,"qus.bmp");
				iShowBMP(1375,725,"15.bmp");
				iShowBMP(280,205,"11.bmp");
				iShowBMP(280,70,"15.bmp");
				iShowBMP(780,205,"16.bmp");
				iShowBMP(780,70,"14.bmp");
				iShowBMP(50,325,"q5.bmp");
				if(ff1==2){
					iShowBMP(1250,450,"correct.bmp");
					iShowBMP(1325,275,"happy.bmp");
				}
				else if(ff1==1){
					iShowBMP(1250,450,"wrong.bmp");
					iShowBMP(1325,275,"sad.bmp");
				}
			}
			if(ax1==6){
				iShowBMP(350,450,"n8.bmp");
				iShowBMP(1250,800,"qus.bmp");
				iShowBMP(1375,725,"16.bmp");
				iShowBMP(280,205,"18.bmp");
				iShowBMP(280,70,"16.bmp");
				iShowBMP(780,205,"110.bmp");
				iShowBMP(780,70,"15.bmp");
				iShowBMP(50,325,"q6.bmp");
				if(ff1==2){
					iShowBMP(1250,450,"correct.bmp");
					iShowBMP(1325,275,"happy.bmp");
				}
				else if(ff1==1){
					iShowBMP(1250,450,"wrong.bmp");
					iShowBMP(1325,275,"sad.bmp");
				}
			}
			if(ax1==7){
				iShowBMP(350,450,"n5.bmp");
				iShowBMP(1250,800,"qus.bmp");
				iShowBMP(1375,725,"17.bmp");
				iShowBMP(280,205,"110.bmp");
				iShowBMP(280,70,"11.bmp");
				iShowBMP(780,205,"15.bmp");
				iShowBMP(780,70,"19.bmp");
				iShowBMP(50,325,"q7.bmp");
				if(ff1==2){
					iShowBMP(1250,450,"correct.bmp");
					iShowBMP(1325,275,"happy.bmp");
				}
				else if(ff1==1){
					iShowBMP(1250,450,"wrong.bmp");
					iShowBMP(1325,275,"sad.bmp");
				}
			}
			if(ax1==8){
				iShowBMP(350,450,"n7.bmp");
				iShowBMP(1250,800,"qus.bmp");
				iShowBMP(1375,725,"18.bmp");
				iShowBMP(280,205,"110.bmp");
				iShowBMP(280,70,"17.bmp");
				iShowBMP(780,205,"19.bmp");
				iShowBMP(780,70,"15.bmp");
				iShowBMP(50,325,"q8.bmp");
				if(ff1==2){
					iShowBMP(1250,450,"correct.bmp");
					iShowBMP(1325,275,"happy.bmp");
				}
				else if(ff1==1){
					iShowBMP(1250,450,"wrong.bmp");
					iShowBMP(1325,275,"sad.bmp");
				}
			}
			if(ax1==9){
				iShowBMP(350,450,"n10.bmp");
				iShowBMP(1250,800,"qus.bmp");
				iShowBMP(1375,725,"19.bmp");
				iShowBMP(280,205,"15.bmp");
				iShowBMP(280,70,"11.bmp");
				iShowBMP(780,205,"110.bmp");
				iShowBMP(780,70,"18.bmp");
				iShowBMP(50,325,"q9.bmp");
				if(ff1==2){
					iShowBMP(1250,450,"correct.bmp");
					iShowBMP(1325,275,"happy.bmp");
				}
				else if(ff1==1){
					iShowBMP(1250,450,"wrong.bmp");
					iShowBMP(1325,275,"sad.bmp");
				}
			}
			if(ax1==10){
				iShowBMP(350,450,"n2.bmp");
				iShowBMP(1250,800,"qus.bmp");
				iShowBMP(1375,725,"110.bmp");
				iShowBMP(280,205,"12.bmp");
				iShowBMP(280,70,"17.bmp");
				iShowBMP(780,205,"15.bmp");
				iShowBMP(780,70,"110.bmp");
				iShowBMP(50,325,"q10.bmp");
				if(ff1==2){
					iShowBMP(1250,450,"correct.bmp");
					iShowBMP(1325,275,"happy.bmp");
				}
				else if(ff1==1){
					iShowBMP(1250,450,"wrong.bmp");
					iShowBMP(1325,275,"sad.bmp");
				}
			}
		}
		if(mm!=0){
			iShowBMP2(1530,950,"mainmenu.bmp",0);
		}
		iSetColor(255,0,0);
		iText(1450,20,"Press \"X\" to Quit",GLUT_BITMAP_HELVETICA_18);

		
	}


void iMouseMove(int mx, int my)
{
	
}


void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if((mx>=1230 && my<=1355)  && (my>=975 && my<=990)){
			mm=0;
		}
		
		if((mx>=435 && mx<=625) && (my>=550 && my<=635) && mm!=4 && mm!=2 && mm!=3 && mm!=5 && mm!=6){
			mm=1;//learn
		}

		if((mx>=416 && mx<=816) && (my>=541 && my<=622) && mm!=2 && mm!=1 && mm!=3 && mm!=5 && mm!=0 && mm==4 && mm!=0){
			mm=6;
				
		}

		if((mx>=665 && mx<=833) && (my>=550 && my<=633) && mm!=1 && mm!=2 && mm!=3 && mm!=5 && mm!=6 && mm==0){
			mm=4;//quiz
			
		}

		if((mx>=415 && mx<=818) && (my>=756 && my<=832) && mm!=2 && mm!=1 && mm!=3 && mm!=6 && mm!=0){
			mm=5;
				
		}

		

			if(((mx>=412 && mx<=678) && (my>=629 && my<=724)) && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0){
				mm=2;
			}
			if((mx>=736 && mx<=981) && (my>=629 && my<=724) && mm!=2 && mm!=4 && mm!=5 && mm!=6 && mm!=0){
				mm=3;
				
			}
			

			if((mx>=1206 && mx<=1300) && (my>=360 && my<=385) && mm==5){
				if(count1>=10){
					count1=count1;
				}
				else{
					count1=count1+1;
				}

			}
			else if((mx>=964 && mx<=1055) && (my>=360 && my<=385) && mm==5){
				if(count1>1){
					count1=count1-1;
				}
				else{
					count1=count1;
				}
			}
			if((count1==1)){
				ax=1;
				ff=0;
			}
			if(count1==2){
				ax=2;
				ff=0;
			}
			if(count1==3){
				ax=3;
				ff=0;
			}
			if(count1==4){
				ax=4;
				ff=0;
			}
			if(count1==5){
				ax=5;
				ff=0;
			}
			if(count1==6){
				ax=6;
				ff=0;
			}
			if(count1==7){
				ax=7;
				ff=0;
			}
			if(count1==8){
				ax=8;
				ff=0;
			}
			if(count1==9){
				ax=9;
				ff=0;
			}
			if(count1==10){
				ax=10;
				ff=0;
			}
			if((mx>=40 && mx<=442) && (my>=423 && my <=508) && ax==1){
				ff=1;
			}
			if((mx>=40 && mx<=442) && (my>=330 && my <=409) && ax==1){
				ff=1;
			}
			if((mx>=458 && mx<=853) && (my>=423 && my <=508) && ax==1){
				ff=2;
			}
			if((mx>=458&& mx<=853) && (my>=330 && my <=409) && ax==1){
				ff=1;
			}
			if((mx>=40 && mx<=442) && (my>=423 && my <=508) && ax==2){
				ff=1;
			}
			if((mx>=40 && mx<=442) && (my>=330 && my <=409) && ax==2){
				ff=2;
			}
			if((mx>=458 && mx<=853) && (my>=423 && my <=508) && ax==2){
				ff=1;
			}
			if((mx>=458 && mx<=853) && (my>=330 && my <=409) && ax==2){
				ff=1;
			}
			if((mx>=40 && mx<=442) && (my>=423 && my <=508) && ax==3){
				ff=1;
			}
			if((mx>=40 && mx<=442) && (my>=330 && my <=409) && ax==3){
				ff=1;
			}
			if((mx>=458 && mx<=853) && (my>=423 && my <=508) && ax==3){
				ff=2;
			}
			if((mx>=458 && mx<=853) && (my>=330 && my <=409) && ax==3){
				ff=1;
			}
			if((mx>=40 && mx<=442) && (my>=423 && my <=508) && ax==4){
				ff=2;
			}
			if((mx>=40 && mx<=442) && (my>=330 && my <=409) && ax==4){
				ff=1;
			}
			if((mx>=458 && mx<=853) && (my>=423 && my <=508) && ax==4){
				ff=1;
			}
			if((mx>=458 && mx<=853) && (my>=330 && my <=409) && ax==4){
				ff=1;
			}
			if((mx>=40 && mx<=442) && (my>=423 && my <=508) && ax==5){
				ff=1;
			}
			if((mx>=40 && mx<=442) && (my>=330 && my <=409) && ax==5){
				ff=1;
			}
			if((mx>=458 && mx<=853) && (my>=423 && my <=508) && ax==5){
				ff=2;
			}
			if((mx>=458 && mx<=853) && (my>=330 && my <=409) && ax==5){
				ff=1;
			}
			if((mx>=40 && mx<=442) && (my>=423 && my <=508) && ax==6){
				ff=2;
			}
			if((mx>=40 && mx<=442) && (my>=330 && my <=409) && ax==6){
				ff=1;
			}
			if((mx>=458 && mx<=853) && (my>=423 && my <=508) && ax==6){
				ff=1;
			}
			if((mx>=458 && mx<=853) && (my>=330 && my <=409) && ax==6){
				ff=1;
			}
			if((mx>=40 && mx<=442) && (my>=423 && my <=508) && ax==7){
				ff=1;
			}
			if((mx>=40 && mx<=442) && (my>=330 && my <=409) && ax==7){
				ff=1;
			}
			if((mx>=458 && mx<=853) && (my>=423 && my <=508) && ax==7){
				ff=2;
			}
			if((mx>=458 && mx<=853) && (my>=330 && my <=409) && ax==7){
				ff=1;
			}
			if((mx>=40 && mx<=442) && (my>=423 && my <=508) && ax==8){
				ff=1;
			}
			if((mx>=40 && mx<=442) && (my>=330 && my <=409) && ax==8){
				ff=2;
			}
			if((mx>=458 && mx<=853) && (my>=423 && my <=508) && ax==8){
				ff=1;
			}
			if((mx>=458 && mx<=853) && (my>=330 && my <=409) && ax==8){
				ff=1;
			}
			if((mx>=40 && mx<=442) && (my>=423 && my <=508) && ax==9){
				ff=1;
			}
			if((mx>=40 && mx<=442) && (my>=330 && my <=409) && ax==9){
				ff=1;
			}
			if((mx>=458 && mx<=853) && (my>=423 && my <=508) && ax==9){
				ff=2;
			}
			if((mx>=458 && mx<=853) && (my>=330 && my <=409) && ax==9){
				ff=1;
			}
			if((mx>=40 && mx<=442) && (my>=423 && my <=508) && ax==10){
				ff=2;
			}
			if((mx>=40 && mx<=442) && (my>=330 && my <=409) && ax==10){
				ff=1;
			}
			if((mx>=458 && mx<=853) && (my>=423 && my <=508) && ax==10){
				ff=1;
			}
			if((mx>=458 && mx<=853) && (my>=330 && my <=409) && ax==10){
				ff=1;
			}
			if((mx>=1206 && mx<=1300) && (my>=360 && my<=385) && mm==6){
				if(count2>=10){
					count2=count2;
				}
				else{
					count2=count2+1;
				}

			}
			else if((mx>=964 && mx<=1055) && (my>=360 && my<=385) && mm==6){
				if(count2>1){
					count2=count2-1;
				}
				else{
					count2=count2;
				}
			}
			if((count2==1)){
				ax1=1;
				ff1=0;
			}
			if(count2==2){
				ax1=2;
				ff1=0;
			}
			if(count2==3){
				ax1=3;
				ff1=0;
			}
			if(count2==4){
				ax1=4;
				ff1=0;
			}
			if(count2==5){
				ax1=5;
				ff1=0;
			}
			if(count2==6){
				ax1=6;
				ff1=0;
			}
			if(count2==7){
				ax1=7;
				ff1=0;
			}
			if(count2==8){
				ax1=8;
				ff1=0;
			}
			if(count2==9){
				ax1=9;
				ff1=0;
			}
			if(count2==10){
				ax1=10;
				ff1=0;
			}
			if((mx>=40 && mx<=442) && (my>=423 && my <=508) && ax1==1){
				ff1=1;
			}
			if((mx>=40 && mx<=442) && (my>=330 && my <=409) && ax1==1){
				ff1=1;
			}
			if((mx>=458 && mx<=853) && (my>=423 && my <=508) && ax1==1){
				ff1=2;
			}
			if((mx>=458&& mx<=853) && (my>=330 && my <=409) && ax1==1){
				ff1=1;
			}
			if((mx>=40 && mx<=442) && (my>=423 && my <=508) && ax1==2){
				ff1=1;
			}
			if((mx>=40 && mx<=442) && (my>=330 && my <=409) && ax1==2){
				ff1=2;
			}
			if((mx>=458 && mx<=853) && (my>=423 && my <=508) && ax1==2){
				ff1=1;
			}
			if((mx>=458 && mx<=853) && (my>=330 && my <=409) && ax1==2){
				ff1=1;
			}
			if((mx>=40 && mx<=442) && (my>=423 && my <=508) && ax1==3){
				ff1=1;
			}
			if((mx>=40 && mx<=442) && (my>=330 && my <=409) && ax1==3){
				ff1=1;
			}
			if((mx>=458 && mx<=853) && (my>=423 && my <=508) && ax1==3){
				ff1=2;
			}
			if((mx>=458 && mx<=853) && (my>=330 && my <=409) && ax1==3){
				ff1=1;
			}
			if((mx>=40 && mx<=442) && (my>=423 && my <=508) && ax1==4){
				ff1=2;
			}
			if((mx>=40 && mx<=442) && (my>=330 && my <=409) && ax1==4){
				ff1=1;
			}
			if((mx>=458 && mx<=853) && (my>=423 && my <=508) && ax1==4){
				ff1=1;
			}
			if((mx>=458 && mx<=853) && (my>=330 && my <=409) && ax1==4){
				ff1=1;
			}
			if((mx>=40 && mx<=442) && (my>=423 && my <=508) && ax1==5){
				ff1=1;
			}
			if((mx>=40 && mx<=442) && (my>=330 && my <=409) && ax1==5){
				ff1=1;
			}
			if((mx>=458 && mx<=853) && (my>=423 && my <=508) && ax1==5){
				ff1=2;
			}
			if((mx>=458 && mx<=853) && (my>=330 && my <=409) && ax1==5){
				ff1=1;
			}
			if((mx>=40 && mx<=442) && (my>=423 && my <=508) && ax1==6){
				ff1=2;
			}
			if((mx>=40 && mx<=442) && (my>=330 && my <=409) && ax1==6){
				ff1=1;
			}
			if((mx>=458 && mx<=853) && (my>=423 && my <=508) && ax1==6){
				ff1=1;
			}
			if((mx>=458 && mx<=853) && (my>=330 && my <=409) && ax1==6){
				ff1=1;
			}
			if((mx>=40 && mx<=442) && (my>=423 && my <=508) && ax1==7){
				ff1=1;
			}
			if((mx>=40 && mx<=442) && (my>=330 && my <=409) && ax1==7){
				ff1=1;
			}
			if((mx>=458 && mx<=853) && (my>=423 && my <=508) && ax1==7){
				ff1=2;
			}
			if((mx>=458 && mx<=853) && (my>=330 && my <=409) && ax1==7){
				ff1=1;
			}
			if((mx>=40 && mx<=442) && (my>=423 && my <=508) && ax1==8){
				ff1=1;
			}
			if((mx>=40 && mx<=442) && (my>=330 && my <=409) && ax1==8){
				ff1=2;
			}
			if((mx>=458 && mx<=853) && (my>=423 && my <=508) && ax1==8){
				ff1=1;
			}
			if((mx>=458 && mx<=853) && (my>=330 && my <=409) && ax1==8){
				ff1=1;
			}
			if((mx>=40 && mx<=442) && (my>=423 && my <=508) && ax1==9){
				ff1=1;
			}
			if((mx>=40 && mx<=442) && (my>=330 && my <=409) && ax1==9){
				ff1=1;
			}
			if((mx>=458 && mx<=853) && (my>=423 && my <=508) && ax1==9){
				ff1=2;
			}
			if((mx>=458 && mx<=853) && (my>=330 && my <=409) && ax1==9){
				ff1=1;
			}
			if((mx>=40 && mx<=442) && (my>=423 && my <=508) && ax1==10){
				ff1=2;
			}
			if((mx>=40 && mx<=442) && (my>=330 && my <=409) && ax1==10){
				ff1=1;
			}
			if((mx>=458 && mx<=853) && (my>=423 && my <=508) && ax1==10){
				ff1=1;
			}
			if((mx>=458 && mx<=853) && (my>=330 && my <=409) && ax1==10){
				ff1=1;
			}
			if((mx>=281 && mx<=780) && (my>=330 && my<=630)){
				k=1;
			}
			if(mm==3){
				
				if((mx>=1007 && mx<=1081) && (my>=496 && my<=544)){
					if(count>=10){
						count=count;
					}
					else{
						count=count+1;
					}
				}
				else if((mx>=418 && mx<=492) && (my>=470 && my<=523)){
					
					if(count>1){
						count=count-1;
					}
					else{
						count=count;
					}
				}
				
				
				if((count==1)||(count==0)){
					n=1;
				}
				if(count==2){
					n=2;
				}
				if(count==3){
					n=3;
				}
				if(count==4){
					n=4;
				}
				if(count==5){
					n=5;
				}
				if(count==6){
					n=6;
				}
				if(count==7){
					n=7;
				}
				if(count==8){
					n=8;
				}
				if(count==9){
					n=9;
				}
				if(count==10){
					n=10;
				}
			}
			if(mm==2){
				if((mx>=0 && mx<80) && (my>930 && my<=1000)){
					f=1;//a
				}
				if((mx>=80 && mx<160) && (my>930 && my<=1000)){
					f=2;//b
				}
				if((mx>=160 && mx<240) && (my>930 && my<=1000)){
					f=3;//c
				}
				if((mx>=0 && mx<80) && (my>860 && my<=930)){
					f=4;//d
				}
				if((mx>=80 && mx<160) && (my>860 && my<=930)){
					f=5;//e
				}
				if((mx>=160 && mx<240) && (my>860 && my<=930)){
					f=6;//f
				}
				if((mx>=0 && mx<80) && (my>790 && my<=860)){
					f=7;//g
				}
				if((mx>=80 && mx<160) && (my>790 && my<=860)){
					f=8;//h
				}
				if((mx>=160 && mx<240) && (my>790 && my<=860)){
					f=9;//i
				}
				if((mx>=0 && mx<80) && (my>720 && my<=790)){
					f=10;//j
				}
				if((mx>=80 && mx<160) && (my>720 && my<=790)){
					f=11;//k
				}
				if((mx>=160 && mx<240) && (my>720 && my<=790)){
					f=12;//l
				}
				if((mx>=0 && mx<80) && (my>650 && my<=720)){
					f=13;//m
				}
				if((mx>=80 && mx<160) && (my>650 && my<=720)){
					f=14;//n
				}
				if((mx>=160 && mx<240) && (my>650 && my<=720)){
					f=15;//o
				}
				if((mx>=0 && mx<80) && (my>580 && my<=650)){
					f=16;//p
				}
				if((mx>=80 && mx<160) && (my>580 && my<=650)){
					f=17;//q
				}
				if((mx>=160 && mx<240) && (my>580 && my<=650)){
					f=18;//r
				}
				if((mx>=0 && mx<80) && (my>510 && my<=580)){
					f=19;//s
				}
				if((mx>=80 && mx<160) && (my>510 && my<=580)){
					f=20;//t
				}
				if((mx>=160 && mx<240) && (my>510 && my<=580)){
					f=21;//u
				}
				if((mx>=0 && mx<80) && (my>440 && my<=510)){
					f=22;//v
				}
				if((mx>=80 && mx<160) && (my>440 && my<=510)){
					f=23;//w
				}
				if((mx>=160 && mx<240) && (my>440 && my<=510)){
					f=24;//x
				}
				if((mx>=0 && mx<80) && (my>370 && my<=440)){
					f=25;//y
				}
				if((mx>=80 && mx<160) && (my>370 && my<=440)){
					f=26;//z
				}
				if((mx>=0 && mx<240) && (my>0 && my<=370)){
					f=27;
				}
			}
			
			if((mx>=281 && mx<=780) && (my>=665 && my<=964)  && mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0 && f==1){
				srand(time(NULL));
				PlaySound("apple.wav",NULL,SND_ASYNC);
			}
			if((mx>=820 && mx<=1327) && (my>=665 && my<=965)  && mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0  && f==1){
					srand(time(NULL));
					PlaySound("ant.wav",NULL,SND_ASYNC);
		
				}
			
			if((mx>=281 && mx<=780) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0 ) && f==1){
					srand(time(NULL));
					PlaySound("alligator.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=820 && mx<=1327) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==1){
					srand(time(NULL));
					PlaySound("angel.wav",NULL,SND_ASYNC);
				}
				//B
				if((mx>=281 && mx<=780) && (my>=665 && my<=964)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==2){
					srand(time(NULL));
					PlaySound("ball.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=820 && mx<=1327) && (my>=665 && my<=965)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==2){
					srand(time(NULL));
					PlaySound("banana.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=281 && mx<=780) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==2){
					srand(time(NULL));
					PlaySound("butterfly.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=820 && mx<=1327) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==2){
					srand(time(NULL));
					PlaySound("balloon.wav",NULL,SND_ASYNC);
				}
				//c
				if((mx>=281 && mx<=780) && (my>=665 && my<=964)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==3){
					srand(time(NULL));
					PlaySound("cat.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=820 && mx<=1327) && (my>=665 && my<=965)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==3){
					srand(time(NULL));
					PlaySound("crow.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=281 && mx<=780) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==3){
					srand(time(NULL));
					PlaySound("candy.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=820 && mx<=1327) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==3){
					srand(time(NULL));
					PlaySound("cow.wav",NULL,SND_ASYNC);
				}
				//d
				if((mx>=281 && mx<=780) && (my>=665 && my<=964)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0 ) && f==4){
					srand(time(NULL));
					PlaySound("duck.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=820 && mx<=1327) && (my>=665 && my<=965)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==4){
					srand(time(NULL));
					PlaySound("deer.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=281 && mx<=780) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==4){
					srand(time(NULL));
					PlaySound("dog.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=820 && mx<=1327) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==4){
					srand(time(NULL));
					PlaySound("date.wav",NULL,SND_ASYNC);
				}
				//e
				if((mx>=281 && mx<=780) && (my>=665 && my<=964)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==5){
					srand(time(NULL));
					PlaySound("egg.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=820 && mx<=1327) && (my>=665 && my<=965)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==5){
					srand(time(NULL));
					PlaySound("eel.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=281 && mx<=780) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==5){
					srand(time(NULL));
					PlaySound("elephant.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=820 && mx<=1327) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==5){
					srand(time(NULL));
					PlaySound("eagle.wav",NULL,SND_ASYNC);
				}
				//f
				if((mx>=281 && mx<=780) && (my>=665 && my<=964)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==6){
				srand(time(NULL));
				PlaySound("fish.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=820 && mx<=1327) && (my>=665 && my<=965)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==6){
					srand(time(NULL));
					PlaySound("frog.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=281 && mx<=780) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==6){
					srand(time(NULL));
					PlaySound("flower.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=820 && mx<=1327) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==6){
					srand(time(NULL));
					PlaySound("fruit.wav",NULL,SND_ASYNC);
				}
				//g
				if((mx>=281 && mx<=780) && (my>=665 && my<=964)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==7){
					srand(time(NULL));
					PlaySound("ginger.wav",NULL,SND_ASYNC);
				}
				if((mx>=820 && mx<=1327) && (my>=665 && my<=965)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==7){
					srand(time(NULL));
					PlaySound("giraffe.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=281 && mx<=780) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==7){
					srand(time(NULL));
					PlaySound("grape.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=820 && mx<=1327) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==7){
					srand(time(NULL));
					PlaySound("guava.wav",NULL,SND_ASYNC);
				}
				//h
				if((mx>=281 && mx<=780) && (my>=665 && my<=964)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==8){
					srand(time(NULL));
					PlaySound("hen.wav",NULL,SND_ASYNC);
				}
				if((mx>=820 && mx<=1327) && (my>=665 && my<=965)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==8){
					srand(time(NULL));
					PlaySound("hut.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=281 && mx<=780) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==8){
					srand(time(NULL));
					PlaySound("honey.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=820 && mx<=1327) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==8){
					srand(time(NULL));
					PlaySound("hare.wav",NULL,SND_ASYNC);
				}
				//i
				if((mx>=281 && mx<=780) && (my>=665 && my<=964)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==9){
					srand(time(NULL));
					PlaySound("ink.wav",NULL,SND_ASYNC);
				}
				if((mx>=820 && mx<=1327) && (my>=665 && my<=965)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==9){
					srand(time(NULL));
					PlaySound("igloo.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=281 && mx<=780) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==9){
					srand(time(NULL));
					PlaySound("ice-cream.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=820 && mx<=1327) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==9){
					srand(time(NULL));
					PlaySound("ice.wav",NULL,SND_ASYNC);
				}
				//j
				if((mx>=281 && mx<=780) && (my>=665 && my<=964)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==10){
					srand(time(NULL));
					PlaySound("jasmine.wav",NULL,SND_ASYNC);
				}
				if((mx>=820 && mx<=1327) && (my>=665 && my<=965)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==10){
					srand(time(NULL));
					PlaySound("jaguar.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=281 && mx<=780) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==10){
					srand(time(NULL));
					PlaySound("jar.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=820 && mx<=1327) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==10){
					srand(time(NULL));
					PlaySound("jojoba.wav",NULL,SND_ASYNC);
				}
				//k
				if((mx>=281 && mx<=780) && (my>=665 && my<=964)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==11){
					srand(time(NULL));
					PlaySound("kite.wav",NULL,SND_ASYNC);
				}
				if((mx>=820 && mx<=1327) && (my>=665 && my<=965)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==11){
					srand(time(NULL));
					PlaySound("kangaroo.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=281 && mx<=780) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==11){
					srand(time(NULL));
					PlaySound("kiwi.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=820 && mx<=1327) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==11){
					srand(time(NULL));
					PlaySound("king.wav",NULL,SND_ASYNC);
				}
				//l
				if((mx>=281 && mx<=780) && (my>=665 && my<=964)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==12){
					srand(time(NULL));
					PlaySound("lemon.wav",NULL,SND_ASYNC);
				}
				if((mx>=820 && mx<=1327) && (my>=665 && my<=965)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==12){
					srand(time(NULL));
					PlaySound("lily.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=281 && mx<=780) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==12){
					srand(time(NULL));
					PlaySound("lotus.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=820 && mx<=1327) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==12){
					srand(time(NULL));
					PlaySound("lion.wav",NULL,SND_ASYNC);
				}
				//m
				if((mx>=281 && mx<=780) && (my>=665 && my<=964)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==13){
					srand(time(NULL));
					PlaySound("mouse.wav",NULL,SND_ASYNC);
				}
				if((mx>=820 && mx<=1327) && (my>=665 && my<=965)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==13){
					srand(time(NULL));
					PlaySound("mango.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=281 && mx<=780) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==13){
					srand(time(NULL));
					PlaySound("melon.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=820 && mx<=1327) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==13){
					srand(time(NULL));
					PlaySound("meat.wav",NULL,SND_ASYNC);
				}
				//n
				if((mx>=281 && mx<=780) && (my>=665 && my<=964)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==14){
					srand(time(NULL));
					PlaySound("nest.wav",NULL,SND_ASYNC);
				}
				if((mx>=820 && mx<=1327) && (my>=665 && my<=965)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==14){
					srand(time(NULL));
					PlaySound("nectar.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=281 && mx<=780) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==14){
					srand(time(NULL));
					PlaySound("nut.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=820 && mx<=1327) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==14){
					srand(time(NULL));
					PlaySound("net.wav",NULL,SND_ASYNC);
				}
				//o
				if((mx>=281 && mx<=780) && (my>=665 && my<=964)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==15){
					srand(time(NULL));
					PlaySound("orange.wav",NULL,SND_ASYNC);
				}
				if((mx>=820 && mx<=1327) && (my>=665 && my<=965)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==15){
					srand(time(NULL));
					PlaySound("olive.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=281 && mx<=780) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==15){
					srand(time(NULL));
					PlaySound("onion.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=820 && mx<=1327) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==15){
					srand(time(NULL));
					PlaySound("owl.wav",NULL,SND_ASYNC);
				}
				//p
				if((mx>=281 && mx<=780) && (my>=665 && my<=964)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==16){
					srand(time(NULL));
					PlaySound("papaya.wav",NULL,SND_ASYNC);
				}
				if((mx>=820 && mx<=1327) && (my>=665 && my<=965)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==16){
					srand(time(NULL));
					PlaySound("potato.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=281 && mx<=780) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==16){
					srand(time(NULL));
					PlaySound("penguin.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=820 && mx<=1327) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==16){
					srand(time(NULL));
					PlaySound("pigeon.wav",NULL,SND_ASYNC);
				}
				//q
				if((mx>=281 && mx<=780) && (my>=665 && my<=964)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==17){
					srand(time(NULL));
					PlaySound("queen.wav",NULL,SND_ASYNC);
				}
				if((mx>=820 && mx<=1327) && (my>=665 && my<=965)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==17){
					srand(time(NULL));
					PlaySound("quail.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=281 && mx<=780) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==17){
					srand(time(NULL));
					PlaySound("quiver.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=820 && mx<=1327) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==17){
					srand(time(NULL));
					PlaySound("quilt.wav",NULL,SND_ASYNC);
				}
				//r
				if((mx>=281 && mx<=780) && (my>=665 && my<=964)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==18){
					srand(time(NULL));
					PlaySound("rabbit.wav",NULL,SND_ASYNC);
				}
				if((mx>=820 && mx<=1327) && (my>=665 && my<=965)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==18){
					srand(time(NULL));
					PlaySound("radish.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=281 && mx<=780) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==18){
					srand(time(NULL));
					PlaySound("rice.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=820 && mx<=1327) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==18){
					srand(time(NULL));
					PlaySound("rose.wav",NULL,SND_ASYNC);
				}
				//s
				if((mx>=281 && mx<=780) && (my>=665 && my<=964)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==19){
					srand(time(NULL));
					PlaySound("sun.wav",NULL,SND_ASYNC);
				}
				if((mx>=820 && mx<=1327) && (my>=665 && my<=965)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==19){
					srand(time(NULL));
					PlaySound("strawberry.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=281 && mx<=780) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==19){
					srand(time(NULL));
					PlaySound("sunflower.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=820 && mx<=1327) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==19){
					srand(time(NULL));
					PlaySound("sheep.wav",NULL,SND_ASYNC);
				}
				//t
				if((mx>=281 && mx<=780) && (my>=665 && my<=964)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==20){
					srand(time(NULL));
					PlaySound("tomato.wav",NULL,SND_ASYNC);
				}
				if((mx>=820 && mx<=1327) && (my>=665 && my<=965)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==20){
					srand(time(NULL));
					PlaySound("tiger.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=281 && mx<=780) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==20){
					srand(time(NULL));
					PlaySound("tulip.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=820 && mx<=1327) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==20){
					srand(time(NULL));
					PlaySound("turnip.wav",NULL,SND_ASYNC);
				}
				//u
				if((mx>=281 && mx<=780) && (my>=665 && my<=964)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==21){
					srand(time(NULL));
					PlaySound("umbrella.wav",NULL,SND_ASYNC);
				}
				if((mx>=820 && mx<=1327) && (my>=665 && my<=965)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==21){
					srand(time(NULL));
					PlaySound("unicycle.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=281 && mx<=780) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==21){
					srand(time(NULL));
					PlaySound("uniform.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=820 && mx<=1327) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==21){
					srand(time(NULL));
					PlaySound("umpire.wav",NULL,SND_ASYNC);
				}
				//v
				if((mx>=281 && mx<=780) && (my>=665 && my<=964)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==22){
					srand(time(NULL));
					PlaySound("van.wav",NULL,SND_ASYNC);
				}
				if((mx>=820 && mx<=1327) && (my>=665 && my<=965)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==22){
					srand(time(NULL));
					PlaySound("vase.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=281 && mx<=780) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==22){
					srand(time(NULL));
					PlaySound("vegetable.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=820 && mx<=1327) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==22){
					srand(time(NULL));
					PlaySound("violin.wav",NULL,SND_ASYNC);
				}
				//w
				if((mx>=281 && mx<=780) && (my>=665 && my<=964)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==23){
					srand(time(NULL));
					PlaySound("watch.wav",NULL,SND_ASYNC);
				}
				if((mx>=820 && mx<=1327) && (my>=665 && my<=965)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==23){
					srand(time(NULL));
					PlaySound("wall.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=281 && mx<=780) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==23){
					srand(time(NULL));
					PlaySound("wheel.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=820 && mx<=1327) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==23){
					srand(time(NULL));
					PlaySound("window.wav",NULL,SND_ASYNC);
				}
				//x
				if((mx>=281 && mx<=780) && (my>=665 && my<=964)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==24){
					srand(time(NULL));
					PlaySound("xanthic.wav",NULL,SND_ASYNC);
				}
				if((mx>=820 && mx<=1327) && (my>=665 && my<=965)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==24){
					srand(time(NULL));
					PlaySound("xyster.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=281 && mx<=780) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==24){
					srand(time(NULL));
					PlaySound("x-ray.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=820 && mx<=1327) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==24){
					srand(time(NULL));
					PlaySound("xylophone.wav",NULL,SND_ASYNC);
				}
				//y
				if((mx>=281 && mx<=780) && (my>=665 && my<=964)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==25){
					srand(time(NULL));
					PlaySound("yak.wav",NULL,SND_ASYNC);
				}
				if((mx>=820 && mx<=1327) && (my>=665 && my<=965)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==25){
					srand(time(NULL));
					PlaySound("yolk.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=281 && mx<=780) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==25){
					srand(time(NULL));
					PlaySound("yarn.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=820 && mx<=1327) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==25){
					srand(time(NULL));
					PlaySound("yo-yo.wav",NULL,SND_ASYNC);
				}
				//z
				if((mx>=281 && mx<=780) && (my>=665 && my<=964)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==26){
					srand(time(NULL));
					PlaySound("zebra.wav",NULL,SND_ASYNC);
				}
				if((mx>=820 && mx<=1327) && (my>=665 && my<=965)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==26){
					srand(time(NULL));
					PlaySound("zoo.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=281 && mx<=780) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==26){
					srand(time(NULL));
					PlaySound("zip.wav",NULL,SND_ASYNC);
		
				}
				if((mx>=820 && mx<=1327) && (my>=330 && my<=630)  && (mm!=1 && mm!=3 && mm!=4 && mm!=5 && mm!=6 && mm!=0) && f==26){
					srand(time(NULL));
					PlaySound("zucchini.wav",NULL,SND_ASYNC);
				}
		}//A
	printf("%d %d ",mx,my);
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		
	}
}


void iKeyboard(unsigned char key)
{
	if(key == 'x')
	{
		
		exit(0);
	}
	
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use 
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6, 
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12, 
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP, 
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT 
*/
void iSpecialKeyboard(unsigned char key)
{

	
}

int main()
{
		srand(time(NULL));
		PlaySound("sound.wav",NULL,SND_ASYNC);
	
	
	iInitialize(1700, 1000, "Teach Yourself A B C . . . . .");
	return 0;
}	