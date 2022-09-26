cmake_minimum_required(VERSION 3.0.0)
project(SBomberProject VERSION 0.0.1)

add_executable(SBomberProject   SBomberProject.cpp
                                MyTools.cpp
                                SBomber.cpp
                                Ground.cpp
                                House.cpp
                                LevelGUI.cpp
                                Plane.cpp
                                Tank.cpp
                                ScreenSingleton.cpp
                                BombDecorator.cpp
                                CommandDeleteDynamicObj.cpp
                                CommandDeleteStaticObj.cpp
                                RealBomb.cpp
                                CommandDropBomb.cpp
                                ) 
                                
set(CMAKE_CXX_STANDARD 17)
