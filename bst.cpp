#include "bst.h"
#include <QDebug>

BST::BST(){
    root=NULL;
    MAXID=0;
}


/*
int BST::height(Node *t){
    /*int h=0;
    if(t!=NULL){
        int l_height=height(t->leftchild);
        int r_height=height(t->rightchild);
        int max_height = (l_height>r_height)?l_height:r_height;
        h=max_height+1;
    }
    return h;
    if(t==NULL)
        return 0;
    return t->height;
}

int BST::difference(Node *t){
    if(t==NULL)
        return 0;
    /*int l_height=height(t->leftchild);
    int r_height=height(t->rightchild);
    int b_factor= l_height-r_height;
    return height(t->leftchild)-height(t->rightchild);
}

Node *BST::rr_rotate(Node *parent){
    Node *t;
    t=parent->leftchild;
    parent->leftchild=t->rightchild;
    t->rightchild=parent;

    parent->height=max(height(parent->rightchild), height(parent->leftchild))+1;
    t->height = max(height(t->rightchild), height(t->leftchild))+1;
    return t;
}

Node *BST::ll_rotate(Node *parent){
    Node *t;
    t=parent->rightchild;
    parent->rightchild=t->leftchild;
    t->leftchild=parent;

    parent->height=max(height(parent->rightchild), height(parent->leftchild))+1;
    t->height = max(height(t->rightchild), height(t->leftchild))+1;
    return t;
}

Node *BST::lr_rotate(Node *parent){
    Node *t;
    t=parent->leftchild;
    parent->leftchild=rr_rotate(t);
    t->rightchild=parent;
    return ll_rotate(parent);
}

Node *BST::rl_rotate(Node *parent){
    Node *t;
    t=parent->rightchild;
    parent->rightchild=ll_rotate(t);
            return rr_rotate(parent);
}

Node *BST::balance(Node *t){
    int bal_factor=difference(t);
    if(bal_factor >1){
        if(difference(t->rightchild) < 0)
            t=ll_rotate(t);
        else
            t=lr_rotate(t);
    }
    else if(bal_factor <-1){
        if(difference(t->rightchild)>0)
            t=rl_rotate(t);
        else
            t=rr_rotate(t);
    }
    return t;
}

Node *BST::insert(Node *r, Patient p){
    if(r==NULL){
        Node *temp;
        temp = new Node;
        temp->a=p;
        r= temp;
        //qDebug()<<r->a.patientNo;
        //r->a= p;
        //qDebug()<<r->a.age;
        r->leftchild=NULL;
        r->rightchild=NULL;
        return r;
    }
    else if(p.patientNo < r->a.patientNo){
        qDebug()<<"inside left child";
        r->leftchild = insert(r->leftchild, p);
        //qDebug()<<r->leftchild->a.age;
        r=balance(r);
    }
    else if(p.patientNo>=r->a.patientNo){
        qDebug()<<"inside Right child";
        r->rightchild=insert(r->rightchild, p);
        //qDebug()<<r->leftchild->a.age;
         r=balance(r);
    }
    return r;
}


/*void BST::add(Patient c, Node* currentNode){
    if(c.patientNo> currentNode->a.patientNo){
        if(currentNode->hasRightChild())
            add(c, currentNode->rightchild);
        else
            currentNode->rightchild = new Node(c);
    }
    else if(c.patientNo<currentNode->a.patientNo){
        if(currentNode->hasLeftChild())
            add(c,currentNode->leftchild);
        else
            currentNode->leftchild=new Node(c);
    }
}
*/
Patient BST::search(int value, Node *node){
    if(node!=NULL){
        if(value>node->a.patientNo)
            return search(value, node->rightchild);
        else if(value<node->a.patientNo)
            return search(value, node->leftchild);
        else
            return node->a;
    }
    else{
        Patient notFound;
        notFound.patientNo=-1;
        notFound.age=-1;
        return notFound;
    }
}

Patient BST::searchBST(int value){
   return search(value, root);
}

//Node *BST::del(Node *r, Patient s){
    //Node *temp;
    /*if(r==NULL)
    {
        return NULL;
    }
    if(s.patientNo > r->a.patientNo){
        r->rightchild=del(r->rightchild,s);
        if(difference(r)<-1){
        if(difference(r->rightchild)<=0)
            r=rr_rotate(r);
        else
            r=rl_rotate(r);
        }
    }
    else if( s.patientNo < r->a.patientNo){
        r->leftchild=insert(r->leftchild,s);
        if(difference(r)>1)
    }*/
//}

/*bool BST::remove(Node **node, int value){
    if(*node!=NULL){
        if((*node)->a.patientNo==value){
            if((*node)->isLeaf()){
                delete (*node);
                (*node)=NULL;
            }
            else if(!(*node)->hasLeftChild()&& !(*node)->hasRightChild()){
                Node* aux =(*node);
                (*node) = aux->rightchild;
                aux->rightchild=NULL;
                        delete aux;
            }
            else if(value>(*node)->a.patientNo){
                return remove(&(*node)->rightchild, value);
            }
            else if(value<(*node)->a.patientNo){
                return remove(&(*node)->leftchild, value);
            }
        }
    }
    return false;
}

bool BST::isEmpty(){
    return root == NULL;
}*/
