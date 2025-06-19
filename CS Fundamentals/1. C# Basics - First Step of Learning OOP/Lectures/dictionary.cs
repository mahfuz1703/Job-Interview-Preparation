using System;
using System.Collections.Generic;

class dictionary {
  public static void Main (string[] args) {
    Dictionary<string, int> dict = new Dictionary<string, int>();

    // dict.Add("apple", 1);
    // dict.Add("banana", 2);
    // dict.Add("cherry", 3);
    // dict.Add("date", 4);
    // dict.Add("elderberry", 5);

    // Console.WriteLine(dict["cherry"]);

    // foreach(var item in dict){
    //   Console.WriteLine($"{item.Key} -> {item.Value}");
    // }

    // foreach(KeyValuePair<string, int> item in dict){
    //   Console.WriteLine($"{item.Key} -> {item.Value}");
    // }

    string[] keys = {"apple", "banana", "cherry", "date", "elderberry"};
    int[] values = {1, 2, 3, 4, 5};

    for(int i = 0; i < keys.Length; i++){
      if(dict.ContainsKey(keys[i])){
        dict[keys[i]] = values[i];
      }else{
        dict.Add(keys[i], values[i]);
      }
    }

    dict.Remove("banana");
    foreach(var item in dict){
      Console.WriteLine($"{item.Key} -> {item.Value}");
    }
  }
}