#include <stdio.h>
#include <stdlib.h>

int main() {

  FILE *f1 = fopen("squares.txt", "w");
  if (f1 == NULL) {
    perror("File Opening\n");
  }

  int n;
  scanf("%d", &n);

  int *a;
  a = (int *)malloc(n * sizeof(int));

  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  for (int i = n - 1; i >= 0; i--) {
    fprintf(p, "%d %d\n", a[i], a[i] * a[i]);
  }
  fclose(f1);

  return 0;
}

 int main(){
   int n,i;
   scanf("%d",&n);

   int *arr;
   arr=(int*)malloc(n*sizeof(int));

   for(i=0;i<n;i++){
     scanf("%d",&arr[i]);
   }

   for( i=n-1;i>=0;i--){
     printf("%d %d\n",arr[i],arr[i]*arr[i]);
   }

   FILE *fp;
   fp=fopen("squaresP3.txt","wb+");
   if(fp==NULL){
      printf("Error Opening File");
   }
       for(i=n-1;i>=0;i--){
          fwrite(arr,sizeof(int),4,fp);
          fwrite(" ",sizeof(int),1,fp);
          fwrite(arr,sizeof(int),4,fp);
          fwrite(arr,sizeof(int),4,fp);
       }

       fclose(fp);

       int arr1[100];
       while (!feof(fp)){

          fread(arr1,sizeof(int),4,fp);
          printf("%ls\n",arr1);
       }

  return 0;
 }
