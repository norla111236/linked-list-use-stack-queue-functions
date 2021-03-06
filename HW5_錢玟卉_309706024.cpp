//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "HW5_?????c_309706024.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int data;
struct node
{
	int data;
	struct node *next;
};

struct node *first, *last;
struct node *top;
struct node *rear, *front;

struct node* NewNode(int element)
{
	struct node*p;
	p = new struct node;
	p -> data = element;
	p -> next = NULL;
	return p;
}

void InsertFirst(struct node *x)
{
	x -> next = first -> next;
	first -> next = x;
	if(last == first){
		last = x;
	}
}

void InsertLast(struct node *x)
{
	  x -> next = last -> next;
	  last -> next = x;
      last = x;
}

void printList(struct node *p)
{
   String line ="";
   for(p = first -> next; p != first; p = p -> next)
   {
	   line += IntToStr(p->data)+"==>";
   }
   Form1 -> Memo1 -> Lines -> Add(line+"<");
}

struct node * SearchTarget(int target)
{
	 struct node *p;
	 for(p = first -> next; (p != first && p -> data != target ); p = p -> next);
	 if(p == first) return NULL;
	 else return p;

}

struct node * SearchTargetBefore(int target)
{
	 struct node *p, *q;
	 for(q = first, p = first -> next; (p != first && p -> data != target ); q = p, p = p -> next);
	 if(p == first) return NULL;
	 else return q;

}

void insertAfter(int element, struct node *x)
{
   struct node *p = NewNode(element);
   p -> next = x -> next;
   x -> next = p;

}

void deleteAfter(struct node *x)
{
	struct node *p =  x -> next;
	x -> next = p -> next;
	if (p == last) last = x;
	free(p);
}

void ClearList(struct node *first)
{
	struct node *p;
	for(p = first -> next; p != first; p = first -> next)
	{
		first -> next = p -> next;
		free(p);
	}
    last = first;

}

//---------------------------------------------------------------------------

void push(int element)
{
   struct node *p = NewNode(element);
   p -> next = top -> next;
   top -> next = p;

}

int pop()
{
   struct node *p = top -> next;
   if(p == top) return -1;
   int result = p -> data;
   top -> next = p -> next;
   free(p);
   return result;
}

void printStack(struct node *first)
{
   struct node *p;
   String line ="";
   for(p = first -> next; p != first; p = p -> next)
   {
	   line += IntToStr(p->data)+"==>";
   }
   Form1 -> Memo2 -> Lines -> Add(line+"<");
}

//---------------------------------------------------------------------------
void InsertQ(int element)
{
   struct node *p = NewNode(element);
   p -> next = rear -> next;
   rear -> next = p;
   rear = p;
   //Form1 -> Memo3 -> Lines -> Add("rear:" + IntToStr(rear->data));
   //Form1 -> Memo3 -> Lines -> Add("front:" + IntToStr(front->data));
   //Form1 -> Memo3 -> Lines -> Add("front next:" + IntToStr(front->next->data));

}

int DeleteQ()
{
   //Form1 -> Memo3 -> Lines -> Add("rear:" + IntToStr(rear->data));
   //Form1 -> Memo3 -> Lines -> Add("front:" + IntToStr(front->data));
   //Form1 -> Memo3 -> Lines -> Add("front next:" + IntToStr(front->next->data));
   if(front -> next == front) return -1;
   struct node *p = front -> next;
   int result = front -> next -> data;
   front -> next = front -> next -> next;
   if(front -> next == front) rear = front;
   free(p);
   return result;
}

void printQueue(struct node *first)
{
   struct node *p;
   String line ="";
   for(p = first -> next -> next; p != first -> next ; p = p -> next)
   {
	   line += IntToStr(p->data)+"==>";
   }
   Form1 -> Memo3 -> Lines -> Add(line+"<");
}


//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	first = NewNode(0);
	first -> next = first;
	last = first;
	top = NewNode(0);
	top -> next = top;
	rear = NewNode(0);
	rear -> next = rear;
	front = rear;
}

//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	struct node *p;
	data = Edit1 -> Text.ToInt();
	p = NewNode(data);
	InsertFirst(p);
	printList(first);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	struct node *p;
	data = Edit1 -> Text.ToInt();
	p = NewNode(data);
	InsertLast(p);
	printList(first);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
	struct node *x;
	int target = Edit2 -> Text.ToInt();
	x = SearchTarget(target);
	if(x){
		Form1 -> Memo1 -> Lines -> Add(IntToStr(target)+" has been found");
	}
	else{
		Form1 -> Memo1 -> Lines -> Add(IntToStr(target)+" has not been found");
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
	struct node *x;
	int target = Edit2 -> Text.ToInt();
	int element = Edit1 -> Text.ToInt();
	x = SearchTarget(target);
	if(x){
		insertAfter(element, x);
	}
	else{
		Form1 -> Memo1 -> Lines -> Add(IntToStr(target)+" has not been found");
	}
	printList(first);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
	struct node *x;
	int target = Edit2 -> Text.ToInt();
	int element = Edit1 -> Text.ToInt();
	x = SearchTargetBefore(target);
	if(x){
		insertAfter(element, x);
	}
	else{
		Form1 -> Memo1 -> Lines -> Add(IntToStr(target)+" has not been found");
	}
	printList(first);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
	struct node *x;
	int target = Edit2 -> Text.ToInt();
	x = SearchTargetBefore(target);
	if(x){
		deleteAfter(x);
	}
	else{
		Form1 -> Memo1 -> Lines -> Add(IntToStr(target)+" has not been found");
	}
	printList(first);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{
	int n = Edit3 -> Text.ToInt();
	int range = Edit4 -> Text.ToInt();
	int *data = new int [n];
	String line ="";
	for (int i = 0; i < n; i++) {
	   data[i] = rand() % range + 1;
	   line += IntToStr(data[i]) + "_";
	   struct node *p;
	   p = NewNode(data[i]);
	   InsertLast(p);
	}
	Form1 -> Memo1 -> Lines -> Add(IntToStr(n)+" random number : "+line);
	printList(first);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject *Sender)
{
	ClearList(first);
	printList(first);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button9Click(TObject *Sender)
{
	int element = Edit5 -> Text.ToInt();
	push(element);
	printStack(top);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button10Click(TObject *Sender)
{
	int result = pop();
	Form1 -> Memo2 -> Lines -> Add("-----------------------------------------");
	if (result != -1) printStack(top);
	else Form1 -> Memo2 -> Lines -> Add(" Stack is empty. ");
	Form1 -> Memo2 -> Lines -> Add(" pop result : " + IntToStr(result));
	//Label6 -> Text = "pop result" + IntToStr(result);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button11Click(TObject *Sender)
{
	int element = Edit6 -> Text.ToInt();
	InsertQ(element);
	printQueue(rear);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button12Click(TObject *Sender)
{
	int result = DeleteQ();
	Form1 -> Memo3 -> Lines -> Add("-----------------------------------------");
	if (result != -1) printQueue(rear);
	else Form1 -> Memo3 -> Lines -> Add(" Queue is empty. ");
	Form1 -> Memo3 -> Lines -> Add(" dequeue result : " + IntToStr(result));
}
//---------------------------------------------------------------------------

