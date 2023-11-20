    #include <stdio.h>
     
    int main() {
    	int n, i = 0, g = 0, b = 0;
    	scanf("%d", &n);
    	char ev[n+1];
    	scanf("%s", ev);
    	while(ev[i] != '\0') {
    		if(ev[i] == 'o') {
    			g = 1;
    		}
    		else if(ev[i] == 'x'){ 
    			b = 1;
    		}
    		i++;
    	}
     
    	if (g == 1 && b == 0) {
    		printf("Yes\n");
    	}
    	else {
    		printf("No\n");
    	}
    	return 0;	
    }
