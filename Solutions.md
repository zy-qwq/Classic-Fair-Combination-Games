可以阅读 [参考资料](https://oi-wiki.org/math/game-theory/impartial-game/) 进一步了解。

## Bash game

Bash game 的策略较为简单。

我们令总共有 $n$ 根小棒，每人每次可以拿走 $1$ 到 $m$ 根小棒。

此时先手必胜，当且仅当 $n$ 不为 $m+1$ 的倍数。

## Nim game

Nim game 是一个较为经典的游戏。

我们令总共有 $n$ 堆小棒，第 $i$ 堆小棒有 $a_i$ 根。

此时先手必胜，当且仅当 $\oplus_{i=1}^n{a_i=0}$。

## Divisor game

Divisor game 类似于 Chomp game。

我们令黑板上有 $n$ 个数。

此时先手必胜，当且仅当 $n \not= 0$。
