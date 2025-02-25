void swap(){
    extern int a;
    extern int b;

    int temp = a;
        a = b;
        b = temp;
}

void swap1(int uno, int due){
 
    int temp = uno;
        uno = due;
        due = temp;
        
}
void swap2(int *a, int *b){

    int tmp = *a;
    *a = *b;
    *b = tmp;
}
