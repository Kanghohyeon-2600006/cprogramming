# 실습과제 1
| 결과    | 결과값 자료|
| 100 | char* | 
| 101~104 | int* | 
| 105~112 | double* | 
| A | char | 
| 10 | int | 
| 3.4 | double |

# 실습과제 2
```
#define _CRT_SECURE_NO_WARNINGS
```
- 보안 오류 방지

```
#pragma warning(disable:6031)
```
- 리턴 값 관련 경고 방지

```
#include <stdio.h>
```
- 헤더 파일 선언

```
int main(void){
```
- 메인 함수 호출

```
int a = -100;
```
- int형 변수 a를 만들고 -100을 저장한다

```
char b = 'A';
```
- char형 변수b를 만들고 A를 저장한다

```
double c = 3.14;
```
- double형 변수c를 만들고 3.14를 저장한다

```
int* pa = &a;
```
- a의 주소를 pa에 저장한다

```
char* pb = &b;
```
- b의 주소를 pb에 저장한다

```
double* pc = &c;
```
- c의 주소를 pc에 저장한다

```
printf("int형 변수 a의 값은 : %d\n", *pa);
```
- *pa는 pa가 가르키는 변수값이므로 -100을 출력한다

```
printf("char형 변수 b의 값은 : %c\n", *pb);
```
- *pb는 pb가 가르키는 변수값이므로 'A'를 출력한다
```
printf("double형 변수 c의 값은 : %lf\n", *pc);
```
- *pc는 pc가 가르키는 변수값이므로 3.14를 출력한다

```
return 0;
```
-0을 반환하며 main함수를 끝낸다.

#실습과제3
실습과제 3은 int* ptr = (int*)125;에서 정수 125를 int* 포인터로 강제 형변환하여 ptr에 저장했지만 125번 메모리 주소가 실제로 사용할 수 없는 메모리일 수 있기 때문에 문제가 발생한다 이후 *ptr = 10;을 실행하면서 ptr이 가리키는 메모리 주소에 10을 저장하려고 하는데 접근할 수 없는 메모리라면 접근 위반 오류가 발생하여 프로그램이 중단된다 강제 형변환은 주소를 포인터로 바꿔줄 뿐 실제로 사용할 수 있는 메모리를 만들어주는 것은 아니기 때문에 실행되지 않는 것이다

# 실습과제 4
```
#define _CRT_SECURE_NO_WARNINGS
```
- 보안 오류 방지

```
#pragma warning(disable:6031)
```
- 리턴 값 관련 경고 방지

```
#include <stdio.h>
```
- 헤더 파일 선언

```
int main(void){
```
- 메인 함수 호출

```
int a = 100, b = 200;
```
- int형 변수 a,b를 만들고 각각 100과 200을 저장한

```
int sum;
```
- 나중에 a+b를 저장할 정수형 변수 int를 만든

```
int* pa = &a;
```
- pa에 a의 주소를 저장한다

```
int* pb = &b;
```
- pb에 b의 주소를 저장한

```
int* psum = &sum;
```
- psum에 sum의 주소를 저장한

```
*psum = *pa + *pb;
```
- *pa는 a의 값을 의미하고 *pb는 b의 값을 의미하므로 a+b를 *psum에 저장한다

```
printf("두정수의 합 : %d\n", *psum);
```
- *psum은 sum의 값을 의미하므로 300을 출력한

```
return 0;
```
-0을 반환하며 main함수를 끝낸다.









