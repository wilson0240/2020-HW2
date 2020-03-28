#include <iostream>
#include <stdlib.h> //亂數相關函數
#include <time.h>  //時間相關函數
#include <conio.h> //enter繼續
using namespace std;
int main()
{
    cout<<" /////////// Si-Bar-Lar ///////////"<<endl;
    cout<<"按Enter 開始遊戲"<<endl<<endl;
    getch();  //暫停輸入enter
    srand(time(NULL));//設定亂數不固定
    for (int i=1;i<=1000;i++){
    int people = rand() % (10 - 1 + 1) + 1; //設定每局人數1-10人
    cout<<"第"<<i<<"局參加人數:"<<people<<endl;
    int dice[people]; //每個人壓的點數
    for (int i=1;i<=people;i++){
    dice[i] = rand( ) %6+ 1;
    cout<<"dice["<<i<<"]"<<dice[i]<<endl;
    }
    int money[people]; //每個人壓的錢
    for (int i=1;i<=people;i++){
    money[i] = (rand() % (10 - 1 + 1) + 1)*100;
    //cout<<"money["<<i<<"]"<<money[i]<<endl;
    }
    int totalmoney=0;
    for (int i=1;i<=people;i++){
    totalmoney = totalmoney+money[i] ;
    }
    cout<<"賭客壓的總金額:"<<totalmoney<<endl;
    //莊家
    int dice1 = rand( ) %6+ 1; //隨機數除6的餘數+1
    int dice2 = rand( ) %6+ 1;
    int dice3 = rand( ) %6+ 1;
    cout<<"骰子點數:"<<dice1<<dice2<<dice3<<endl;
    int sum[people];
    for (int i=1;i<=people;i++){
        if(dice[i] == dice1){
        sum[i] = money[i];}
        else{sum[i] = 0;} //卡忘記設0
        //cout<<"sum1:["<<i<<"]"<<sum[i]<<endl;
        if(dice[i] == dice2){
        sum[i] = sum[i]+money[i];}
        //cout<<"sum2:["<<i<<"]"<<sum[i]<<endl;
        if(dice[i] == dice3){
        sum[i] = sum[i]+money[i];}
        //cout<<"sum3:["<<i<<"]"<<sum[i]<<endl;
        }
    int totalmoney2=0;
    for (int i=1;i<=people;i++){
    totalmoney2 = totalmoney2+sum[i] ;
    }
    int total[]={};//空集合 會址呈現16個
    total[15]=totalmoney-totalmoney2;
    cout<<"莊家付出總金額:"<<totalmoney2<<endl;
    cout<<"莊家贏的金額:"<<i<<"fdsdsdas"<<total[15]<<endl;
    }
}
