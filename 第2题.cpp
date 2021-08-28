# include <iostream>
using namespace std;

struct node
{
	int data;
	node* next;
};

int main()           
{
	struct node* head1,*head2,*head;
	node* p1=NULL, * p2, *p;
	int n1, n2, i,temp1=0,temp2=0,yu,nums[100];
	p2 = new node;
	head1 = p2;
	cin >> n1 >> n2;
	for (i = 0; i < n1; i++) {
		p1 = new node;
		cin >> p1->data;
		p2->next = p1;
		p2 = p1;
	}
	p1->next = NULL;
	p2 = new node;
	head2 = p2;
	for (i = 0; i < n2; i++) {
		p1 = new node;
		cin >> p1->data;
		p2->next = p1;
		p2 = p1;
	}//输入两个链表
	p1->next = NULL;
	p = head1->next;
	while (p != NULL) {
		temp1 = p->data + temp1 * 10;
		p = p->next;
	}
	p = head2->next;
	while (p != NULL) {
		temp2 = p->data + temp2 * 10;
		p = p->next;
	}//将链表转化为整数
	int temp = temp1 + temp2;//temp是最后结果的整形数据
	head = new node;
	head->next = NULL;
	p = head;
	while (temp) {
		yu = temp % 10;
		p = new node;
		p->data = yu;
		p->next = head->next;
		head->next = p;
		temp/=10;
	}//将temp保存为链表
	p = head->next->next;
	cout <<'('<< head->next->data;
	while (p) {
		cout << ',' << p->data;
		p = p->next;
	}
	cout << ')';
}
