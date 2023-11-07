# Book notes

>Translations:
>Proposition: mệnh đề.
>Tautology: hằng đúng.
>Contradiction: hằng sai.
>Contingency: hằng ngẫu nhiên.
>Truth Table: bảng chân trị.
>Statement: phát biểu.
>Predicates: vị từ.
>Axiom: tiền đề.
>Hypothesis: giả thiết.
>Theorem: định lý.
>Corollary: hệ quả.
>Set: tập hợp.
>Cardinality: lực lượng (của tập hợp).
>Function: ánh xạ.
>One-to-one, Injection: đơn ánh.
>Onto, Surjection: toàn ánh.
>One-to-one correspondence, bijection: song ánh.
>Permutation: hoán vị.
>r-permutation: chỉnh hợp.
>Combination: tổ hợp.

>Read:
>Chap1
>Chap2 (not 2.5 )
>Chap6

# Chapter 1

==Propositions==
>mệnh đề (proposition) không phải là phát biểu (statements) vì một mệnh đề có thể được biểu diễn bởi nhiều phát biểu.
>
>Ví dụ: "1 + 2 = 3" và "một cộng hai bằng ba" là hai phát biểu khác nhau nhưng biểu diễn cùng một mệnh đề.

# Chapter 2

>$f : A \rightarrow B$
>$A$ is the *domain* of $f$
>$B$ is the *codomain* of $f$
>$f(a)=b$
>$b$ is the *image* of $a$
>$a$ is the *preimage* of $b$
>*Range/image* of $f$ is $f(A)=\{f(a)|a \in A\}$ or $Img(f)$

# Chapter 6

==Permutations and Combinations==
>permutation: arrange
>r-permutation: pick and arrange 
>combination: pick
>
>Permutation, r-permutation, permutation with rep:
>$$
P(n), P(n,r), PR(n)=\frac{n!}{(n-r)!  n_1!  n_2!  \dots n_k!}
$$
>n is set to choose from, r is amount we pick, $n_k$ is the amount of same objects type k. (no r mean r=n)
>
>r-permutation with rep:
>$$
>PR(n,r) = n^r 
>$$
>
>Combination:
>$$
>C(n,r)=\frac{n!}{r!(n-r)!}
>$$
>
>Combination with rep:
>$$
>CR(n,r)=C(n+r-1,r)
>$$
>(n-1) is bars number and r is star

[==partition of the positive integer n into j positive integers.==](Discrete-Mathematics-and-Its-Applications.pdf#page=477&selection=174,0,185,17|Discrete-Mathematics-and-Its-Applications, page 477)
>3 types of hat A B C and i wanna pick 2 hats with rep allow
>i would imagine people put hats in their own container
>x|x|x (x is the hat amount)
>Many way for me to choose 2|0|0 or 0|1|1 the amount of combinations i can pick is the same as the amount of combinations for a+b+c=2

