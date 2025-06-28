using System;

class Student{
  public string name;
  public int age;

  public Student(string name, int age){
    this.name = name;
    this.age = age;
  }

  public void showInfo(){
    Console.WriteLine("Name: " + name);
    Console.WriteLine("Age: " + age);
  }
}

class JIPCStudent : Student{
  public JIPCStudent(string name, int age) : base(name, age){}

  public void givenQuiz(){
    Console.WriteLine("Given Quiz");
  }
}

class CPStudent : Student{
  public CPStudent(string name, int age) : base(name, age){}

  public void givenContest(){
    Console.WriteLine("Given Contest");
  }
}

class Program {
  public static void Main (string[] args) {
    JIPCStudent jipcStudent = new JIPCStudent("John", 20);
    jipcStudent.showInfo();
    jipcStudent.givenQuiz();
    Console.WriteLine();

    CPStudent cpStudent = new CPStudent("Jane", 22);
    cpStudent.showInfo();
    cpStudent.givenContest();
  }
}