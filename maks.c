#include<stdio.h>
#include<math.h>
int main(){
    double discriminant,a,b,c,d,root1,root2;

    discriminant=b*b-4*a*c;

    //real roots
if (discriminant>0){

root1=(-b+sqrt(discriminant))/2*a;
root2=(-b+sqrt(discriminant))/2*a;

printf("real roots :%lf and %lf",root1,root1 );
}
else if(discriminant=0){
    root1=-b/(2*a);
    printf("Double roots %lf",root1);

}else{
    double realpart=-b/(2*a);
    double imaginarypart=sqrt(-discriminant)/(2*a);

    printf("complex roots %lf+%lfi and %lf-%lfi"  );
}


}