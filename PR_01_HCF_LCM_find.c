#include <stdio.h>

int main(){
    int HCF, LCM;
    int x, y, i;
    printf("Enter value of x and y:");
    scanf("%d%d",&x,&y);
    // printf("%d, %d",x,y);
    
    while (y != 0)
    {
      i = y;
      y = x % y;
      x = i;
    }

    HCF = x;
    LCM = (x*y)/HCF;

    printf("HCF of %d and %d is: %d\n",x,y,HCF);
    printf("LCM of %d and %d is: %d\n",x,y,LCM);
    
    

    return 0;
}

// copied program from net

/*

#include <stdio.h>
int main() {
  int a, b, x, y, t, HCF, LCM;

  printf("Enter two integers\n");
  scanf("%d%d", &x, &y);

  a = x;
  b = y;

  while (b != 0) {
    t = b;
    b = a % b;
    a = t;
  }

  HCF = a;
  LCM = (x*y)/HCF;

  printf("Greatest(Highest) common divisor of %d and %d (HCF) = %d\n", x, y, HCF);
  printf("Least common multiple of %d and %d (LCM) = %d\n", x, y, LCM);

  return 0;
} 

*/