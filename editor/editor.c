#include "editor.h"
#include "call.h"

// 시작하고 버퍼열어서
// 먼저 작업을 시작하기 전에 커널의 그래픽 출력을 테스트하고 넘어가기

int editor_main(void)
{
    write(0, "%s", "axEditor started");

    return 0;
}
