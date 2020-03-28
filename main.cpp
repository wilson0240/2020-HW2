#include <iostream>
#include <stdlib.h> //亂數相關函數
#include <time.h>  //時間相關函數
#include <conio.h> //enter繼續
using namespace std;
int alltotal=0;

int main()
{
    cout<<" /////////// Si-Bar-Lar ///////////"<<endl;
    cout<<"按Enter 開始遊戲"<<endl<<endl;
    getch();  //暫停輸入enter
    srand(time(NULL));//設定亂數不固定
    for (int j=1;j<=1000;j++){
    int dice1 = rand( ) %6+ 1; //隨機數除6的餘數+1
    int dice2 = rand( ) %6+ 1;
    int dice3 = rand( ) %6+ 1;
    int people = rand() % (10 - 1 + 1) + 1; //設定每局人數1-10人
    cout<<"第"<<j<<"局參加人數:"<<people<<endl;
    cout<<"骰子點數:"<<dice1<<","<<dice2<<","<<dice3<<endl;
    //賭客
    int dice[people],money[people],money1[people]; //每個人壓的點數
    int totalmoney=0;
    for (int i=1;i<=people;i++){
    dice[i] = rand( ) %6+ 1;
    money[i] = (rand() % (10 - 1 + 1) + 1)*100;
    money1[i] = money[i];
     if(dice[i] == dice1){
        money1[i]=0;}
     else if(dice[i] == dice2){
        money1[i]=0;}
     else if(dice[i] == dice3){
        money1[i]=0;}

    cout<<"賭客["<<i<<"] 壓點:"<<dice[i]<<"   賭金額:"<<money[i]<<"   付金額:"<<money1[i]<<endl;

    totalmoney = totalmoney+money1[i] ;
    }
    cout<<"           收入總金額:"<<totalmoney<<endl;
    //莊家
    int sum[people];
    int totalmoney2=0;

    for (int i=1;i<=people;i++){
        sum[i] = 0;
        if(dice[i] == dice1){
        sum[i] = money[i];}
        if(dice[i] == dice2){
        sum[i] = sum[i]+money[i];}
        if(dice[i] == dice3){
        sum[i] = sum[i]+money[i];}
        cout<<"sum:["<<i<<"]"<<sum[i]<<endl;
        totalmoney2 = totalmoney2+sum[i] ;
        }
    int total[1000]={};//空集合 會址呈現16個
    total[1000]=totalmoney-totalmoney2;
    cout<<"           支出總金額:"<<totalmoney2<<endl;
    cout<<"第"<<j<<"局莊家贏的金額:"<<total[1000]<<endl;
    alltotal = alltotal+total[1000];
    cout<<"           累積總金額:"<<alltotal<<endl<<endl;
    }
    cout << (double)clock() / CLOCKS_PER_SEC << " S";
}
