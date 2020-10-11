#include<bits/stdc++.h>

using namespace std;

#include<iostream>
using namespace std;


typedef struct Node {
	int data;
	struct Node *next;
}Node;

void LinkCreate(Node *&L) {
	int a=0;
	cout << "ÇëÊäÈëÊý¾Ý" << endl;
	cin >> a;
	while (a!=0) {
		Node *p;
		p = (Node*)malloc(sizeof(Node));
		p->data = a;
		p->next = L;
		L = p;
		cin >> a;
	}

}
void Reverse(Node *head)
{
Node *p, *q;
cout<<head->data;
p = head->next;

head->next = NULL;
while (p != NULL)
{
cout<<" "<<p->data;
q = p;
p = p->next;
q->next = head->next;
head->next = q;
}
}

int main(){
    Node *L=NULL;

	LinkCreate(L);
    Reverse(L);
	return 0;
	system("pause");
}
