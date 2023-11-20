  #include <stdio.h>
 /* 
  void rotate(int ***matrix, int n) {
    int mat_rotate[n][n];
    for(int i = 0; i<n; i++){
      for(int j = 0; j<n; j++){
        mat_rotate[j][n - 1 - i] = matrix[i][j];
      }
    }
    for(int i = 0; i<n; i++){
      for(int j = 0; j<n; j++){
        matrix[i][j] = mat_rotate[i][j];
      }
    }
  }
*/
  int main() {
    int n, flag = 0;
    scanf("%d", &n);
    int mat_a[n][n], mat_b[n][n], mat_ar[n][n];
     
    for(int i = 0; i < n; i++) {
    	for(int j = 0; j < n; j++) {
    		scanf("%d", &mat_a[i][j]);
    	}
    }
    for(int i = 0; i < n; i++) {
    	for(int j = 0; j < n; j++) {
    		scanf("%d", &mat_b[i][j]);
    	}
    }
    /*
    for(int k = 0; k<4; k++){
      for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
          if(mat_a[i][j] == 1 && mat_b == 0){
            flag = 1;
          }
        }
      }
      if(flag == 0){
        printf("Yes\n");
        return 0;
      }
      rotate(&mat_a[n][n], n);
    }
    printf("No\n");
    */
    
    for(int i = 0; i < n; i++) {
    	for(int j = 0; j < n; j++) {
    		if(mat_a[i][j] == 1) {
    			if(mat_b[i][j] != mat_a[i][j]) {
    				flag = 1;
    			} 
    		}
    	}
    }

    if(flag == 0){
      printf("Yes\n");
    }
    else {
      for(int k = 0;k < 4; k++) {
    	  flag = 0;
    	  for(int i = 0; i < n; i++) {
    		  for(int j = 0; j < n; j++) {
    			  mat_ar[j][n - 1 - i] = mat_a[i][j];
    			  if(mat_ar[i][j] == 1) {
    				  if(mat_b[i][j] != mat_ar[i][j]) {
    					  flag = 1;
    				  } 
    			  }
    		  }
    	  }
      
    	  for(int i = 0; i < n; i++) {
    		  for(int j = 0; j < n; j++) {
    			  mat_a[i][j] = mat_ar[i][j];
    		  }
    	  }
    	  if(flag == 0){
          printf("Yes\n");
          return 0;
        }
      }
      printf("No\n");
    }
    
    return 0;
  }
