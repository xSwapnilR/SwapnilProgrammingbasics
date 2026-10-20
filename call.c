#include <stdio.h>

// Function definition jo pointer (*) receive karega
void changeValue(int *num) { 
    *num = 5; // Address par jaakar value ko 10 se badal kar 45 kar diya
} 

int main() {
    int a = 100;
    
    printf("Change hone se pehle 'a' ki value: %d\n", a); // Output: 10
    
    // Call by Reference: Humne value nahi, balki '&a' (address) bheja hai
    changeValue(&a); 
    
    printf("Change hone ke baad 'a' ki value: %d\n", a); // Output: 45 (Value sach mein badal gayi!)
    
    return 0;
}
