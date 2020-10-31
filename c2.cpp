void add(Tnode* root, string b , int val)
{

   Tnode* temp=root;

   for(int i=0;i<sz(b);i++)
   {

    int d=(b[i]-'a');
  
     if(temp->children[d]==NULL){
    temp->children[d]= new Tnode(); 
     }

     temp=(temp->children[d]);

     temp->data=max(temp->data,val);

   }

}
