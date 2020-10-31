int query(Tnode* root, string b)
{
   Tnode* temp=root;
   for(int i=0;i<sz(b);i++)
   {
     
    if(temp->children[(b[i]-'a')]==NULL)
    return -1;
     temp=temp->children[(b[i]-'a')];
   }

   return temp->data;
}
