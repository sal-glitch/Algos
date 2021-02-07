#include<bits/stdc++.h>
using namespace std;


struct node{
	int data; int degree;
	node *parent,*child,*sibling;
};

node* newnode(int x){
	node* n=new node();
	n->data=x;
	n->degree=0;
	n->parent=NULL;
	n->child=NULL;
	n->sibling=NULL;
	return n;
}
node* merge(node*a,node*b)
{
	if(a->data>b->data)
	 swap(a,b);
	b->parent=a;
	b->sibling=a->child;
	a->child=b;
	a->degree++;
	return a;
}

list<node*> unionn (list<node*> a,list<node*>b)
{
	list<node*> ret;
	auto i=a.begin();
	auto j=b.begin();
	while(i!=a.end() && j!=b.end())
	{
		if((*i)->degree<=(*j)->degree)
		{
			ret.push_back(*i);
			++i;
		}
		else {
			ret.push_back(*j); 
			++j;
		}
	}
	while(i!=a.end())
	{
		ret.push_back(*i);
		++i;
	}
	while(j!=b.end())
	{
		ret.push_back(*j); 
		++j;
	}
	return ret;
}

list<node*> adj(list<node*> h)
{
	if(h.size()<=1)
	return h;
	list<node*> nh;
	auto i1=h.begin();
	auto i2=h.begin();
	auto i3=h.begin();
	if(h.size()==2)
	{
		i2=i1;
		i2++;
		i3=h.end();
	}
	else{
		i2++;
		i3=i2;
		i3++;
	}
	while(i1!=h.end())
	{
		if(i2==h.end()) ++i1;
		else if((*i1)->degree<(*i2)->degree)
		{
			i1++;i2++;
			if(i3!=h.end())++i3;
		}
		else if(i3!=h.end()&&(*i1)->degree==(*i2)->degree&&
		(*i1)->degree==(*i3)->degree)
		{
			++i1;++i2;++i3;
		}
		else if((*i1)->degree==(*i2)->degree)
		{
			node* temp;
			*i1=merge(*i1,*i2);
			i2=h.erase(i2);
			if(i3!=h.end())
			++i3;
		}
	}
	return h;
}

list<node*> insertt(list<node*> h,node* t)
{
	list<node*> temp;
	temp.push_back(t);
	temp=unionn(h,temp);
	return adj(temp);
}

list<node*> removemin(node* t)
{
	list<node*> h;
	node*temp=t->child;
	node*lo;
	while(temp)
	{
		lo=temp;
		temp=temp->sibling;
		lo->sibling=NULL;
		h.push_front(lo);
	}
	return h;
}

list<node*> finalinsert(list<node*> h,int x)
{
	node* temp=newnode(x);
	return insertt(h,temp);
}

node* getmin(list<node*>h)
{
	auto i=h.begin();
	node* t=*i;
	while(i!=h.end())
	{
		if((*i)->data<t->data)
		{
			t=*i;
		}
		++i;
	}
	return t;
}

list<node*> extractmin(list<node*> h)
{
	list<node*> nh,lo;
	node* t;
	t=getmin(h);
	auto i=h.begin();
	while(i!=h.end())
	{
		if(*i!=t)
		{
			nh.push_back(*i);
		}
		++i;
	}
	lo=removemin(t);
	nh=unionn(nh,lo);
	nh=adj(nh);
	return nh;
}
void printtree(node*h)
{
	while(h)
	{
		cout<<h->data<<" ";
		printtree(h->child);
		h=h->sibling;
	}
}
void printheap(list<node*> h)
{
	auto i=h.begin();
	while(i!=h.end())
	{
		printtree(*i);
		++i;
	}
}
int main()
{
    int ch;int k;
    list<node*>h;
    h=finalinsert(h,7);
    h=finalinsert(h,2);
    h=finalinsert(h,4);
    cout<<"\nPost insert\n";
    printheap(h);
    node* t=getmin(h);
    cout<<"Min is "<<t->data<<"\n";
    h=extractmin(h);
    cout<<"After min del\n";
    printheap(h);
	return 0;
}
