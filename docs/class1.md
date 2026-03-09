### 문제 모음
- https://www.acmicpc.net/problem/10951
- https://www.acmicpc.net/problem/11654
- https://www.acmicpc.net/problem/25083
- https://www.acmicpc.net/problem/2439
- https://www.acmicpc.net/problem/10250

### while(cin >> a >> b)
- https://www.acmicpc.net/problem/10951
- a와 b가 입력되는 동안 계속해서 반복문이 실행된다.

### 아스키 코드
- https://www.acmicpc.net/problem/11654

```cpp
char c;
cin >> c;
int a = c;
cout << a << "\n";
```
- char형 변수 c에 입력된 문자를 int형 변수 a에 저장하면, a에는 해당 문자의 아스키코드 값이 저장된다.

### R"()"
- https://www.acmicpc.net/problem/25083
- `R"()"`는 C++11에서 도입된 raw string literal을 나타내는 구문입니다.
- `R"()"` 안에 있는 문자열은 그대로 출력됩니다.
- 예시:
    ```cpp
    cout << R"( /\_/\
    ( o.o )";
    ```
- 위 코드는 다음과 같이 출력됩니다:
    ```
    /\_/\
    ( o.o )
    ```

### string(int 개수, char 문자)
- https://www.acmicpc.net/problem/2439
- int와 char를 인자로 받아서, char를 int 개수만큼 반복하여 문자열을 만들어 반환하는 생성자입니다.
- 예를 들어 string(5, '*')는 '*' 문자를 5개 연속으로 포함하는 문자열을 생성합니다.

### to_string(int 숫자)
- https://www.acmicpc.net/problem/2439
- int형 숫자를 string형으로 변환하는 함수입니다.
- `s += i;` 는 런타임 에러가 발생할 수 있습니다. 왜냐하면 i는 int형이기 때문에, s에 직접적으로 더할 수 없습니다.
- 대신, to_string(i)를 사용하여 i를 string으로 변환한 후에 s에 더해야 합니다.

### stoi(string s)
- https://www.acmicpc.net/problem/2439
- string형 s를 int형으로 변환하는 함수입니다.
- 예를 들어, string s = "123"; int num = stoi(s); 는 s에 저장된 문자열 "123"을 int형으로 변환하여 num에 저장합니다. num의 값은 123이 됩니다.

### 호텔 방 번호
- https://www.acmicpc.net/problem/10250

```cpp
int floor = (n - 1) % h + 1;
int room = (n - 1) / h + 1;
```
- n이 h의 배수일 때 0층이 버리기 때문에, 이를 해결하기 위해 (n - 1)을 사용하여 계산합니다.
- %h 혹은 /h 연산을 한 후 +1을 해주어 올바른 층과 방 번호를 얻을 수 있습니다.