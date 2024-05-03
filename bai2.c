#include <stdio.h>
#include <math.h>

int kiemtra_so_chinh_phuong(int n) {
  if (sqrt(n) == (int)sqrt(n)) {
    return 1;
  } else {
    return 0;
  }
}

int dem_so_chinh_phuong(int n) {
  int dem = 0;
  for (int i = 1; i <= n; i++) {
    if (kiemtra_so_chinh_phuong(i)) {
      dem++;
    }
  }
  return dem;
}

int main() {
  int n;
  scanf("%d", &n);

  int so_chinh_phuong = dem_so_chinh_phuong(n);
  printf("So luong so chinh phuong nho hon %d: %d\n",n, so_chinh_phuong);

  printf("Cac so chinh phuong nho hon %d la: ", n);
  for (int i = n; i >=1; i--) {
    if (kiemtra_so_chinh_phuong(i)==1 && i<n) {
      printf("%d ", i);
    }
  }

  return 0;
}
