cmake_minimum_required(VERSION 3.27)
project(Byte)

set(CMAKE_CXX_STANDARD 14)

include_directories(pixel)

add_executable(Byte
        pixel/background.c
        pixel/barrier.c
        pixel/Byte_Runner.rc
        pixel/coin.c
        pixel/color.c
        pixel/control.c
        pixel/crash.c
        pixel/cursor_hidden.c
        pixel/difficulty_choice.c
        pixel/figure.c
        pixel/file.c
        pixel/Flame_Crash.c
        pixel/flamethrower.c
        pixel/game.h
        pixel/gameover.c
        pixel/main.c
        pixel/menu.c
        pixel/move.c
        pixel/move_to_xy.c
        pixel/music.c
        pixel/play_mode.c
        pixel/resource.h
        pixel/score.c
        pixel/shield.c
        pixel/statement.c
        pixel/status_bar.c)
