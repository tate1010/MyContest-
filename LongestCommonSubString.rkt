#lang racket
(define x (symbol->string (read))) ;; long string
(define y (symbol->string (read))) ;; checker string


(define word  (string->list (string-append x "$" y)))


(define (SA x)

 [cond
   [(empty? x) empty]
   [else (cons x (SA (cdr x)))]
  ])



(define (suffix< a b)
  [cond
  [(empty? b )#false]
  [(empty? a ) #true]
  [(char<? (first a) (first b)) #true]
  [(char=? (first a) (first b)) (suffix< (rest a) ( rest b))]
  [else #false]])

(define (merge x y)
  (cond
    [(empty? x) y]
    [(empty? y) x]
    [(suffix< (car x) (car y))
     (cons (car x) (merge (cdr x) y))]
    [else 
     (cons (car y) (merge x (cdr y)))]))

(define (merge-sort s)
  (cond
    [(or (empty? s) (empty? (cdr s))) s]
    [(empty? (cddr s))
     (merge (list (car s)) (cdr s))]
    [#t
     (let ([math (ceiling (/ (length s) 2))])
       (merge (merge-sort (take s math))
              (merge-sort (drop s math))))]))

(define (sorted-suffix x counter)
[cond
  [(empty? (first x)) counter]
  [(empty? (rest x)) counter]
  [else (sorted-suffix (rest x)
                       (let ([money (whereismoney (first x))]
                             [rich (whereismoney (second x))])
                       (define num (checkandchecker (first x) (second x) 0))
                       (if (xor money rich) (if (> num  counter) num counter) counter)))]])

    

;;;;;;;;from a10 b

(define (checkandchecker a b counter)
(cond
  [(empty? b) counter]
  [(empty? a) counter]
  [(char=? (first a) (first b)) (checkandchecker (cdr a) (cdr b) (+ 1 counter))]
  [else counter]
))

(define (whereismoney x)
[cond
    [(empty? x) false]
  [(char=? #\$ (first x)) true]

  [else (whereismoney (rest x))]])
  

(sorted-suffix (merge-sort (SA word)) 0)
