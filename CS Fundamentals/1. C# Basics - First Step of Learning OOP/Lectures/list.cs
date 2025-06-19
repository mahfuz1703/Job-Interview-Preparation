using System;
using System.Collections.Generic;

class list {
  public static void Main (string[] args) {
    IList<int> list = new List<int>();

    // list.Add(1);
    // list.Add(2);
    // list.Add(3);
    // list.Add(4);
    // list.Add(5);

    for(int i = 1; i <= 5; i++){
      int x = int.Parse(Console.ReadLine());
      list.Add(x);
    }

    // Console.WriteLine(list[3]);
    foreach(int value in list){
      Console.WriteLine(value);
    }
  }
}