#include <iostream>
#include <stdlib.h> //�üƬ������
#include <time.h>  //�ɶ��������
#include <conio.h> //enter�~��
using namespace std;
int alltotal=0;

int main()
{
    cout<<" /////////// Si-Bar-Lar ///////////"<<endl;
    cout<<"��Enter �}�l�C��"<<endl<<endl;
    getch();  //�Ȱ���Jenter
    srand(time(NULL));//�]�w�üƤ��T�w
    for (int j=1;j<=1000;j++){
    int dice1 = rand( ) %6+ 1; //�H���ư�6���l��+1
    int dice2 = rand( ) %6+ 1;
    int dice3 = rand( ) %6+ 1;
    int people = rand() % (10 - 1 + 1) + 1; //�]�w�C���H��1-10�H
    cout<<"��"<<j<<"���ѥ[�H��:"<<people<<endl;
    cout<<"��l�I��:"<<dice1<<","<<dice2<<","<<dice3<<endl;
    //���
    int dice[people],money[people],money1[people]; //�C�ӤH�����I��
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

    cout<<"���["<<i<<"] ���I:"<<dice[i]<<"   ����B:"<<money[i]<<"   �I���B:"<<money1[i]<<endl;

    totalmoney = totalmoney+money1[i] ;
    }
    cout<<"           ���J�`���B:"<<totalmoney<<endl;
    //���a
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
    int total[1000]={};//�Ŷ��X �|�}�e�{16��
    total[1000]=totalmoney-totalmoney2;
    cout<<"           ��X�`���B:"<<totalmoney2<<endl;
    cout<<"��"<<j<<"�����aĹ�����B:"<<total[1000]<<endl;
    alltotal = alltotal+total[1000];
    cout<<"           �ֿn�`���B:"<<alltotal<<endl<<endl;
    }
    cout << (double)clock() / CLOCKS_PER_SEC << " S";
}
