class Program{
    static void Main(string[]args){
      int adet = 0
      int sayi
      Console.Write("How much do you want to be divided:");
      sayi = Convert.ToInt32(Console.ReadLine());
      for (int: 50; i < = 200; i++){
        if (i % sayi == 0){
          Console.WriteLine(i);
          adet = adet+1;
        }
      }
      Console.WriteLine("From 50 to 200" + sayi + "divided by the number" + adet + "there are numbers");
      Console.Readkey();
    }
}
