### 문제 모음
- https://www.acmicpc.net/problem/2231

### 각 자릿수의 합 구하기
- https://www.acmicpc.net/problem/2231

```cpp
int go(int x) {
    int num = 0;
    while(x > 0) {
        num += x % 10;
        x /= 10;
    }
    return num;
}
```
* 주의할 점 : 무한 루프가 되지 않도록 `x > 0` 조건을 사용해야 한다.
