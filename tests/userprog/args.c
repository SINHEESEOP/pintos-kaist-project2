/* 명령줄 인자들을 출력합니다.
   이 프로그램은 모든 args-* 테스트에 사용됩니다.
   각각의 args-* 테스트마다 출력을 기준으로 
   다르게 채점됩니다. */

#include "tests/lib.h"

int
main (int argc, char *argv[]) 
{
  int i;

  test_name = "args";

  if (((unsigned long long) argv & 7) != 0)
    msg ("argv와 스택은 워드 정렬되어야 합니다. 실제 값: %p", argv);

  msg ("시작");
  msg ("argc = %d", argc);
  for (i = 0; i <= argc; i++)
    if (argv[i] != NULL)
      msg ("argv[%d] = '%s'", i, argv[i]);
    else
      msg ("argv[%d] = null", i);
  msg ("종료");

  return 0;
}
