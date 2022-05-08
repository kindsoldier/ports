--- ./data/filedefs/filetypes.go.orig	2020-11-08 19:14:52.000000000 +0200
+++ ./data/filedefs/filetypes.go	2022-05-06 16:09:57.551486000 +0200
@@ -5,7 +5,7 @@
 [keywords]
 # all items must be in one line
 primary=break case chan const continue default defer else fallthrough for func go goto if import interface map package range return select struct switch type var true false iota nil
-secondary=bool byte complex64 complex128 error float32 float64 int int8 int16 int32 int64 rune string uint uint8 uint16 uint32 uint64 uintptr
+secondary=bool byte complex64 complex128 error float32 float64 int int8 int16 int32 int64 rune string uint uint8 uint16 uint32 uint64 uintptr any interface{}
 
 # these are the Doxygen keywords
 docComment=a addindex addtogroup anchor arg attention author authors b brief bug c callergraph callgraph category cite class code cond copybrief copydetails copydoc copyright date def defgroup deprecated details dir dontinclude dot dotfile e else elseif em endcode endcond enddot endhtmlonly endif endinternal endlatexonly endlink endmanonly endmsc endrtfonly endverbatim endxmlonly enum example exception extends file fn headerfile hideinitializer htmlinclude htmlonly if ifnot image implements include includelineno ingroup interface internal invariant latexonly li line link mainpage manonly memberof msc mscfile n name namespace nosubgrouping note overload p package page par paragraph param post pre private privatesection property protected protectedsection protocol public publicsection ref related relatedalso relates relatesalso remark remarks result return returns retval rtfonly sa section see short showinitializer since skip skipline snippet struct subpage subsection subsubsection tableofcontents test throw throws todo tparam typedef union until var verbatim verbinclude version warning weakgroup xmlonly xrefitem
