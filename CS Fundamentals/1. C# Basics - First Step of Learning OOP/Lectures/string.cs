using System;

class String {
  public static void Main (string[] args) {
    // char[] str = new char[10];

    // str[0] = 'a';
    // str[1] = 'b';
    // str[2] = 'c';
    // str[3] = 'd';
    // Console.WriteLine(str);

    // string str = "Mahfuz";
    // Console.WriteLine(str);
    // Console.WriteLine(str.Length);

    string s1 = "madamn";
    char[] ch = s1.ToCharArray();
    Array.Reverse(ch);
    string s2 = new string(ch);

    if(s1 == s2){
      Console.WriteLine("Palindrome");
    }else{
      Console.WriteLine("Not Palindrome");
    }
  }
}