BIN=../checker
echo Non Numeric Input
$BIN 4 5 6 one
$BIN 2 h 2
$BIN harry
echo Non Int Input
$BIN 1 2147483648
$BIN -2147483649
$BIN 2 21312312312 21
$BIN -1 -10000000000 3
echo Duplicate Input
$BIN 21 12 21
$BIN 2 2 2 2
$BIN 0 2 1 0
echo Empty Input
$BIN
$BIN
$BIN
