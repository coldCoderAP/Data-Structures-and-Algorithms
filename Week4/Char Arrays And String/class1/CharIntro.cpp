#include<iostream>


using namespace std;

int findLength(char ch[],int size){
 
    int length=0;

//  1.using while
    // while(ch[length] != '\0'){
    //     length++;
         
    // }



// 2.using for loop

for(int i=0;i<size;i++){
    if(ch[i]=='\0'){
        // length++;
        // cout<<"Index "<<i<<endl;
        break;
    }else{
        length++;
    }
}

return length;
}

void reverseString(char * ch,int size){

   int i=0,j=size-1;

   while(i<=j){
       swap(ch[i],ch[j]);
       i++;j--;
   }

//    Using for loop
//    for (int i = 0, j = size - 1; i < j; i++, j--) {
//     swap(ch[i], ch[j]);  // Swap first and last, move inwards
//    }
  
}


void convertToUpperCase(char ch[],int n){
    int index=0;

    while(ch[index]!='\0'){
        char currCharacter=ch[index];
        if(currCharacter>='a' && currCharacter<='z'){
            ch[index]=currCharacter-'a'+'A';
        }
        index++;
    }
}

void replaceCharacter(char ch[],int n){


    int i=0;
    while(ch[i]!='\0'){
        char currChar=ch[i];

         if(currChar=='@'){
            ch[i]=' ';
         }
         i++;
    }
}

bool checkPalindrome(char ch[],int n){
    int i=0,j=n-1;

    while(i<=j){
        if(ch[i]==ch[j]){
            i++;j--;
        }else{
            return true;
        }
    }
    // abb u=yaha pohanch gaye to numner palindrome hai
    return true;
}

int main(){
    char ch[100]={0};
    
    //1.with cin>> only insert one word (after insert word next null value stored )
    // cin>>ch;
    //2.To insert entire line cin.getline() fun is used
    cin.getline(ch,100);

    // cout<<ch; 
    // int ans=(int)ch[4];
    // cout<<"value at index :"<<ans;
    // cout<<"Index"<<(int)ch[17]<<endl;

    
    int length=findLength(ch,100);
    cout<<"Length of char array : "<<length<<endl; 

    // reverseString(ch,length);
    // cout<<"R everse string : "<<ch<<endl;

    convertToUpperCase(ch,100); 
    cout<<"Convert toUpper Case :"<<ch<<endl;
    
    replaceCharacter(ch,100);
    cout<<"Convert @ to Space :"<<ch<<endl;

    bool isPal= checkPalindrome(ch,length);
     cout<<((isPal)?"Valid Palindrome":"Not Palandrome");



}  