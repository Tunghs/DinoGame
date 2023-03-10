// DinoGame.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream> // 입출력
#include <conio.h> // 키보드 입력
#include <Windows.h> // 시스템 함수

#include<dos.h>

int main()
{
    
}

int ChatGPT() {
    std::cout << "Welcome to Dino Game!" << std::endl;
    std::cout << "Press any key to start" << std::endl;

    _getch();

    bool gameOver = false; // 게임 종료 여부

    int score = 0; // 점수

    int dinoX = 5; // 공룡 X 좌표
    int dinoY = 20; // 공룡 Y 좌표

    int cactusX = 80; // 장애물 X 좌표
    int cactusY = 20; // 장애물 Y 좌표

    while (!gameOver)
    {
        // 장애물 이동
        cactusX--;

        // 사용자 입력 받기
        if (_kbhit())
        {
            char ch = _getch();
            if (ch == ' ')
            {
                // 공룡 점프
                dinoY--;
            }
        }

        // 충돌 판정
        if (dinoX + 4 >= cactusX && dinoX <= cactusX + 6 && dinoY + 2 >= cactusY)
        {
            gameOver = true;
        }

        // 화면 출력
        system("cls"); // 이전 화면 지우기

        // 공룡 출력
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                std::cout << " ";
                if (i == 2 && j == 2)
                {
                    std::cout << "O";
                }
            }
            std::cout << std::endl;
        }

        // 장애물 출력
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 7; j++)
            {
                std::cout << " ";
                if (i == 2 && (j == 1 || j == 5))
                {
                    std::cout << "#";
                }
            }
            std::cout << std::endl;
        }

        // 점수 출력
        std::cout << "Score: " << score << std::endl;

        // 0.1초 대기
        Sleep(100);

        // 점수 증가
        score++;
    }

    // 게임 종료
    std::cout << "Game Over!" << std::endl;
    std::cout << "Your score is " << score << std::endl;

    return 0;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
