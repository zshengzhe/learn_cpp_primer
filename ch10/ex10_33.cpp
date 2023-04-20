/**
 * Created by Linus Zhang on 2023/4/17.
 */
#include <fstream>
#include <string>

void split_write_file(char *inputFile, char *oddFile, char *evenFile)
{
  std::ifstream in_fs(inputFile);
  std::ofstream odd_fs(oddFile);
  std::ofstream even_fs(evenFile);

  std::istream_iterator<int> in_itr(in_fs), eof;
  std::ostream_iterator<int> odd_itr(odd_fs);
  std::ostream_iterator<int> even_itr(even_fs);

  std::for_each(in_itr, eof, [&](const int i) -> void {
    if (i & 0x1) {
      *odd_itr++ = i;
    } else {
      *even_itr++ = i;
    }
  });

}

int main(int argc, char **argv)
{
  if (argc != 4) {
    throw std::runtime_error("usage: command InputFile OddFile EvenFile");
  }

  split_write_file(argv[1], argv[2], argv[3]);

  return 0;
}