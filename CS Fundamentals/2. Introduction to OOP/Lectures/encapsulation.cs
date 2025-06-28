using System;

class Auth{
  public bool isAuthenticated(){
    return true;
  }
}

class Student{ // create a class named Student
  // create fields
  private string name;
  private int age;
  Auth auth = new Auth();

  // create setters for setting the fields value from outside the class
  public void setName(string name){
    if(auth.isAuthenticated()){
      this.name = name;
    }else{
      Console.WriteLine("You are not authenticated");
    }
  }

  public void setAge(int age){
    this.age = age;
  }

  // create getters for accessing the fields from outside the class
  public string getName(){
    return name;
  }

  public int getAge(){
    return age;
  }
}

class Program {
  public static void Main (string[] args) {
    Student student = new Student(); // create an object of Student class and call the constructor

    student.setName("Mahfuz");
    student.setAge(25);

    Console.WriteLine("Name: " + student.getName());
    Console.WriteLine("Age: " + student.getAge());
  }
}