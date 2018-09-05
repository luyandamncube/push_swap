IN100=$(ruby -e "puts (0..20).to_a.shuffle.join(' ')")
echo $IN100
../push_swap $IN100 | wc -l
