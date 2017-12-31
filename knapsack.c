# include<stdio.h>
int partition(float frac[],float amt[],float val[],int l,int h)
{
   int pivot=frac[h];
   int i=l-1;
   for(int j=l;j<h;j++)
      {
         if(frac[j]<=pivot)
            {
               i++;
               int temp;
               temp=frac[i];
               frac[i]=frac[j];
               frac[j]=temp;

               int temp1;
               temp1=amt[i];
               amt[i]=amt[j];
               amt[j]=temp1;

               int temp2;
               temp2=val[i];
               val[i]=val[j];
               val[j]=temp2;
            }
      }
      int swap;
      swap=frac[i+1];
      frac[i+1]=frac[h];
      frac[h]=swap;
}
void quicksort(float frac[],int l, int h,)
{
   if(l<h)
   {
      int q;
      q=partition(frac,amt,val,l,h);
      quicksort(frac,l,q-1);
      quicksort(frac,q+1,h);

     /* int q;
      q=partition(amt,l,h);
      quicksort(amt,l,q-1);
      quicksort(amt,q+1,h);

      int q;
      q=partition(val,l,h);
      quicksort(val,l,q-1);
      quicksort(val,q+1,h);
      */
   }
}
/*void input(int a[],int n)
{
   printf("ENTER THE ELEMENTS");
   for(int i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
}
void print(int a[],int n)
{
   printf("ARRAY IS:");
   for(int i=0;i<n;i++)
   {
      printf("%d",a[i]);
   }
 }*/
/*int main()
{
   int n;
   int a[50];
   printf("ENTER SIZE OF ARRAY");
   scanf("%d",&n);
   //input(a,n);
   //print(a,n);
   quicksort(a,0,n);
   printf("SORTED ARRAY IS:");
   print(a,n);
   return 0;
}*/
 
/*void bubble(float frac[],float amt[],float val[],int n)
{
 int temp;
 for (int i = 0; i < n; i++) 
 {
      for (int j = i + 1; j < n; j++) 
	  {
         if (frac[i] < frac[j]) 
		 {
            temp = frac[j];
            frac[j] = frac[i];
            frac[i] = temp;
 
            temp = amt[j];
            amt[j] = amt[i];
            amt[i] = temp;
 
            temp = val[j];
            val[j] = val[i];
            val[i] = temp;
         }
      }
 } 

for(int i=0;i<n;i++)
	printf("\n%f",frac[i]);
} */
void knapsack(int n, float amt[], float val[], float capacity) 
{
   float x[20], t = 0;
   int i, j;float cap;
   cap = capacity;
 
   for (i = 0; i < n; i++)
      x[i] = 0.0;
 
   for (i = 0; i < n; i++) 
   {
    if(cap>0)
	{
	  if (amt[i] > cap)
	  {
	  	x[i]=(cap/amt[i]);
	  	t=x[i]*val[i];
	  	cap=0;
	  }
      else 
	  {
         x[i] = 1.0;
         t = t + val[i];
         cap = cap - amt[i];
      }
  	}
   }
 
   printf("\nThe result vector is:- ");
   for (i = 0; i < n; i++)
      printf("%f\t", x[i]);
      printf("\nMaximum val is:- %f", t);
 
}
int main() 
{
   float amt[20], val[20], capacity;
   int n, i, j;
   float frac[20], temp;
   printf("\nEnter the no. of objects:- ");
   scanf("%d", &n);
   printf("\nEnter the amount and value of each object:- ");
   for (i = 0; i < n; i++) 
   {
      scanf("%f %f", &amt[i], &val[i]);
   }
   printf("\nEnter the capacity of knapsack:- ");
   scanf("%f", &capacity);
   for (i = 0; i < n; i++) 
   {
      frac[i] = val[i] / amt[i];
   }
   quicksort(frac,0,n);
  // bubble(frac,amt,val,n);
   knapsack(n, amt, val, capacity);
   return(0);
}