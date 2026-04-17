while(true)
{
    int[] num = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
    if (num[0] == 0 && num[1] == 0) break;
    else Console.WriteLine(num[0] + num[1]);
}