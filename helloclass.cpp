#include"helloclass.h"
#include<iostream>
using namespace std;

HelloClass::HelloClass()
{
  cout<<"I'm being creating"<<endl;
}

HelloClass::~HelloClass()
{
  cout<<"I'm being destroying"<<endl;
}

void HelloClass::sayhello()
{
  cout<<"hello class!"<<endl;
}

