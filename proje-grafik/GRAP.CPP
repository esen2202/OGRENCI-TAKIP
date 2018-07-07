#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
#include<conio.h>
#include<stdio.h>
#include <time.h>
#include "mouse.h"

	//mouse degiskenleri
	int press,mx,my,sec,b,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,h,c1,c2,c3,c4;
	int b12,b13,b14,b15,b16,b17,b18,b19,bk,bk1,arabut=0,kayit=0,kayitkap=0,ba,bb,bc,bd,be,bf,bg,f,ff;
	int kayitcombo=0,gelismisaracombo=0,combobut=0;
	//mouse degiskenleri  bitis

//gîlgeli yazç fonksiyonu
golgeyaz(int x,int y,char c[250],int renk1,int renk2)
{
setcolor(renk1);
outtextxy(x,y,c);
setcolor(renk2);
outtextxy(x+1,y+1,c);
}
//gîlgeli yazç fonksiyonu

      //mesaj penceresi
      msgbox(int x,int y,char c[50])
      {
	setfillstyle(1,7);
	bar(x,y,x+250,y+50);
	setcolor(8);
	line(x+1,y-1,x+252,y-1);
	line(x+251,y-1,x+251,y+49);
	line(x+2,y-2,x+252,y-2);
	line(x+252,y,x+252,y+48);
	setcolor(0);
	outtextxy(x+30,y+3,c);
	setcolor(8);
	line(x+81,y+31,x+151,y+31);
	line(x+151,y+32,x+151,y+44);
	setfillstyle(1,15);
	bar(x+80,y+32,x+150,y+45);
	setcolor(0);
	outtextxy(x+85,y+35,"Tamam");
      }
      //mesaj penceresi bitisi

      //animasyonlu giris yapan ana menuler
      hareketlimenuler()
      {
      int k,k2,i;        k=k2=0;
      //menuler
	  //menu baslçk
	  setcolor(0);
		   for(i=1;i<=90;i++)
		   {
		     k++;
		     setfillstyle(1,9);
		     bar(634,29,634-k,16);
		     line(635,30,635-k,30);
			    if(i>120 & i<137)
			    {
			      k2++;
			      setcolor(8);
			      line(547,30,547,30-k2);
			     }
		     delay(2);
		   }
	 settextstyle(2,0,0);
	 golgeyaz(561,16," Ogrenci",0,15);
	 //menu baslçk bitis
	 //menu 1
	 k=0;
		   for(i=1;i<=90;i++)
		   {
		     k++;
		     setfillstyle(1,7);
		     setcolor(0);
		     bar(634,46,634-k,31);
		     line(635,47,635-k,47);
			    if(i>120 & i<137)
			    {
			      k2++;
			      line(547,30,547,30-k2);
			    }
		     delay(2);
		    }
	 k=0;
	 settextstyle(2,0,0);
	 golgeyaz(560,34,"Kayit",0,15);
	 //menu 2
		    for(i=1;i<=90;i++)
		    {
		      k++;
		      setfillstyle(1,7);
		      setcolor(0);
		      bar(634,62,634-k,48);
		      line(635,63,635-k,63);
			     if(i>120 & i<137)
			     {
				k2++;
				line(547,30,547,30-k2);
			     }
		      delay(2);
		     }
	 k=0;
	 golgeyaz(560,51,"Arama",0,15);
	 //menu 3
		     for(i=1;i<=90;i++)
		     {
		       k++;
		       setfillstyle(1,7);
		       setcolor(0);
		       bar(634,79,634-k,64);
		       line(635,80,635-k,80);
			      if(i>120 & i<137)
			      {
				 k2++;
				 line(547,30,547,30-k2);
			      }
		       delay(2);
		      }
	 k=0;
	 golgeyaz(560,67,"DÅzeltme",0,15);
	 //menu 4
		      for(i=1;i<=90;i++)
		      {
			 k++;
			 setfillstyle(1,7);
			 setcolor(0);
			 bar(634,95,634-k,81);
			 line(635,96,635-k,96);
				if(i>120 & i<137)
				{
				   k2++;
				   line(547,30,547,30-k2);
				}
			 delay(2);
		       }
	 k=0;
	 golgeyaz(560,84,"Silme",0,15);
	 //menu 5
		       for(i=1;i<=90;i++)
		       {
			  k++;
			  setfillstyle(1,7);
			  setcolor(0);
			  bar(634,112,634-k,97);
			  line(635,113,635-k,113);
				  if(i>120 & i<137)
				  {
				     k2++;
				     line(547,30,547,30-k2);
				  }
			  delay(2);
			}
	k=0;
	golgeyaz(560,100,"Listeleme",0,15);
	//menu 6
			for(i=1;i<=90;i++)
			{
			   k++;
			   setfillstyle(1,7);
			   setcolor(0);
			   bar(634,129,634-k,114);
			   line(635,130,635-k,130);
				   if(i>120 & i<137)
				   {
				      k2++;
				      line(547,30,547,30-k2);
				   }
			   delay(2);
			}
	golgeyaz(560,117,"Exit",0,15);
	setcolor(0);
      //menuler bitis
      }

//pencere cizme fonksiyonu
pencere(int x,int y,int x1,int y1,int renk,char baslik[150])
{
    setfillstyle(1,renk);
    bar(x,y,x1,y1);
    rectangle(x,y,x1,y1);
    setcolor(15);
    rectangle(x+1,y+1,x1-2,y+13);
    setfillstyle(1,0);
    bar(x+2,y+2,x1-3,y+12);
    rectangle(x+1,y+14,x1-2,y1-1);
    setcolor(8);
    settextstyle(2,0,0);
    outtextxy(x+15,y,baslik);
    setcolor(15);
    settextstyle(2,0,0);
    outtextxy(x+16,y+1,baslik);
    setcolor(0);
    line(x1-1,y+1,x1-1,y1-1);
    setcolor(0);
    line(x+2,y+14,x1-3,y+14);
    line(x1-3,y+15,x1-3,y1-2);
    setcolor(8);
    line(x+2,y+15,x1-4,y+15);
    line(x1-4,y+15,x1-4,y1-2);
    setfillstyle(1,15);
    bar3d(x1-14,y+3,x1-5,y+11,1,1);
    settextstyle(0,0,0);
    setcolor(7);
    outtextxy(x1-12,y+2,"x");
    setcolor(0);
    outtextxy(x1-13,y+3,"x");
    setfillstyle(1,2);
    setcolor(6);
    fillellipse(x+8,y+7,5,5);
    setcolor(15);
    outtextxy(x+4,y+3,"i");
    setfillstyle(1,0);
    bar(x+2,y1-13,x1-5,y1-2);
    setcolor(8);
    line(x+2,y1-13,x1-5,y1-13);
    setcolor(15);line(x+2,y1-14,x1-5,y1-14);
}  //pencere olusturma fonksiyonu bitti


//buton olusturma fonksiyonu
void buton(int x,int y,int x1,int y1,int renk,char c[100])
{
    int k,k2,i;
    setcolor(0);
    k++;
    setfillstyle(1,renk);
    bar(x,y,x1,y1);
    line(x,y1,x1,y1);
    setcolor(8);    line(x,y,x1,y);
    line(x,y1-1,x,y);
    setcolor(0);
    line(x1,y1-1,x1,y);
    settextstyle(2,0,0);
    setcolor(0);
    outtextxy(x+5,y,c);
    setcolor(15);
    outtextxy(x+4,y+1,c);
    setcolor(0);
} //buton olusturma fonksiyonu bitis


//hareketsiz ana menuler
menuler()
{
   //menuler
      pencere(1,1,639,479,1,"                                          ôgrenci Kayit Programi");//ana pencere
   //menu baslik
      setcolor(0);
      setfillstyle(1,9);
      bar(634,29,634-90,16);
      line(635,30,635-90,30);
      settextstyle(2,0,0);
      golgeyaz(561,16," Ogrenci",0,15);
      setcolor(0);
   //menu 1
      setfillstyle(1,7);
      setcolor(0);
      bar(634,46,634-90,31);
      line(635,47,635-90,47);
      settextstyle(2,0,0);
      golgeyaz(560,34,"Kayit",0,15);
   //menu 2
      setfillstyle(1,7);
      setcolor(0);
      bar(634,62,634-90,48);
      line(635,63,635-90,63);
      golgeyaz(560,51,"Arama",0,15);
   //menu 3
      setfillstyle(1,7);
      setcolor(0);
      bar(634,79,634-90,64);
      line(635,80,635-90,80);
      golgeyaz(560,67,"DÅzeltme",0,15);
   //menu 4
      setfillstyle(1,7);
      setcolor(0);
      bar(634,95,634-90,81);
      line(635,96,635-90,96);
      golgeyaz(560,84,"Silme",0,15);
   //menu 5
      setfillstyle(1,7);
      setcolor(0);
      bar(634,112,634-90,97);
      line(635,113,635-90,113);
      golgeyaz(560,100,"Listeleme",0,15);
   //menu 6
      setfillstyle(1,7);
      setcolor(0);
      bar(634,129,634-90,114);
      line(635,130,635-90,130);
      golgeyaz(560,117,"Exit",0,15);
      setcolor(0);
   //menuler bitis
}

   //sçnçflar aáçlçr menu  baslçgç
   combo(int x,int y,int renk1,int renk2)
   {
   setcolor(8);
   setfillstyle(1,renk1);
   bar3d(x,y,x+12,y+12,1,1);
   setfillstyle(1,renk2);
   bar3d(x+13,y,x+100,y+12,1,1);
   setcolor(GREEN);
   settextstyle(0,0,0);
   outtextxy(x+2,y+3,"");
   setcolor(0);
   line(x+11,y+2,x+11,y+11);
   line(x,y+2,x+11,y+2);
   setcolor(15);
   line(x,y+11,x+10,y+11);
   line(x,y+2,x,y+11);

   setcolor(0);
   line(x+14,y+1,x+99,y+1);
   line(x+99,y+1,x+99,y+11);
   setcolor(15);
   line(x+14,y+11,x+98,y+11);
   line(x+14,y+1,x+14,y+10);
   settextstyle(2,0,0);
   golgeyaz(x+20,y-1,"sinif seciniz",0,15);
   }
   //sçnçflar aáçlçr menu baslçgç bitis
   //sçnçflar aáçlçr menu
   comboac(int x,int y)
   {
   int i,say=1;
     for(i=1;i<=205;i++)
     {
       setcolor(8);
       setfillstyle(1,15);
       bar3d(x,y+13,x+100,y+13+i,1,1);

	if(i==205)
	{
	//A sube

	   setcolor(8);
	   setfillstyle(1,7);
	   bar3d(x+14,y+14,x+100,y+30,1,1);
	   setcolor(GREEN);
	   settextstyle(2,0,0);
	   golgeyaz(x+30,y+16,"9/A",15,0);

	   setcolor(8);
	   setfillstyle(1,7);
	   bar3d(x+14,y+31,x+100,y+47,1,1);
	   setcolor(GREEN);
	   settextstyle(2,0,0);
	   golgeyaz(x+30,y+33,"10/A",15,0);


	   setcolor(8);
	   setfillstyle(1,7);
	   bar3d(x+14,y+48,x+100,y+64,1,1);
	   setcolor(GREEN);
	   settextstyle(2,0,0);
	   golgeyaz(x+30,y+50,"11/A",15,0);

	   setcolor(8);
	   setfillstyle(1,7);
	   bar3d(x+14,y+65,x+100,y+81,1,1);
	   setcolor(GREEN);
	   settextstyle(2,0,0);
	   golgeyaz(x+30,y+67,"Teknik 10/A",15,0);


	    setcolor(8);
	   setfillstyle(1,7);
	   bar3d(x+14,y+82,x+100,y+98,1,1);
	   setcolor(GREEN);
	   settextstyle(2,0,0);
	   golgeyaz(x+30,y+84,"Teknik 11/A",15,0);


	    setcolor(8);
	   setfillstyle(1,7);
	   bar3d(x+14,y+99,x+100,y+115,1,1);
	   setcolor(GREEN);
	   settextstyle(2,0,0);
	   golgeyaz(x+30,y+101,"Teknik 12/A",15,0);

	//B sube
	   setcolor(8);
	   setfillstyle(1,7);
	   bar3d(x+14,y+116,x+100,y+132,1,1);
	   setcolor(GREEN);
	   settextstyle(2,0,0);
	   golgeyaz(x+30,y+118,"9/B",15,0);

	    setcolor(8);
	   setfillstyle(1,7);
	   bar3d(x+14,y+133,x+100,y+149,1,1);
	   setcolor(GREEN);
	   settextstyle(2,0,0);
	   golgeyaz(x+30,y+135,"10/B",15,0);

	    setcolor(8);
	   setfillstyle(1,7);
	   bar3d(x+14,y+150,x+100,y+166,1,1);
	   setcolor(GREEN);
	   settextstyle(2,0,0);
	   golgeyaz(x+30,y+152,"11/B",15,0);

	    setcolor(8);
	   setfillstyle(1,7);
	   bar3d(x+14,y+167,x+100,y+183,1,1);
	   setcolor(GREEN);
	   settextstyle(2,0,0);
	   golgeyaz(x+30,y+169,"Teknik 10/B",15,0);

	    setcolor(8);
	   setfillstyle(1,7);
	   bar3d(x+14,y+184,x+100,y+200,1,1);
	   setcolor(GREEN);
	   settextstyle(2,0,0);
	   golgeyaz(x+30,y+186,"Teknik 11/B",15,0);

	    setcolor(8);
	   setfillstyle(1,7);
	   bar3d(x+14,y+201,x+100,y+217,1,1);
	   setcolor(GREEN);
	   settextstyle(2,0,0);
	   golgeyaz(x+30,y+203,"Teknik 12/B",15,0);



       }
       delay(0);
     }
   }

   //sçnçflar aáçlçr menu  bitis

   /* //kapat butonu fonksiyonu
    kapat(int x,int y,int x1,int y1,int giris)
    {
    //kayit penceresine ait kapat butonun mouse etkilesimi
if (mx>x1-14&mx<x1-5&my<y+11&my>y+3&press==1&b==0&giris==1)
{hide();b++;b1=0;
setfillstyle(1,1);
bar3d(x1-14,y+3,x1-5,y+11,1,1);
setcolor(7);
outtextxy(x1-11,y+4,"x");
setcolor(0);
outtextxy(x1-12,y+3,"x");
	 //alt pro
	 giris=0;
	 menuler();
	 //alt pro bit
show();
}
if (press==0&b1==0&giris==1){
b=0;b1++;
hide();
show();
}
   //kayit penceresine ait kapat butonun mouse etkilesimiÅ
      }//kapat butonu fonksiyonu bitis   */



//ana program
main()
{
    int i,k,k2,g,art;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\turboc3\\");
    cleardevice();
    delay(100);
    initialize();
      pencere(1,1,639,479,1,"                                          ôgrenci Kayit Programi");
      pencere(210,300,428,400,7,"yÅkleniyor...");

      //deneme

      //deneme

     //yÅkleme islemi
	 setcolor(15);
	 rectangle(219,348,419,354);
	 bar(220,349,418,353);
	 delay(100);
	 art=1;
		for(i=1;i<=48;i++)
		{
		    art=art+4;
		    setfillstyle(1,GREEN);
		    bar(215+art,349,217+art,353);
		    delay(50);
		}
	 cleardevice();
	 pencere(1,1,639,479,1,"                                          ôgrenci Kayit Programi");
	 pencere(210,300,428,400,7,"yÅklendi...");
	 settextstyle(8,0,0);
	 golgeyaz(219,325,"Hosgeldiniz",0,15);
      //yukleme bitis
      hareketlimenuler();
      //mouse girisi
	 show();
		while(1==1)
		{
		     getmstat(&press,&mx,&my);
		     //menu 1
		     if (mx>544&mx<634&my<46&my>31&press==1&b4==0)
		     {
		     hide();b4++;b5=0;
		     menuler();
		     setfillstyle(1,4);
		     bar(634,46,544,31);
		     settextstyle(2,0,0);
		     golgeyaz(560,34,"Kayit",0,15);
			   //alt program

				   //animasyon menu
				   for(i=1;i<=530;i++)
				   {
				   setcolor(0);
				   line(544,30,544-i,30);
				   delay(2);
				   }
					//kayit penceresi
					pencere(14,31,543,62,7," Kayit...");
					//kayit penceresi bitis
				   for(i=1;i<=88;i++)
				   {
				   setfillstyle(1,7);
				   setcolor(0);
				   bar(103,64,103-i,79);
				   line(104,80,104-i,80);
				   line(104,64,104,80);
				   delay(4);
				   }
				       settextstyle(2,0,0);
				       golgeyaz(20,66," Yeni Kayit",0,15);
				   //animasyon menu bitis
				   kayitkap=1; //kayit penceresinin kapat butonu iáin aldçgç deger
				   kayit=1; //butonun mouse olayç iáin aldçgç deger
			   //alt program bitis
		     show();
		     }
		     if (press==0&b5==0)
		     {
		     b4=0;b5++; hide();
		     setfillstyle(1,7);
		     bar(634,46,544,31);
		     settextstyle(2,0,0);
		     golgeyaz(560,34,"Kayit",0,15);
		     show();
		     }
		     //menu 1 bitis

		     //menu 1 in ait butonun mouse etkilesimi
		     if (mx>15&mx<103&my<79&my>64&press==1&ba==0&kayit==1)
		     {
		     hide();ba++;bb=0;
		     settextstyle(2,0,0);
		     setfillstyle(1,7);
		     setcolor(0);
		     bar(103,64,15,79);
		     line(104,80,16,80);
		     golgeyaz(20,66," Yeni Kayit",15,1);
				    //butonun alt programlari

					    //kayit pnceresini buyut

					    kayit=0;
						pencere(14,31,543,442,0," Kayit...    înce sinif seáiniz...");
						combo(17,47,1,7);
						kayitcombo=1;

					    //kayit pnceresini buyut bitis

				     //butonun alt programlari bitis
		     show();
		     }
		     if (press==0&bb==0&kayit==1)
		     {
		     ba=0;bb++; hide();
		     setfillstyle(1,7);
		     setcolor(0);
		     show();
		     }
		     //menu 1 in ait butonun mouse etkilesiminin  bitisi
		     //kayit penceresine ait kapat butonun mouse etkilesimi
		     if (mx>529&mx<538&my<42&my>34&press==1&bc==0&kayitkap==1)
		     {
		     hide();bc++;bd=0;
		     setfillstyle(1,1);
		     settextstyle(0,0,0);
		     bar3d(543-14,31+3,543-5,31+11,1,1);
		     settextstyle(11,0,0);
		     setcolor(2);
		     outtextxy(543-12,31+4,"x");
		     setcolor(0);
		     outtextxy(542-12,30+4,"x");
				//alt program
				menuler();
				kayitkap=0;
				//alt program bitisi
		     show();
		     }
		     if (press==0&bd==0&kayitkap==1)
		     {
		     bc=0;bd++; hide();
		     setfillstyle(1,15);
		     settextstyle(0,0,0);
		     bar3d(543-14,31+3,543-5,31+11,1,1);
		     settextstyle(11,0,0);
		     setcolor(7);
		     outtextxy(543-12,31+4,"x");
		     setcolor(0);
		     outtextxy(542-12,30+4,"x");
		     show();
		     }
		     //kayit penceresine ait kapat butonun mouse etkilesimi

		     //menu 2
		     if (mx>544&mx<634&my<62&my>48&press==1&b6==0)
		     {
		     hide();b6++;b7=0;
		     menuler();
		     setfillstyle(1,4);
		     bar(634,62,544,48);
		     settextstyle(2,0,0);
		     golgeyaz(560,51,"Arama",0,15);
			    //alt program

				  //animasyon menu
				   for(i=1;i<=530;i++)
				   {
				   setcolor(0);
				   line(544,30,544-i,30);
				   delay(2);
				   }
					//arama penceresi
					pencere(14,31,543,62,7," Arama...");
					//arama penceresi bitis
				   for(i=1;i<=88;i++)
				   {
				   setfillstyle(1,7);
				   setcolor(0);
				   bar(103,64,103-i,79);
				   line(104,80,104-i,80);
				   line(104,64,104,80);
				   delay(4);
				   }
				   settextstyle(2,0,0);
				       golgeyaz(20,66,"Numaraya Gîre",0,15);
				    for(i=1;i<=88;i++)
				   {
				   setfillstyle(1,7);
				   setcolor(0);
				   bar(103,81,103-i,96);
				   line(104,97,104-i,97);
				   line(104,81,104,97);
				   delay(4);
				   }
				   settextstyle(2,0,0);
				       golgeyaz(20,83,"Gelismis Arama",0,15);
				   //animasyon menu bitis
				   kayitkap=1; //arama penceresinin kapat butonu iáin aldçgç deger
				   arabut=1; //butonun mouse olayç iáin aldçgç deger

			    //alt program bitisi
		     show();
		     }
		     if (press==0&b7==0)
		     {
		     b6=0;b7++; hide();
		     setfillstyle(1,7);
		     bar(634,62,544,48);
		     settextstyle(2,0,0);
		     golgeyaz(560,51,"Arama",0,15);
		     show();
		     }
		     //menu 2 bitis
		      //menu 2 in ait numaraya gîre butonun mouse etkilesimi
		     if (mx>15&mx<103&my<79&my>64&press==1&be==0&arabut==1)
		     {
		     hide();be++;bf=0;
				    //butonun alt programlari

					    //ara pnceresini buyut

					    arabut=0;
						pencere(14,31,543,442,0," Numaraya Gîreye Ogrenci Arama...");
					    //ara pnceresini buyut bitis

				     //butonun alt programlari bitis
		     show();
		     }
		     if (press==0&bf==0&arabut==1)
		     {
		     be=0;bf++; hide();
		     setfillstyle(1,7);
		     setcolor(0);
		     show();
		     }
		     //menu 2 in ait numaraya gîre butonun mouse etkilesiminin  bitisi
		     //menu 2 in ait gelismis arama butonun mouse etkilesiminin  bitisi
		      if (mx>15&mx<103&my<96&my>81&press==1&f==0&arabut==1)
		     {
		     hide();f++;ff=0;

				    //butonun alt programlari

					    //kayit pnceresini buyut

					    arabut=0;
						pencere(14,31,543,442,0," Gelismis Ogrenci Arama...");
					    //kayit pnceresini buyut bitis

				     //butonun alt programlari bitis
		     show();
		     }
		     if (press==0&ff==0&arabut==1)
		     {
		     f=0;ff++; hide();
		     setfillstyle(1,7);
		     setcolor(0);
		     show();
		     }
		     //menu 2 in ait gelismis arama butonun mouse etkilesiminin  bitisi
		     //menu 3
		     if (mx>544&mx<634&my<79&my>64&press==1&b8==0)
		     {
		     hide();b8++;b9=0;
		     menuler();
		     setfillstyle(1,4);
		     bar(634,79,544,64);
		     settextstyle(2,0,0);
		     golgeyaz(560,67,"DÅzeltme",0,15);
			    //alt program

			    //alt program bitisi
		     show();
		     }
		     if (press==0&b9==0)
		     {
		     b8=0;b9++; hide();
		     setfillstyle(1,7);
		     bar(634,79,544,64);
		     settextstyle(2,0,0);
		     golgeyaz(560,67,"DÅzeltme",0,15);
		     show();
		     }
		     //menu 3 bitis

		     //menu 4
		     if (mx>544&mx<634&my<95&my>81&press==1&b10==0)
		     {
		     hide();b10++;b11=0;
		     menuler();
		     setfillstyle(1,4);
		     bar(634,95,544,81);
		     settextstyle(2,0,0);
		     golgeyaz(560,84,"Silme",0,15);
			     //alt program

			     //alt program bitisi
		     show();
		     }
		     if (press==0&b11==0)
		     {
		     b10=0;b11++; hide();
		     setfillstyle(1,7);
		     bar(634,95,544,81);
		     settextstyle(2,0,0);
		     golgeyaz(560,84,"Silme",0,15);
		     show();
		     }
		     //menu 4 bitis

		     //menu 5
		     if (mx>544&mx<634&my<112&my>97&press==1&b12==0)
		     {
		     hide();b12++;b13=0;
		     menuler();
		     setfillstyle(1,4);
		     bar(634,112,544,97);
		     settextstyle(2,0,0);
		     golgeyaz(560,100,"Listeleme",0,15);
			     //alt program

			     //alt program bitisi
		     show();
		     }
		     if (press==0&b13==0)
		     {
		     b12=0;b13++; hide();
		     setfillstyle(1,7);
		     bar(634,112,544,97);
		     settextstyle(2,0,0);
		     golgeyaz(560,100,"Listeleme",0,15);
		     show();
		     }
		     //menu 5 bitis

		     //menu 6
		     if (mx>544&mx<634&my<129&my>114&press==1&b14==0)
		     {
		     hide();b14++;b15=0;
		     setfillstyle(1,4);
		     bar(634,129,544,114);
		     settextstyle(2,0,0);
		     golgeyaz(560,117,"Exit",0,15);
			    //alt program

				    //kapat penceresi
				    pencere(210,300,428,400,9," Exit...");
				    setcolor(1);
				    setfillstyle(1,1);
				    fillellipse(230,340,13,16);
				    setcolor(0);
				    setfillstyle(1,GREEN);
				    fillellipse(230,340,12,15);
				    settextstyle(4,0,0);
				    setcolor(15);
				    golgeyaz(225,318,"?",0,15);
				    settextstyle(11,0,0);
				    setcolor(0);
				    golgeyaz(250,328,"Äikmak Istediginize",0,15);
				    golgeyaz(250,338,"   Eminmisiniz?",0,15);
				    buton(280,360,315,375,1,"Evet");
				    buton(320,360,355,375,1,"Hayir");
				    sec=1; //evet hayçr butonlarçnç tetikleyen deger
				    //kapat penceresi bitis

			    //alt program bitisi
		     show();
		     }
		     if (press==0&b15==0)
		     {
		     b14=0;b15++;  hide();
		     setfillstyle(1,7);
		     bar(634,129,544,114);
		     golgeyaz(560,117,"Exit",0,15);
		     show();
		     }
		     //menu 6 bitis

		     //kapat butonu UST  [X]
		     if (mx>625&mx<634&my<12&my>4&press==1&b16==0)
		     {
		     hide();b16++;b17=0;
		     setfillstyle(1,1);
		     bar3d(625,4,634,12,1,1);
		     settextstyle(11,0,0);
		     setcolor(2);
		     outtextxy(628,5,"x");
		     setcolor(0);
		     outtextxy(627,4,"x");
			     //alt program

				     //kapat penceresi
				     pencere(210,300,428,400,9," Exit...");
				     setcolor(1);
				     setfillstyle(1,1);
				     fillellipse(230,340,13,16);
				     setcolor(0);
				     setfillstyle(1,GREEN);
				     fillellipse(230,340,12,15);
				     settextstyle(4,0,0);
				     setcolor(15);
				     golgeyaz(225,318,"?",0,15);
				     settextstyle(11,0,0);
				     setcolor(0);
				     golgeyaz(250,328,"Äikmak Istediginize",0,15);
				     golgeyaz(250,338,"   Eminmisiniz?",0,15);
				     buton(280,360,315,375,1,"Evet");
				     buton(320,360,355,375,1,"Hayir");
				     sec=1; //evet hayçr butonlarçnç tetikleyen deger
				     //kapat penceresi bitis
			     //alt program bitisi
		     show();
		     }
		     if (press==0&b17==0)
		     {
		     b16=0;b17++; hide();
		     setfillstyle(1,15);
		     bar3d(625,4,634,12,1,1);
		     settextstyle(11,0,0);
		     setcolor(7);
		     outtextxy(628,5,"x");
		     setcolor(0);
		     outtextxy(627,4,"x");
		     show();
		     }
		     //kapat butonu UST  [X] bitisi

//kapat butonu mesaj penceresi

		//evet butonu
		if(mx>280&mx<315&my<375&my>360&press==1&sec==1)
		{
		hide();sec=0;
		buton(280,360,315,375,1,"Evet");
		       //alt program

			     //kapatma ilsemi
			     for(h=1;h<=240;h++)
			     {
			     setfillstyle(1,1);
			     bar(1,1,640,h);
			     bar(1,480,640,480-h);
			     settextstyle(2,0,6);
			     delay(1);
			     }
			     exit(1);
			     //kapatma islemi bitis

		       //alt program bitisi
		show();
		}
		//evet butonu bitis

		//hayçr butonu
		if(mx>320&mx<355&my<375&my>360&press==1&b18==0&sec==1)
		{
		hide();b18++;b19=0;sec=0;
		buton(320,360,355,375,0,"Hayir");
		delay(50);
			//alt program

			     //grafikleri yenileme

		pencere(1,1,639,479,1,"                                          ôgrenci Kayit Programi");
		hareketlimenuler();
			     //grafikleri yenileme bitis

			 //alt program bitis
		show();
		}
		if (press==0&b19==0)
		{
		hide(); b18=0;b19++;
		show();
		}
		//hayçr butonu bitis

//kapat butonu mesaj penceresi bitisi


	  //aáçlçr menu combonun kayit menusu iáin aáçlma olayç
	  if (mx>17&mx<29&my<59&my>47&press==1&c1==0&kayitcombo==1)
	  {
	  hide();c1++;c2=0;
	   setcolor(8);
	   setfillstyle(1,1);
	   bar3d(17,47,29,59,1,1);
	   setfillstyle(1,1);
	   bar3d(30,47,117,59,1,1);
	   setcolor(GREEN);
	   settextstyle(0,0,0);
	   outtextxy(19,50,"");
	   setcolor(0);
	   line(28,49,28,58);
	   line(17,49,28,49);
	   setcolor(15);
	   line(17,58,27,58);
	   line(17,49,17,58);

	   setcolor(0);
	   line(31,48,116,48);
	   line(116,48,116,58);
	   setcolor(15);
	   line(31,58,115,58);
	   line(31,48,31,57);
	   settextstyle(2,0,0);
	   golgeyaz(37,46,"sinif seciniz",0,15);

	       //alt program
	       comboac(17,47);
	       kayitcombo=0;
	       combobut=1;
	       //alt program bitis

	  show();
	  }
	  if (press==0&c2==0&kayitcombo==1)
	  {
	  hide(); c1=0;c2++;
	  show();
	  }

	  //aáçlçr menu combonun kayit menusu iáin  aáçlma olayç bitisi
	  //aáçlçr menu butonlarçna mouse olayç
    //A subesi
	  //9
	  if (mx>17+14&mx<17+100&my<47+30&my>47+14&press==1&c3==0&combobut==1)
	  {
	  hide();c3++;c4=0;
	  /* setcolor(0);
	   setfillstyle(1,1);
	   bar3d(17+14,47+14,17+100,47+30,1,1);
	   setcolor(GREEN);
	   settextstyle(2,0,0);
	   golgeyaz(17+30,47+16,"9/A",0,15);

	   settextstyle(0,0,0);
	   golgeyaz(17+1,47+16,"Ø",7,0); */
	       //alt program
	       //yeniden áizim
	   pencere(14,31,543,442,0," Kayit...         9/A sinifina kayit islemi ");
	   combo(17,47,1,7);
	   setcolor(8);
	   setfillstyle(1,1);
	   bar3d(17,47,29,59,1,1);
	   setfillstyle(1,1);
	   bar3d(30,47,117,59,1,1);
	   setcolor(GREEN);
	   settextstyle(0,0,0);
	   outtextxy(19,50,"");
	   setcolor(0);
	   line(28,49,28,58);
	   line(17,49,28,49);
	   setcolor(15);
	   line(17,58,27,58);
	   line(17,49,17,58);

	   setcolor(0);
	   line(31,48,116,48);
	   line(116,48,116,58);
	   setcolor(15);
	   line(31,58,115,58);
	   line(31,48,31,57);
	   settextstyle(2,0,0);
	   golgeyaz(37,46,"sinif seciniz",0,15);

	       //alt program
	       comboac(17,47);
		setcolor(0);
	   setfillstyle(1,1);
	   bar3d(17+14,47+14,17+100,47+30,1,1);
	   setcolor(GREEN);
	   settextstyle(2,0,0);
	   golgeyaz(17+30,47+16,"9/A",0,15);

	   settextstyle(0,0,0);
	   golgeyaz(17+1,47+16,"Ø",7,0);

	       //áizim bitis

	       combobut=0;
	       //alt program bitis
	  show();
	  }
	  if (press==0&c4==0&combobut==1)
	  {
	  c3=0;c4++;
	  }
	  //10
	  if (mx>17+14&mx<17+100&my<64+30&my>64+14&press==1&c3==0&combobut==1)
	  {
	  hide();c3++;c4=0;
	   pencere(14,31,543,442,0," Kayit...         10/A sinifina kayit islemi ");
	   combo(17,47,1,7);
	   setcolor(8);
	   setfillstyle(1,1);
	   bar3d(17,47,29,59,1,1);
	   setfillstyle(1,1);
	   bar3d(30,47,117,59,1,1);
	   setcolor(GREEN);
	   settextstyle(0,0,0);
	   outtextxy(19,50,"");
	   setcolor(0);
	   line(28,49,28,58);
	   line(17,49,28,49);
	   setcolor(15);
	   line(17,58,27,58);
	   line(17,49,17,58);

	   setcolor(0);
	   setfillstyle(1,1);
	   bar3d(17+14,64+14,17+100,64+30,1,1);
	   setcolor(GREEN);
	   settextstyle(2,0,0);
	   golgeyaz(17+30,64+16,"10/A",0,15);

	   settextstyle(0,0,0);
	   golgeyaz(17+1,64+16,"Ø",7,0);
	       //alt program
		  comboac(17,47);
		setcolor(0);
	   setfillstyle(1,1);
	   bar3d(17+14,47+14,17+100,47+30,1,1);
	   setcolor(GREEN);
	   settextstyle(2,0,0);
	   golgeyaz(17+30,47+16,"10/A",0,15);

	   settextstyle(0,0,0);
	   golgeyaz(17+1,47+16,"Ø",7,0);

	       combobut=0;
	       //alt program bitis
	  show();
	  }
	  if (press==0&c4==0&combobut==1)
	  {
	  c3=0;c4++;
	  }

	  //11
	  if (mx>17+14&mx<17+100&my<81+30&my>61+14&press==1&c3==0&combobut==1)
	  {
	  hide();c3++;c4=0;
	   pencere(14,31,543,442,0," Kayit...         11/A sinifina kayit islemi ");
	   combo(17,47,1,7);
	   setcolor(8);
	   setfillstyle(1,1);
	   bar3d(17,47,29,59,1,1);
	   setfillstyle(1,1);
	   bar3d(30,47,117,59,1,1);
	   setcolor(GREEN);
	   settextstyle(0,0,0);
	   outtextxy(19,50,"");
	   setcolor(0);
	   line(28,49,28,58);
	   line(17,49,28,49);
	   setcolor(15);
	   line(17,58,27,58);
	   line(17,49,17,58);

	   setcolor(0);
	   setfillstyle(1,1);
	   bar3d(17+14,81+14,17+100,81+30,1,1);
	   setcolor(GREEN);
	   settextstyle(2,0,0);
	   golgeyaz(17+30,81+16,"11/A",0,15);

	   settextstyle(0,0,0);
	   golgeyaz(17+1,81+16,"Ø",7,0);
	       //alt program
		  comboac(17,47);
		setcolor(0);
	   setfillstyle(1,1);
	   bar3d(17+14,47+14,17+100,47+30,1,1);
	   setcolor(GREEN);
	   settextstyle(2,0,0);
	   golgeyaz(17+30,47+16,"11/A",0,15);

	   settextstyle(0,0,0);
	   golgeyaz(17+1,47+16,"Ø",7,0);

	       combobut=0;
	       //alt program bitis
	  show();
	  }
	  if (press==0&c4==0&combobut==1)
	  {
	  c3=0;c4++;
	  }

	  //10 teknik
	  if (mx>17+14&mx<17+100&my<98+30&my>98+14&press==1&c3==0&combobut==1)
	  {
	  hide();c3++;c4=0;
	   pencere(14,31,543,442,0," Kayit...         Teknik 10/A sinifina kayit islemi ");
	   combo(17,47,1,7);
	   setcolor(8);
	   setfillstyle(1,1);
	   bar3d(17,47,29,59,1,1);
	   setfillstyle(1,1);
	   bar3d(30,47,117,59,1,1);
	   setcolor(GREEN);
	   settextstyle(0,0,0);
	   outtextxy(19,50,"");
	   setcolor(0);
	   line(28,49,28,58);
	   line(17,49,28,49);
	   setcolor(15);
	   line(17,58,27,58);
	   line(17,49,17,58);

	   setcolor(0);
	   setfillstyle(1,1);
	   bar3d(17+14,98+14,17+100,98+30,1,1);
	   setcolor(GREEN);
	   settextstyle(2,0,0);
	   golgeyaz(17+30,98+16,"Teknik 10/A",0,15);

	   settextstyle(0,0,0);
	   golgeyaz(17+1,98+16,"Ø",7,0);
	       //alt program
		  comboac(17,47);
		setcolor(0);
	   setfillstyle(1,1);
	   bar3d(17+14,47+14,17+100,47+30,1,1);
	   setcolor(GREEN);
	   settextstyle(2,0,0);
	   golgeyaz(17+30,47+16,"Teknik 10/A",0,15);

	   settextstyle(0,0,0);
	   golgeyaz(17+1,47+16,"Ø",7,0);

	       combobut=0;
	       //alt program bitis
	  show();
	  }
	  if (press==0&c4==0&combobut==1)
	  {
	  c3=0;c4++;
	  }

	  //11 teknik
	   if (mx>17+14&mx<17+100&my<115+30&my>115+14&press==1&c3==0&combobut==1)
	  {
	  hide();c3++;c4=0;
	   pencere(14,31,543,442,0," Kayit...         Teknik 11/A sinifina kayit islemi ");
	   combo(17,47,1,7);
	   setcolor(8);
	   setfillstyle(1,1);
	   bar3d(17,47,29,59,1,1);
	   setfillstyle(1,1);
	   bar3d(30,47,117,59,1,1);
	   setcolor(GREEN);
	   settextstyle(0,0,0);
	   outtextxy(19,50,"");
	   setcolor(0);
	   line(28,49,28,58);
	   line(17,49,28,49);
	   setcolor(15);
	   line(17,58,27,58);
	   line(17,49,17,58);

	   setcolor(0);
	   setfillstyle(1,1);
	   bar3d(17+14,115+14,17+100,115+30,1,1);
	   setcolor(GREEN);
	   settextstyle(2,0,0);
	   golgeyaz(17+30,115+16,"Teknik 11/A",0,15);

	   settextstyle(0,0,0);
	   golgeyaz(17+1,115+16,"Ø",7,0);
	       //alt program
		  comboac(17,47);
		setcolor(0);
	   setfillstyle(1,1);
	   bar3d(17+14,47+14,17+100,47+30,1,1);
	   setcolor(GREEN);
	   settextstyle(2,0,0);
	   golgeyaz(17+30,47+16,"Teknik 11/A",0,15);

	   settextstyle(0,0,0);
	   golgeyaz(17+1,47+16,"Ø",7,0);

	       combobut=0;
	       //alt program bitis
	  show();
	  }
	  if (press==0&c4==0&combobut==1)
	  {
	  c3=0;c4++;
	  }

	  //12 teknik
	   if (mx>17+14&mx<17+100&my<132+30&my>132+14&press==1&c3==0&combobut==1)
	  {
	  hide();c3++;c4=0;
	   pencere(14,31,543,442,0," Kayit...         Teknik 12/A sinifina kayit islemi ");
	   combo(17,47,1,7);
	   setcolor(8);
	   setfillstyle(1,1);
	   bar3d(17,47,29,59,1,1);
	   setfillstyle(1,1);
	   bar3d(30,47,117,59,1,1);
	   setcolor(GREEN);
	   settextstyle(0,0,0);
	   outtextxy(19,50,"");
	   setcolor(0);
	   line(28,49,28,58);
	   line(17,49,28,49);
	   setcolor(15);
	   line(17,58,27,58);
	   line(17,49,17,58);


	   setcolor(0);
	   setfillstyle(1,1);
	   bar3d(17+14,132+14,17+100,132+30,1,1);
	   setcolor(GREEN);
	   settextstyle(2,0,0);
	   golgeyaz(17+30,132+16,"Teknik 12/A",0,15);

	   settextstyle(0,0,0);
	   golgeyaz(17+1,132+16,"Ø",7,0);
	       //alt program
		  comboac(17,47);
		setcolor(0);
	   setfillstyle(1,1);
	   bar3d(17+14,47+14,17+100,47+30,1,1);
	   setcolor(GREEN);
	   settextstyle(2,0,0);
	   golgeyaz(17+30,47+16,"Teknik 12/A",0,15);

	   settextstyle(0,0,0);
	   golgeyaz(17+1,47+16,"Ø",7,0);

	       combobut=0;
	       //alt program bitis
	  show();
	  }
	  if (press==0&c4==0&combobut==1)
	  {
	  c3=0;c4++;
	  }


    //B subesi
	  //9
	    if (mx>17+14&mx<17+100&my<149+30&my>149+14&press==1&c3==0&combobut==1)
	  {
	  hide();c3++;c4=0;
	   pencere(14,31,543,442,0," Kayit...         9/B sinifina kayit islemi ");
	   combo(17,47,1,7);
	   setcolor(8);
	   setfillstyle(1,1);
	   bar3d(17,47,29,59,1,1);
	   setfillstyle(1,1);
	   bar3d(30,47,117,59,1,1);
	   setcolor(GREEN);
	   settextstyle(0,0,0);
	   outtextxy(19,50,"");
	   setcolor(0);
	   line(28,49,28,58);
	   line(17,49,28,49);
	   setcolor(15);
	   line(17,58,27,58);
	   line(17,49,17,58);

	   setcolor(0);
	   setfillstyle(1,1);
	   bar3d(17+14,149+14,17+100,149+30,1,1);
	   setcolor(GREEN);
	   settextstyle(2,0,0);
	   golgeyaz(17+30,149+16,"9/B",0,15);

	   settextstyle(0,0,0);
	   golgeyaz(17+1,149+16,"Ø",7,0);
	       //alt program
		  comboac(17,47);
		setcolor(0);
	   setfillstyle(1,1);
	   bar3d(17+14,47+14,17+100,47+30,1,1);
	   setcolor(GREEN);
	   settextstyle(2,0,0);
	   golgeyaz(17+30,47+16,"9/B",0,15);

	   settextstyle(0,0,0);
	   golgeyaz(17+1,47+16,"Ø",7,0);

	       combobut=0;
	       //alt program bitis
	  show();
	  }
	  if (press==0&c4==0&combobut==1)
	  {
	  c3=0;c4++;
	  }

	  //10

	    if (mx>17+14&mx<17+100&my<166+30&my>166+14&press==1&c3==0&combobut==1)
	  {
	  hide();c3++;c4=0;
	   pencere(14,31,543,442,0," Kayit...         10/B sinifina kayit islemi ");
	   combo(17,47,1,7);
	   setcolor(8);
	   setfillstyle(1,1);
	   bar3d(17,47,29,59,1,1);
	   setfillstyle(1,1);
	   bar3d(30,47,117,59,1,1);
	   setcolor(GREEN);
	   settextstyle(0,0,0);
	   outtextxy(19,50,"");
	   setcolor(0);
	   line(28,49,28,58);
	   line(17,49,28,49);
	   setcolor(15);
	   line(17,58,27,58);
	   line(17,49,17,58);


	   setcolor(0);
	   setfillstyle(1,1);
	   bar3d(17+14,166+14,17+100,166+30,1,1);
	   setcolor(GREEN);
	   settextstyle(2,0,0);
	   golgeyaz(17+30,166+16,"10/B",0,15);

	   settextstyle(0,0,0);
	   golgeyaz(17+1,166+16,"Ø",7,0);
	       //alt program
		  comboac(17,47);
		setcolor(0);
	   setfillstyle(1,1);
	   bar3d(17+14,47+14,17+100,47+30,1,1);
	   setcolor(GREEN);
	   settextstyle(2,0,0);
	   golgeyaz(17+30,47+16,"10/B",0,15);

	   settextstyle(0,0,0);
	   golgeyaz(17+1,47+16,"Ø",7,0);
	       combobut=0;
	       //alt program bitis
	  show();
	  }
	  if (press==0&c4==0&combobut==1)
	  {
	  c3=0;c4++;
	  }
	  //11
	   if (mx>17+14&mx<17+100&my<183+30&my>183+14&press==1&c3==0&combobut==1)
	  {
	  hide();c3++;c4=0;
	   pencere(14,31,543,442,0," Kayit...         11/B sinifina kayit islemi ");
	   combo(17,47,1,7);
	   setcolor(8);
	   setfillstyle(1,1);
	   bar3d(17,47,29,59,1,1);
	   setfillstyle(1,1);
	   bar3d(30,47,117,59,1,1);
	   setcolor(GREEN);
	   settextstyle(0,0,0);
	   outtextxy(19,50,"");
	   setcolor(0);
	   line(28,49,28,58);
	   line(17,49,28,49);
	   setcolor(15);
	   line(17,58,27,58);
	   line(17,49,17,58);

	   setcolor(0);
	   setfillstyle(1,1);
	   bar3d(17+14,183+14,17+100,183+30,1,1);
	   setcolor(GREEN);
	   settextstyle(2,0,0);
	   golgeyaz(17+30,183+16,"11/B",0,15);

	   settextstyle(0,0,0);
	   golgeyaz(17+1,183+16,"Ø",7,0);
	       //alt program
		  comboac(17,47);
		setcolor(0);
	   setfillstyle(1,1);
	   bar3d(17+14,47+14,17+100,47+30,1,1);
	   setcolor(GREEN);
	   settextstyle(2,0,0);
	   golgeyaz(17+30,47+16,"11/B",0,15);

	   settextstyle(0,0,0);
	   golgeyaz(17+1,47+16,"Ø",7,0);
	       combobut=0;
	       //alt program bitis
	  show();
	  }
	  if (press==0&c4==0&combobut==1)
	  {
	  c3=0;c4++;
	  }

	  //10 teknik
	   if (mx>17+14&mx<17+100&my<200+30&my>200+14&press==1&c3==0&combobut==1)
	  {
	  hide();c3++;c4=0;
	   pencere(14,31,543,442,0," Kayit...         Teknik 10/B sinifina kayit islemi ");
	   combo(17,47,1,7);
	   setcolor(8);
	   setfillstyle(1,1);
	   bar3d(17,47,29,59,1,1);
	   setfillstyle(1,1);
	   bar3d(30,47,117,59,1,1);
	   setcolor(GREEN);
	   settextstyle(0,0,0);
	   outtextxy(19,50,"");
	   setcolor(0);
	   line(28,49,28,58);
	   line(17,49,28,49);
	   setcolor(15);
	   line(17,58,27,58);
	   line(17,49,17,58);

	   setcolor(0);
	   setfillstyle(1,1);
	   bar3d(17+14,200+14,17+100,200+30,1,1);
	   setcolor(GREEN);
	   settextstyle(2,0,0);
	   golgeyaz(17+30,200+16,"Teknik 10/B",0,15);

	   settextstyle(0,0,0);
	   golgeyaz(17+1,200+16,"Ø",7,0);
	       //alt program
		  comboac(17,47);
		setcolor(0);
	   setfillstyle(1,1);
	   bar3d(17+14,47+14,17+100,47+30,1,1);
	   setcolor(GREEN);
	   settextstyle(2,0,0);
	   golgeyaz(17+30,47+16,"Teknik 10/B",0,15);

	   settextstyle(0,0,0);
	   golgeyaz(17+1,47+16,"Ø",7,0);
	       combobut=0;
	       //alt program bitis
	  show();
	  }
	  if (press==0&c4==0&combobut==1)
	  {
	  c3=0;c4++;
	  }

	  //11 teknik
	   if (mx>17+14&mx<17+100&my<217+30&my>217+14&press==1&c3==0&combobut==1)
	  {
	  hide();c3++;c4=0;
	   pencere(14,31,543,442,0," Kayit...         Teknik 11/B sinifina kayit islemi ");
	   combo(17,47,1,7);
	   setcolor(8);
	   setfillstyle(1,1);
	   bar3d(17,47,29,59,1,1);
	   setfillstyle(1,1);
	   bar3d(30,47,117,59,1,1);
	   setcolor(GREEN);
	   settextstyle(0,0,0);
	   outtextxy(19,50,"");
	   setcolor(0);
	   line(28,49,28,58);
	   line(17,49,28,49);
	   setcolor(15);
	   line(17,58,27,58);
	   line(17,49,17,58);

	   setcolor(0);
	   setfillstyle(1,1);
	   bar3d(17+14,217+14,17+100,217+30,1,1);
	   setcolor(GREEN);
	   settextstyle(2,0,0);
	   golgeyaz(17+30,217+16,"Teknik 11/B",0,15);

	   settextstyle(0,0,0);
	   golgeyaz(17+1,217+16,"Ø",7,0);
	       //alt program
		  comboac(17,47);
		setcolor(0);
	   setfillstyle(1,1);
	   bar3d(17+14,47+14,17+100,47+30,1,1);
	   setcolor(GREEN);
	   settextstyle(2,0,0);
	   golgeyaz(17+30,47+16,"Tekink 11/B",0,15);

	   settextstyle(0,0,0);
	   golgeyaz(17+1,47+16,"Ø",7,0);
	       combobut=0;
	       //alt program bitis
	  show();
	  }
	  if (press==0&c4==0&combobut==1)
	  {
	  c3=0;c4++;
	  }

	  //12 teknik
	   if (mx>17+14&mx<17+100&my<234+30&my>234+14&press==1&c3==0&combobut==1)
	  {
	  hide();c3++;c4=0;
	   pencere(14,31,543,442,0," Kayit...         Teknik 12/B sinifina kayit islemi ");
	   combo(17,47,1,7);
	   setcolor(8);
	   setfillstyle(1,1);
	   bar3d(17,47,29,59,1,1);
	   setfillstyle(1,1);
	   bar3d(30,47,117,59,1,1);
	   setcolor(GREEN);
	   settextstyle(0,0,0);
	   outtextxy(19,50,"");
	   setcolor(0);
	   line(28,49,28,58);
	   line(17,49,28,49);
	   setcolor(15);
	   line(17,58,27,58);
	   line(17,49,17,58);

	   setcolor(0);
	   setfillstyle(1,1);
	   bar3d(17+14,234+14,17+100,234+30,1,1);
	   setcolor(GREEN);
	   settextstyle(2,0,0);
	   golgeyaz(17+30,234+16,"Teknik 12/B",0,15);

	   settextstyle(0,0,0);
	   golgeyaz(17+1,234+16,"Ø",7,0);
	       //alt program
		  comboac(17,47);
		setcolor(0);
	   setfillstyle(1,1);
	   bar3d(17+14,47+14,17+100,47+30,1,1);
	   setcolor(GREEN);
	   settextstyle(2,0,0);
	   golgeyaz(17+30,47+16,"Teknik 12/B",0,15);

	   settextstyle(0,0,0);
	   golgeyaz(17+1,47+16,"Ø",7,0);
	       combobut=0;
	       //alt program bitis
	  show();
	  }
	  if (press==0&c4==0&combobut==1)
	  {
	  c3=0;c4++;
	  }

	  //aáilçr menu butonlarçna mouse olayç




	  //ana pencere about
	  if (mx>7&mx<16&my<15&my>6&press==1&bk==0)
	  {
	  hide();bk++;bk1=0;
	  settextstyle(0,0,0);
	  setfillstyle(1,8);
	  setcolor(15);
	  fillellipse(9,8,5,5);
	  setcolor(0);
	  outtextxy(5,4,"i");
	       //alt program

	       settextstyle(2,0,0);
	       golgeyaz(10,465,"Bu Program GATTEML den Erkan Esen & Sait GÅndogan Tarafçndan hazirlanmistir...",8,15);

	       //alt program bitis
	  show();
	  }
	  if (press==0&bk1==0)
	  {
	  bk=0;bk1++; hide();
	  settextstyle(0,0,0);
	  setfillstyle(1,2);
	  setcolor(6);
	  fillellipse(9,8,5,5);
	  setcolor(15);
	  outtextxy(5,4,"i");
	  show();
	  }
	  //ana pencere about bitis

}//while dîngÅsÅ bitisi (ana dîngÅ)



getch();
}//ana program bitis





