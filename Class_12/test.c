#
# Test page for enhanced text mode in UTF-8 encoding
#
# Suggested PostScript font test
# set fontpath "/usr/local/share/fonts"
# set term post color adobeglyphnames fontfile 'l_10646.ttf' font "LucidaSansUnicode,12"
# set output 'enhanced_utf8.ps'
#
set termoption enhanced
save_encoding = GPVAL_ENCODING
set encoding utf8
#
set xrange [-1:1]
set yrange [-0.5:1.1]
set format xy "%.1f"
set arrow from  0.5, -0.5 to  0.5, 0.0 nohead
#
set label 1 at -0.30, 0.5
set label 1 "Sinusa grafiks sin:" tc lt 3


#
set key title " "
plot sin(x)**2 lt 2 lw 2 title "sin^2(x)"


