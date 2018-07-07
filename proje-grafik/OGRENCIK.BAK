#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char const DOSYA_ADI[]="OGRENCI.DAT";
char const BOS[]="\r\r\r\r\r\r\r";
#define ANHTR_UZ  7
char const  AKD[]="%7s";
#define ISIM_UZ 15
#define KAYIT_BOYU ((long)(ANHTR_UZ+ISIM_UZ+4))
char const KKD[]="%7s%15s%4d";

struct kayit {
char anhtr[ANHTR_UZ+1], isim[ISIM_UZ+1];
int yil;
};

char satir[128];
FILE *dg;


void dizioku(char d[],int u)
{
gets(satir);
strncpy(d,satir,u);
d[u]='\0';
}


long bul(char const anhtr[]){
int drm,kar=1;
long dns;
char d1[ANHTR_UZ+1], d2[ANHTR_UZ+1];
sprintf(d2,AKD,anhtr);
dg=fopen(DOSYA_ADI,"rb");
if(dg==NULL)
return -1L;
drm=fseek(dg,-KAYIT_BOYU,SEEK_END);
while(drm==0 && fgets(d1, ANHTR_UZ+1,dg) !=NULL &&
(kar=strcmp(d2,d1))!=0)
drm=fseek(dg,-KAYIT_BOYU-ANHTR_UZ,SEEK_CUR);
if(kar==0)
dns=ftell(dg)-ANHTR_UZ;
else
dns=-1L;
fclose(dg);
return dns;
}


void ekle(void){long konum;
struct kayit k;
int scd;
puts("Eklenecek îßrenci nuymarasçnç girin:");
dizioku(k.anhtr,ANHTR_UZ);
if(bul(k.anhtr)==-1L){
puts("Ogrenci adçnç girin:");
dizioku(k.isim,ISIM_UZ);
do{
puts("Kayçt yçlçnç girin:");
scd=scanf("%d",&k.yil);
gets(satir);

}
while(1!=scd || k.yil<1980 || k.yil>9999);
konum=bul(BOS);
dg=fopen(DOSYA_ADI, "ab");
fclose(dg);
dg=fopen(DOSYA_ADI, "r+b");
if (konum==-1L)
fseek(dg,0L,SEEK_END);
else
fseek(dg,konum,SEEK_SET);
fprintf(dg,KKD,k.anhtr,k.isim,k.yil);
fclose(dg);
puts("Ekleme iülemi tamamlandç...");
}
else
fprintf(stderr,"Cift anahtar!\n\a");
}


void silme(void){
long konum;
char anhtr[ANHTR_UZ+1];
puts("silinecek îßrenci numarasçnç girin:");
dizioku(anhtr,ANHTR_UZ);
if((konum=bul(anhtr))!=-1L){
dg=fopen(DOSYA_ADI, "r+b");
fseek(dg,konum,SEEK_SET);
fprintf(dg,AKD,BOS);
fclose(dg);
puts("Silme iülemi tamamlandç...");
}
else
fprintf(stderr,"Boyle anahtar yok!\n\a");
}


void goruntuleme(void){
long konum;
struct kayit k;
puts("Goruntulenecek ogrenci numarasçnç girin:");
dizioku(k.anhtr,ANHTR_UZ);
if ((konum=bul(k.anhtr))!=-1L){
dg=fopen(DOSYA_ADI,"rb");
fseek(dg,konum+ANHTR_UZ,SEEK_SET);
printf("ôßrenci adç: %s\n",fgets(k.isim,ISIM_UZ+1,dg));
fscanf(dg,"%d",&k.yil);
fclose(dg);
printf("Kayit yçlç: %d\n",k.yil);
}
else
fprintf(stderr,"Bîyle anahtar yok!\n\a");
}



int menu(void){
int secenek;
do{
puts("\n\t1.Kayit Giriüi\n\t2.Kayit Silme\n\t3.Kayit Listeleme\4.Äçkçü ");
printf("\n\tSeáiminiz:");
}while((secenek=getche()) < '0'||secenek>'3');
putchar('\n');
return secenek-'0';
}


void main(void){
static void(*fd[])(void)=
{(void(*)(void))exit,ekle, silme, goruntuleme};
while(1)(*fd[menu()])();
}


