#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

class date
{

    int day=-1;
    int month=-1;
    int year=-1;

    int checkDay(int d, int m , int y);
    int checkMonth(int m);
    int checkYear(int y);
    int checkLeapYear(int y);

public:
   int setDate(int d, int m, int y);
    int getDay()
    {
        return day;
    }
    int getMonth()
    {
        return month;
    }
    int getYear()
    {
        return year;
    }
    string getDate()
    {

        string s=="";
        s+=day;
        s+="/";
        s+=month;
        s+="/";
        s+=year;
    }

};

int date::checkDate(int day,int year,int month)
{

    if (month == 2 && checkLeapYear(year))
    {

        if(d>=1 && d<=29)
        {
            return true;

        }
    }
    else if(m==2)
    {

        if(d>=1 && d<=28)
            return true;
    }
    else if (m!=2 && m%2==0)
    {

        if(d>1 && d<=30)
            return true;
    }
    return false;
}

int date:: checkMonth(int month)
{
    if(month>0)
        return true;

}

int date:: checkLeapYear(int year)
{

    if(year%4== 0)
        return true;
}

int Date:: setdate(int day, int month, int year)
{
    if (!checkYear(y))
    {

        cout<<"Invalid year"<<endl;
        return false;
    }
    if (!checkMonth(m))
    {

        cout<<"Invalid MOnth"<<endl;
        return false;
    }
    if(!checkday(d,m,y))
    {

        count<<"Invalid Day"<<endl;
        return false;
    }
    day=d;
    month=m;
    year=y;
    return true;
}

struct Node
{

    Date timeStamp;
    string data;bool date:: checkMonth()
    int nodeNumber;
    string nodeId;
    string referenceNodeId;
    string childReferenceNodeId;
    string genesisReferenceNodeId;
    string hashvalue;

    vector<Node*> child;
    Node* parent;

};


class List
{
  Node* genesis = nullptr;
  unsigned long nodeCount=0;


public:
    List()
    {
        genesis = new Node;
        if(genesis !=   NULL)
        {
            ++nodeCount;
            genesis->nodeNumber= ++nodeCount++;
            genesis->nodeId = nodeCount;
            genesis->referenceNodeId = "";
            auto address = &genesis;
            genesis->genesisReferenceNodeId +=address;

        }
        genesis->nodeNumber= ++nodeCount;
    }
} ;


int Maxchain(struct node * genesis)
{
   /* base case where tree is empty */
   if (genesis == NULL)
     return 0;

  /* get the height of left and right sub-trees */
  int lheight = height(genesis->left);
  int rheight = height(genesis->right);

  /* get the diameter of left and right sub-trees */
  int ldiameter = diameter(tree->left);
  int rdiameter = diameter(tree->right);

  return max(lheight + rheight + 1, max(ldiameter, rdiameter));
}

int Maxheight(struct node* node)
{
   /* base case tree is empty */
   if(node == NULL)
       return 0;

   /* If tree is not empty then height = 1 + max of left
      height and right heights */
   return 1 + max(height(node->left), height(node->right));
}

int main()
{

 return 0;
}