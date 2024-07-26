/*
CH-230-A
a4_p3.[c]
Amine Chahi
m.chahi@jacobs-university.de
*/

float geometric_mean(float arr[], int num){
float m=1;
        
	for(int j=0; j<num; j++){
         m=m*arr[j];
        }

m=pow(m,(float) 1/num);
return m;
}

float highest(float arr[], int num){
float h=0;
 for(int j=0; j<num;j++){
     if(h<arr[j]){
        h=arr[j];
     }
 }
return h;
}

float smallest(float arr[], int num){
float s=arr[0];
    for(int j=0; j<num;j++){
        if(s>arr[j]){
          s=arr[j];
        }
    }
return s;
}

float sum(float arr[], int num){
float s=0;
 for(int j=0; j<num;j++){
    s=s+arr[j];
 }
return s;
}

int main(){
float arr[15];

 for(int i=0; i<15;i++){
    scanf("%f", &arr[i]);
    if (arr[i]<0){
    break;
    }
 }

int a= i;
				//a elems in the array
char c;
getchar();
scanf("%c", &c);

switch (c) {
    case 'm':
        printf("The geometric mean of the array is %f", geometric_mean(arr,a));
        break;
    case 'h':
        printf("The highest number in the array is %f", highest(arr, a));
        break;
    case 'l':
        printf("The smallest number in the array is %f", smallest(arr, a));
        break;
    case 's':
        printf("The sum of all the numbers in the array is %f", sum(arr, a));
        break;
    default:
        break;
}
return 0;
}