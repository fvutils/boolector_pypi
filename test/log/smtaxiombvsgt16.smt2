
(set-logic QF_BV)
(declare-fun s () (_ BitVec 16))
(declare-fun t () (_ BitVec 16))
(assert (not (= (bvsgt s t) (bvslt t s))))
(check-sat)
(exit)
