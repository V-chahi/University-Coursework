/*
CH-230-A
a3_p3.[c]
Amine Chahi
m.chahi@jacobs-university.de
*/

float convert(int cm)
{
    float val = 0.00001 * cm ;
return val;
}

int main() {
int cm ;
scanf("%d", &cm);

float val = convert(cm);
printf("Result of conversion: %f", val);printf("\n");

return 0;
}