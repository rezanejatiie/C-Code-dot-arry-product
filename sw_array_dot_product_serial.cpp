int sw_dot_serial(){
  int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int u[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  // vector dot products
  int product = 0;

  for (int i=0; i < 10; ++i){

    product += v[i] * u[i];
  }

  return product;
}
