using System;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] arr = new int[10] {5,6,-7,-5,8,-3,4,5,-13,9 };
            int[] positive = new int[10];
            int[] negative = new int[10];
            int p = 0, n = 0;
            for(int i = 0;i<arr.Length; i++)
            {
                if(arr[i]<0)
                {
                    negative[n] = arr[i];
                    n++;
                }
                else
                {
                    positive[p] = arr[i];
                    p++;
                }
            }
            Console.Write("negative : ");
            for (int i = 0; i < negative.Length; i++)
            {
               if(negative[i]!=0) Console.Write(negative[i]);
            }
            Console.WriteLine();
            Console.Write("positive : ");
            for (int i = 0; i < positive.Length; i++)
            {
                if (positive[i] != 0) Console.Write(positive[i]+" ");
            }
            Console.ReadKey();
        }
    }
}
