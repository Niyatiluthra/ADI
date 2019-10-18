/* First @param is length, 2nd @param is string, and 3rd is iterator*/

void BinaryString(int length, int str[], int i) 
{ 
    if (i == length)  
    { 
        printArray(str, n); 
        return; 
    } 
    
    str[i] = 0; 
    BinaryString(length, str, i + 1); 
    
    str[i] = 1; 
    BinaryString(length, str, i + 1); 
} 