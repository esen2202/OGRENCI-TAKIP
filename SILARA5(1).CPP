#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<io.h>
#include<ctype.h>

struct kay {
char ad[20];
char sad[20];
char sinif[20];
char no[20];
char notu[5];
char devam[5];
char adres[150];
char tlf[12];
} kayit;
struct sn2{
char sinifi[20];
}sn;

struct numara2{
char ad[20];
char sad[20];
char sinif[20];
char no[20];
char k;
}numara;
char dosadi[20],dosadi2[20],dosadi3[20],dosadi4[20];
FILE *dosya;
char araogr[5];
char duzogr[5];
char cvp,cvp2;
char ara[30],adsad1[30],adsad2[30],ara2[30],silsnf[30],duzsnf[30];

char *numk,*notk,*devamk,*tlfk,*sil,*duz;
int snsay,snvr,i,listelem,iste,kayitlar;

char secim;

void giris()
{do{
 clrscr();
gotoxy(5,1); printf("Adi giriniz.......: ");gets(kayit.ad);
gotoxy(5,3);  printf("Soyadi giriniz...: ");gets(kayit.sad);
gotoxy(5,5);  printf("Sinifi giriniz...: ");gets(kayit.sinif);
  while(1==1){
 gotoxy(5,7); clreol(); printf("Numarayi giriniz.: "); gets(numk);
   if((isdigit(*numk)) && (strlen(numk)>0) && (strlen(numk)<5)){
  strcpy(dosadi4,numk);
  strcat(dosadi4,".dat");
 dosya=fopen(dosadi4,"r+");
 if (dosya==NULL){
   strcpy(kayit.no,numk);break;}}}

 gotoxy(5,9); printf("Adresi giriniz...: ");gets(kayit.adres);
  while(1==1){
 gotoxy(5,11);clreol(); printf("Not Ortalamasi...: "); gets(notk);
   if(isdigit(*notk)){ strcpy(kayit.notu,notk);break;}}
  while(1==1){
 gotoxy(5,13);clreol(); printf("Devamsizlik......: "); gets(devamk);
   if(isdigit(*devamk)){ strcpy(kayit.devam,devamk);break;}}
   while(1==1){
 gotoxy(5,15);clreol(); printf("Telefon...........: "); gets(tlfk);
   if(isdigit(*tlfk)){ strcpy(kayit.tlf,tlfk);break;}}
 strcpy(dosadi,kayit.no);
  strcat(dosadi,".dat");
  dosya=fopen(dosadi,"a+");
  fwrite(&kayit,sizeof(struct kay),1,dosya); /*ogrenci dosyas� olusumu*/

   strcpy(sn.sinifi,kayit.sinif);
   dosya=fopen("SINIF.dat","a+");
  fwrite(&sn,sizeof(struct sn2),1,dosya); /*s�n�flar�n listesi*/
  fclose(dosya);

  strcpy(numara.sinif,kayit.sinif);
  strcpy(numara.no,kayit.no);
  strcpy(numara.ad,kayit.ad);
  strcpy(numara.sad,kayit.sad);
  strcpy(dosadi2,sn.sinifi);
  numara.k='*';
  strcat(dosadi2,".dat");
  dosya=fopen(dosadi2,"a+");
  fwrite(&numara,sizeof(struct numara2),1,dosya);/*numara listesi*/
  flushall();
  fcloseall();

 gotoxy(10,19);printf("Ogrenci Kayit islemini Devam Edecek misiniz?[E/H]:");
 cvp=getche();
 }while (cvp=='E' || cvp=='e');
  fclose(dosya);
}


void arama()
{ int i,kaysay;
 i=1;
 if (iste != 88){printf("Ogrenci Numarasini giriniz:");gets(araogr);}
 strcpy(dosadi,araogr);
 strcat(dosadi,".dat");
 dosya=fopen(dosadi,"r+");
 if (dosya==NULL){
 clrscr();printf("Bu numarada ogrenci kaydi yok!!!");}
 else {
 clrscr();
 kaysay=filelength(fileno(dosya))/sizeof(struct kay);
  for (i=0;i<kaysay;i++)
 {
 fseek(dosya,i*sizeof(struct kay),SEEK_SET);
 fread(&kayit, sizeof(struct kay),1,dosya);
 textcolor(RED);
 gotoxy(1,1);cprintf("SINIF ");
 gotoxy(7,1);cprintf("NUMARA ");
 gotoxy(15,1);cprintf("AD");
 gotoxy(25,1);cprintf("SOYAD ");
   if (listelem==88){
 textcolor(RED);
 gotoxy(35,1);cprintf("NOT ORT.");
 gotoxy(44,1);cprintf("DEVAM.");
 gotoxy(52,1);cprintf("ADRES");
 gotoxy(68,1);cprintf("TELEFON");
 gotoxy(35,i+2);printf("%s",kayit.notu);
 gotoxy(44,i+2);printf("%s",kayit.devam);
 gotoxy(52,i+2);printf("%s",kayit.adres);
 gotoxy(68,i+2);printf("%s",kayit.tlf);
 }

  gotoxy(1,i+2); printf("%s",kayit.sinif);
  gotoxy(7,i+2); printf("%s",kayit.no);
  gotoxy(15,i+2);printf("%s",kayit.ad);
  gotoxy(25,i+2);printf("%s",kayit.sad);
   }
  fclose(dosya);}
 getche();
}

void arama2()
{char snf[5];
int i,kaysay;
i=1;
clrscr();
printf("SINIF ADINI GIRINIZ:");gets(snf);
 strcpy(dosadi,snf);
 strcat(dosadi,".dat");
 dosya=fopen(dosadi,"r+");
 if (dosya==NULL){
 clrscr();printf("Bu isimde sinif kaydi yok!!!");getch();}
 else {
 clrscr();
 kaysay=filelength(fileno(dosya))/sizeof(struct numara2);
 gotoxy(1,1);printf("Aranacak Kisinin Adi Giriniz:");gets(ara);
 flushall();
  gotoxy(1,2);printf("Aranacak Kisinin Soyadi Giriniz:");gets(ara2);
 flushall();
 strcpy(adsad1,ara);
 strcat(adsad1,ara2);
 for(i=0;i<kaysay;i++)
 {fseek(dosya,i*sizeof(struct numara2),SEEK_SET);
  fread(&numara,sizeof(struct numara2),1,dosya);
  strcpy(adsad2,numara.ad);
  strcat(adsad2,numara.sad);
     if((strcmp(adsad1,adsad2)==0) && (strlen(ara)==strlen(numara.ad)) && numara.k=='*') {
   clrscr();
  textcolor(RED);
 gotoxy(1,1);cprintf("SINIF ");
 gotoxy(7,1);cprintf("NUMARA ");
 gotoxy(15,1);cprintf("AD");
 gotoxy(25,1);cprintf("SOYAD ");
 gotoxy(35,1);cprintf("NOT ORT.");
 gotoxy(44,1);cprintf("DEVAM.");
 gotoxy(52,1);cprintf("ADRES");
 gotoxy(68,1);cprintf("TELEFON");
 textcolor(11);
 gotoxy(1,2); printf("%s",numara.sinif);
 gotoxy(7,2); printf("%s",numara.no);
 gotoxy(15,2);printf("%s",numara.ad);
 gotoxy(25,2);printf("%s",numara.sad);
 fcloseall();
 strcpy(dosadi2,numara.no);
 strcat(dosadi2,".dat");
 dosya=fopen(dosadi2,"r+");
 fseek(dosya,0*sizeof(struct kay),SEEK_SET);
 fread(&kayit,sizeof(struct kay),1,dosya);
  gotoxy(35,2);printf("%s",kayit.notu);
 gotoxy(44,2);printf("%s",kayit.devam);
 gotoxy(52,2);printf("%s",kayit.adres);
 gotoxy(68,2);printf("%s",kayit.tlf);



 } }}
 fcloseall();
 getch();

 }



void listele()
{char snf[5];
 int i,kaysay;
 i=1;
 kayitlar=0;
  clrscr();
 printf("SINIF ADINI GIRINIZ.:");gets(snf);
 strcpy(dosadi,snf);
 strcat(dosadi,".dat");
 dosya=fopen(dosadi,"r+");
 if (dosya==NULL){
 clrscr();printf("Bu isimde sinif kaydi yok!!!");getch();}
 else {
 clrscr();
 kaysay=filelength(fileno(dosya))/sizeof(struct numara2);
  for (i=0;i<kaysay;i++)
 {
 fseek(dosya,i*sizeof(struct numara2),SEEK_SET);
 fread(&numara, sizeof(struct numara2),1,dosya);
 if (numara.k=='*'){
textcolor(RED);
kayitlar=kayitlar+1;
 gotoxy(1,1);cprintf("SINIF ");
 gotoxy(7,1);cprintf("NUMARA ");
 gotoxy(15,1);cprintf("AD");
 gotoxy(25,1);cprintf("SOYAD ");
   if (listelem==88){
 textcolor(RED);
 gotoxy(35,1);cprintf("NOT ORT.");
 gotoxy(44,1);cprintf("DEVAM.");
 gotoxy(52,1);cprintf("ADRES");
 gotoxy(68,1);cprintf("TELEFON");
 gotoxy(35,kayitlar+1);printf("%s",kayit.notu);
 gotoxy(44,kayitlar+1);printf("%s",kayit.devam);
 gotoxy(52,kayitlar+1);printf("%s",kayit.adres);
 gotoxy(68,kayitlar+1);printf("%s",kayit.tlf);
 }
  gotoxy(1,kayitlar+1); printf("%s",numara.sinif);
  gotoxy(7,kayitlar+1); printf("%s",numara.no);
  gotoxy(15,kayitlar+1);printf("%s",numara.ad);
  gotoxy(25,kayitlar+1);printf("%s",numara.sad);
 }  }
 if (kayitlar==0){clrscr(); printf("Bu isimde sinif kaydi yok!!!");getch();}
  fclose(dosya);
   gotoxy(5,22);
  listelem=88; textcolor(11);if (kayitlar!=0){arama();}
  clrscr();}
 }
 void duzelt()
  {int kaysay;
   clrscr();
    while(1==1){
 gotoxy(18,15);clreol();printf("D�zeltilecek �grencinin numaras�n� giriniz:"); gets(duz);
  if((isdigit(*duz)) && (strlen(duz)>0) && (strlen(duz)<5)) { strcpy(dosadi,duz);break;}}
 iste=88;
  strcpy(araogr,duz);
  arama();
  strcat(araogr,".dat");
  dosya=fopen(araogr,"r+b");
  strcpy(duzsnf,kayit.sinif);
  strcat(duzsnf,".dat");

   if (dosya==NULL){clrscr();
 fcloseall();}
  else {
 fcloseall();
      gotoxy(10,19);printf("Ogrenci Kayd�n� D�zeltmek Istediginizden Emin misiniz?[E/H]:");
 cvp2=getche(); iste=0;

     if (cvp2=='E' || cvp2=='e'){
     fcloseall();
   strcpy(duzogr,duz);
   strcat(duzogr,".dat");
   dosya=fopen(duzogr,"r+b");
   kaysay=filelength(fileno(dosya))/sizeof(struct kay);
  for(i=0;i<kaysay;i++)
  {fseek(dosya,i*sizeof(struct kay),SEEK_SET);
   fread(&kayit,sizeof(struct kay),1,dosya);
   if (strcmp(duz,kayit.no)==0){clrscr();
   textcolor(11);
   gotoxy(10,12);printf("[1]Ad          : %3s",kayit.ad);
   gotoxy(10,13);printf("[2]Soyad       : %3s",kayit.sad);
   gotoxy(10,14);printf("[3]Sinif       : %3s",kayit.sinif);
   gotoxy(10,15);printf("[4]Devamsizlik : %3s",kayit.devam);
   gotoxy(10,16);printf("[5]Adres       : %3s",kayit.adres);
   gotoxy(10,17);printf("[6]Notu        : %3s",kayit.notu);
   secim=getch();
   textcolor(11);
    if(secim=='1'){gotoxy(40,12);printf("Yeni Ad          :");gets(kayit.ad);}
    if(secim=='2'){gotoxy(40,13);printf("Yeni Soyad       :");gets(kayit.sad);}
    if(secim=='3'){gotoxy(40,14);printf("Yeni Sinif       :");gets(kayit.sinif);}
    if(secim=='4'){gotoxy(40,15);printf("Yeni Devamsizlik :");gets(kayit.devam);}
    if(secim=='5'){gotoxy(40,16);printf("Yeni Adres       :");gets(kayit.adres);}
    if(secim=='6'){gotoxy(40,17);printf("Yeni Notu        :");gets(kayit.notu);}

   fseek(dosya,i*sizeof(struct kay),SEEK_SET);
   fwrite(&kayit,sizeof(struct kay),1,dosya);
   fclose(dosya);
      getch();
    }                            }
   fclose(dosya);
     }
    /* if (cvp=='E' || cvp=='e'){
 dosya=fopen(silsnf,"r+b");
  kaysay=filelength(fileno(dosya))/sizeof(struct numara2);
  for(i=0;i<kaysay;i++)
  {fseek(dosya,i*sizeof(struct numara2),SEEK_SET);
   fread(&numara,sizeof(struct numara2),1,dosya);
   if (strcmp(sil,numara.no)==0){numara.k=' ';
   numara.k='s';
   fseek(dosya,i*sizeof(struct numara2),SEEK_SET);
   fwrite(&numara,sizeof(struct numara2),1,dosya);
   }}
   fclose(dosya);*/




      }
	  }

 void silme()
 {int kaysay;
  clrscr();

  while(1==1){
 gotoxy(18,15);clreol();printf("Silinecek �grencinin numaras�n� giriniz:"); gets(sil);
     if((isdigit(*sil)) && (strlen(sil)>0) && (strlen(sil)<5)) { strcpy(dosadi,sil);break;}}
  iste=88;
  strcpy(araogr,sil);
  arama();
  strcat(araogr,".dat");
  dosya=fopen(araogr,"r+b");
  strcpy(silsnf,kayit.sinif);
  strcat(silsnf,".dat");
   if (dosya==NULL){clrscr();printf("Bu numarada �grenci kaydi yok!!!");getch();
 fcloseall();}
 else {
 fcloseall();
   gotoxy(10,19);printf("Ogrenci Kayd�n� Silmek Istediginizden Emin misiniz?[E/H]:");
 cvp=getche(); iste=0;

 if (cvp=='E' || cvp=='e'){
 dosya=fopen(silsnf,"r+b");
  kaysay=filelength(fileno(dosya))/sizeof(struct numara2);
  for(i=0;i<kaysay;i++)
  {fseek(dosya,i*sizeof(struct numara2),SEEK_SET);
   fread(&numara,sizeof(struct numara2),1,dosya);
   if (strcmp(sil,numara.no)==0){numara.k=' ';
   numara.k='s';
   fseek(dosya,i*sizeof(struct numara2),SEEK_SET);
   fwrite(&numara,sizeof(struct numara2),1,dosya);
   }}
   fclose(dosya);
     if (remove(dosadi)==0){
   gotoxy(10,21);printf("%s Numaral� ogrenci kaydi Silindi",sil);getch();}
			   }
       }
 }

void main()
{
 char d;
  do
  {
  textcolor(11);
   clrscr();
   textcolor(11);
   snvr=1; listelem=1;

   printf("     MENU\n");
   printf("1-OGRENCI KAYIT\n");
   printf("2-SINIF LISTELEME \n");
   printf("3-NUMARAYA G�RE ARAMA \n");
   printf("4-OGRENCI SILME \n");
   printf("5-ADA G�RE ARAMA \n");
   printf("6-OGRENCI DUZELT \n");
   printf("7-CIKIS\n");
   printf("---Seciminiz....=>");
   d=getche();

   if (d=='1'){ giris();
  }
   if (d=='3'){listelem=88;clrscr();arama();
 }
    if (d=='2'){listele();
     }
    if (d=='4'){silme();
     }
     if (d=='5'){arama2();
     }
     if (d=='6'){duzelt();
     }
 } while (d!='7');
   fcloseall();
 }