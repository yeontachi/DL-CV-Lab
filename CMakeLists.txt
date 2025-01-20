cmake_minimum_required(VERSION 3.10)
project(OpenCVStudy)

# C++ 표준 설정
set(CMAKE_CXX_STANDARD 17)

# OpenCV 패키지 찾기
find_package(OpenCV REQUIRED)

# 명령행 변수로 실행할 챕터와 파일 지정 (기본값 설정)
set(CHAPTER "chapter1" CACHE STRING "Chapter folder name")
set(EXERCISE "ex1" CACHE STRING "Exercise file name")

# 실행 파일 경로 설정
set(SOURCE_FILE "${CMAKE_SOURCE_DIR}/chapters/${CHAPTER}/${EXERCISE}.cpp")

# 소스 파일 존재 여부 확인
if(NOT EXISTS ${SOURCE_FILE})
    message(FATAL_ERROR "Source file ${SOURCE_FILE} does not exist. Please check CHAPTER and EXERCISE settings.")
endif()

# 실행 파일 빌드
add_executable(OpenCVStudy ${SOURCE_FILE})

# OpenCV 라이브러리 연결
target_link_libraries(OpenCVStudy ${OpenCV_LIBS})

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build)
