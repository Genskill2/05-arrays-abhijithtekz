#include <stdio.h>
#include <assert.h>


int mode(int [], int);

int main(void) {
  int x[] = {4, 9,5,6,5,10,0,2,-3, -3,4, 4};
  assert ((mode(x, 12) == 4));

  int y[] = {5};
  assert (mode(y, 1) == 5);
  printf("Mode: passed\n");
  }
int mode(int arr[], int n){
int maxcount=0;
for(int i=0;i<n;++i){
int counts=0;

for(int j=0;j<n;++j){
if(arr[j]==arr[i])
++counts;
}
if(counts>maxcount){
maxcount=counts;
}
return arr[i];
}
