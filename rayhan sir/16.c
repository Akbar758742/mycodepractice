int main(){
    int a;
    float b;
    char c;
    printf("Enter value of a,b, and c\n");
    if(scanf("%d %f %c", &a, &b, &c)==3){
        printf("a = %d b = %f c = %c", a, b,c);}
    else
        printf("Error in input.\n");

    return 0;
}
