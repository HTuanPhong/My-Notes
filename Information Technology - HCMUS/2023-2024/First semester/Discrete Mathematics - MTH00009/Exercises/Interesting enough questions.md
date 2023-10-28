4 i) Chứng minh: $[(p \rightarrow q) \land (q \rightarrow r) \land (r \rightarrow p)] \Leftrightarrow [(p \leftrightarrow q) \land (q \leftrightarrow r) \land (r \leftrightarrow p)]$

**Phương pháp giảm biến:**
$$
\begin{align*}
\text{cho } P \text{ đúng ta được: } & \\ 

& [q \land ( q \rightarrow r ) \land 1] \Leftrightarrow [q \land (q \leftrightarrow r ) \land r] \qquad &(4.1)\\

\text{cho } P \text{ sai ta được: } & \\

& [1 \land ( q \rightarrow r ) \land \lnot r] \Leftrightarrow [\lnot q \land (q \leftrightarrow r ) \land \lnot r] \qquad &(4.2)\\

\text{giải (4.1):} & \\

& \text{VT } \Leftrightarrow [q \land ( \lnot q \lor r )] \Leftrightarrow q \land r\\
& \text{VP } \Leftrightarrow [q \land (\lnot q \lor r ) \land r] \Leftrightarrow q \land r\\

\text{giải (4.2):} & \\

& \text{VT } \Leftrightarrow [(\lnot q \lor r ) \land \lnot r] \Leftrightarrow \lnot q \land \lnot r\\
& \text{VP } \Leftrightarrow [\lnot q \land (\lnot q \lor r) \land (\lnot r \lor q) \land \lnot r] \Leftrightarrow \lnot q \land \lnot r\\

\end{align*}
$$


nguồn: [[BÀI TẬP TOÁN RỜI RẠC.pdf]]


6 g) Cho các lượng từ $\gamma$ và $\delta$ $(\gamma, \delta \in \{ \forall, \exists \}, \gamma \neq \delta)$. Xét chân trị của $A$ tùy theo dạng cụ thể của $\gamma$ và $\delta$ :
$A = \gamma x \in \mathbb{R} , \delta k \in \mathbb{Z} , (x-k)^2 \leq 2^{-2}$

TH1:
$$
\begin{align*}
A &= \exists x \in \mathbb{R} , \forall k \in \mathbb{Z} , (x-k)^2 \leq 2^{-2}\\
&= \exists x \in \mathbb{R} , \forall k \in \mathbb{Z} , |x-k| \leq 0.5
\end{align*}
$$
chân trị của A là sai vì không tồn tại x thuộc R nào cách tất cả các số k thuộc Z một khoảng bé hơn hoặc bằng 0.5

TH2:
$$
\begin{align*}
A &= \forall x \in \mathbb{R} , \exists k \in \mathbb{Z} , (x-k)^2 \leq 2^{-2}\\
&= \forall x \in \mathbb{R} , \exists k \in \mathbb{Z} , |x-k| \leq 0.5
\end{align*}
$$
chân trị của A là đúng vì với mọi x thuộc R đều cách một số k thuộc Z một khoảng bé hơn hoặc bằng 0.5
```latex
\usepackage{tikz}
\begin{document}
\begin{tikzpicture}[thick,scale=1.25, every node/.style={scale=1.25}]
	% x-axis
	\draw[<->] (-5,0) -- (5,0);

	% 11/4
	\fill[black] (11/4,0) circle (0.5 mm) node[above=20pt] {$11/4$};
	\draw (11/4,0) -- ++(0,22pt);
	\draw (11/4,0) circle [radius = 0.5];

	%-sqrt(2)-1
	\fill[black] ({-sqrt(2)-1},0) circle (0.5 mm) node[above=20pt] {$-\sqrt{2}-1$};
	\draw ({-sqrt(2)-1},0) -- ++(0,22pt);
	\draw ({-sqrt(2)-1},0) circle [radius = 0.5];

	% 1.5
	\fill[black] (0.5,0) circle (0.5 mm) node[above=20pt] {$0.5$};
	\draw (0.5,0) -- ++(0,22pt);
	\draw (0.5,0) circle [radius = 0.5];	

	%draw Z numbers
	\foreach \i in {-4,-3,...,4} % points on line
    \draw (\i,0.1) -- + (0,-0.2) node[below=10pt,black] {$\i$};

	%draw z + 0.5 numbers
    \foreach \i in {-3.5,-2.5,...,3.5} % points on line
    \fill[black] (\i,0) circle (0.3 mm);

\end{tikzpicture}
\end{document}
```

nguồn: [[BÀI TẬP TOÁN RỜI RẠC.pdf]]

9 i) Giải thích sự đúng đắn của các sự suy luận dưới đây (p, q, r, s, t và u là các biến mệnh đề): $\{ (p \rightarrow q) \land (r \rightarrow s) \land [(s \land q) \rightarrow (p \land t)] \land (t \rightarrow \lnot p)\} \Rightarrow (\lnot p \lor \lnot r)$

Kết luận dạng $A \rightarrow B$ ta nên thêm giả thiết $A$.
$$

\begin{align*}
	& p \rightarrow q\\
	& r \rightarrow s\\
	& (s \land q) \rightarrow (p \land t)\\
	& t \rightarrow \lnot p\\
	& p \\
	\hline
	\therefore \quad & \lnot p \lor \lnot r \Leftrightarrow p \rightarrow \lnot r
\end{align*}
$$
Giải:
$$
\begin{array}{rl}
& p \\
& p \rightarrow q \\
\hline
\therefore & q\\
& (s \land q) \rightarrow (p \land t) \\
\hline
\therefore & s \rightarrow (p \land t) \\
& r \rightarrow s \\
\hline
\therefore & r \rightarrow (p \land t) \\
& p \\
\hline
\therefore & r \rightarrow t\\
& t \rightarrow \lnot p \\
\hline
\therefore & r \rightarrow \lnot p \Leftrightarrow \lnot p \lor \lnot r
\end{array}
$$
nguồn: [[BÀI TẬP TOÁN RỜI RẠC.pdf]]