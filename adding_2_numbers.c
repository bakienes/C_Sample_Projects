using System;
namespace ConsoleApplication1{
  Class Program{
    static void Main (stirng[] args){
      int sayi1;
      int sayi2;
      int toplam;
      Console.Write("enter number");
      sayi1 = Convert.ToInt16(Console.ReadLine());
      Console.Write("enter number");
      sayi2 = Convert.ToInt16(Console.ReadLine());
      toplam = sayi1 + sayi2;
      Console.Write("total=");
      Console.Write(toplam);
      Console.Readkey();
    }
  }
}
