#include <iostream>
#include <stdlib.h> //�üƬ������
#include <time.h>  //�ɶ��������
#include <conio.h> //enter�~��
using namespace std;
int main()
{
    cout<<" /////////// Si-Bar-Lar ///////////"<<endl;
    cout<<"��Enter �}�l�C��"<<endl<<endl;
    getch();  //�Ȱ���Jenter
    srand(time(NULL));//�]�w�üƤ��T�w
    for (int i=1;i<=1000;i++){
    int people = rand() % (10 - 1 + 1) + 1; //�]�w�C���H��1-10�H
    cout<<"��"<<i<<"���ѥ[�H��:"<<people<<endl;
    int dice[people]; //�C�ӤH�����I��
    for (int i=1;i<=people;i++){
    dice[i] = rand( ) %6+ 1;
    cout<<"dice["<<i<<"]"<<dice[i]<<endl;
    }
    int money[people]; //�C�ӤH������
    for (int i=1;i<=people;i++){
    money[i] = (rand() % (10 - 1 + 1) + 1)*100;
    //cout<<"money["<<i<<"]"<<money[i]<<endl;
    }
    int totalmoney=0;
    for (int i=1;i<=people;i++){
    totalmoney = totalmoney+money[i] ;
    }
    cout<<"��������`���B:"<<totalmoney<<endl;
    //���a
    int dice1 = rand( ) %6+ 1; //�H���ư�6���l��+1
    int dice2 = rand( ) %6+ 1;
    int dice3 = rand( ) %6+ 1;
    cout<<"��l�I��:"<<dice1<<dice2<<dice3<<endl;
    int sum[people];
    for (int i=1;i<=people;i++){
        if(dice[i] == dice1){
        sum[i] = money[i];}
        else{sum[i] = 0;} //�d�ѰO�]0
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
    int total[]={};//�Ŷ��X �|�}�e�{16��
    total[15]=totalmoney-totalmoney2;
    cout<<"���a�I�X�`���B:"<<totalmoney2<<endl;
    cout<<"���aĹ�����B:"<<i<<"fdsdsdas"<<total[15]<<endl;
    }
}
