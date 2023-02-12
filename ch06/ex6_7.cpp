/**
 * Created by Linus Zhang on 2023/2/2.
 */
unsigned increment()
{
  static unsigned n = 0;
  return n++;
}