
(set-logic QF_BV)
(declare-fun s () (_ BitVec 32))
(declare-fun t () (_ BitVec 32))
(assert (not (= (bvsge s t) (bvsle t s))))
(check-sat)
(exit)
