#include <stdio.h>
#include <stdlib.h>
#include <iostream>
//#include <bits/stdc++.h>
#include "BTree.h"
#include "BPlusTree.h"
#include "Context.h"

using namespace std;
int main()
{

	/*************************************ֱ�ӵ��� B �ĵ���ʹ��****************************************/
	/************************************* Direct call B method ****************************************/
	BTree bt;
	//BPlusTree bpt;
    int choice, digit;
    FILE *fp;
    fp = fopen("temp3.txt", "r");
    //  if(fp)printf("hello");
    int a[200];
    for (int i = 0;i<200;i++)
    {
        fscanf(fp,"%d",&a[i]);
    }
   // insertsort(a,0,39999);
    fclose(fp);
//    for(int i =1;i<100;i++)
//       printf("%d\n",a[i]);

    cout<<"3-key 4-point per node\n����:\n����1���в���\n���������ɾ��\n����2���в�ѯ\n����3���ļ�����\n";
	while(1)
    {
        cin>>choice>>digit;
        if(choice==1)
        {
            bt.insert(digit);
            cout<<"����㵽��ײ�Ľڵ㣨������ȣ�: ";
            bt.level_display();
            cout<<"B���õ���������: ";
            bt.inorder_print();
            cout<<endl<<"�ܽڵ���Ŀ: ";
            bt.NodeNum_print();
        }
        else if(choice==0)
        {
            bt.del(digit);
            cout<<"����㵽��ײ�Ľڵ㣨������ȣ�: ";
            bt.level_display();
            cout<<"B���õ���������: ";
            bt.inorder_print();
            cout<<endl<<"�ܽڵ���Ŀ: ";
            bt.NodeNum_print();
        }
        else if(choice==2)
        {
            int query_times = 0;
            bt.query(digit, query_times);
        }
        else if(choice = 3){
            int j = 0;
            for(;j<200;j++){
            bt.insert(a[j]);
            cout<<"����㵽��ײ�Ľڵ㣨������ȣ�: ";
            bt.level_display();
            cout<<"B���õ���������: ";
            bt.inorder_print();
            cout<<endl<<"�ܽڵ���Ŀ: ";
            bt.NodeNum_print();
            }
        }
        else break;
    }

    return 0;
}

