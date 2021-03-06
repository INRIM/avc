#!wml	-o /dev/null
# .+
# .context	: AVC, Application View Controller, web site
# .title	: Standard templates
# .kind		: wml
# .author	: Fabrizio Pollastri
# .site		: Torino Italy
# .creation	: 18-Sep-2007
# .copyright	: (c) 2007-2015 Fabrizio Pollastri
# .license	: Creative Commons Attribution - NonCommercial - NoDerivs 3.0
#		  http://creativecommons.org/licenses/by-nc-nd/3.0/
# .-


# define frequent paragrapghs

{#TITLE#:\
AVC, Application View Controller
:##}

{#COPYRIGHT#:\
Copyright &copy; 2006-2015 Fabrizio Pollastri -
<a href="terms_of_use.html"> Terms of Use</a>
:##}


# page body

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">
<head>
  <meta http-equiv="Content-Type" content="text/html">
  {#BASE_URI#}
  <link rel="stylesheet" href="common.css">
  <title>
    {#TITLE#}
  </title>
  <meta http-equiv="Content-Type" content="text/html;charset=iso-8859-1">
  <meta http-equiv="keywords"
    content="python,property,data,descriptor,protocol,gui,widget,coget,avc,mvc">
</head>

<body>

<!-- ++++ PAGE HEADER ++++ -->
<!-- ---- PAGE HEADER ---- -->

<!-- ++++ PAGE BODY ++++ -->

<p>
{#PAGEBODY#}
<p>

<!-- ---- PAGE BODY ---- -->


<!-- ++++ PAGE FOOTER ++++ -->
        <!-- previous page -->
        <!-- next page -->
<!-- ---- PAGE FOOTER ---- -->

</body>
</html>

# page body

{#PAGEBODY#:

#use wml::all

# main logo and title

<div class="leftbar">
  <a href="index.html"><img src="../images/logo.png" alt="Logo"
  class="noborder"></a>
</div>

<div class="vspace10px"></div>
<div class="mainbar maintitle">
AVC, Application View Controller
</div>

<div class="halign"></div>

# left bar

<div class="leftbar">

<div class="item">
<h3 class="itemhead">OUTLINE</h3>
<p><strong>Current:</strong> 0.10.0</p>

<p><strong>Released:</strong> 24-Apr-2015</p>

<p><strong>License:</strong>
<a href="http://www.gnu.org/copyleft/gpl.html">GPL</a></p>

<p><strong>Common Requirements:</strong><br>
<a href="http://www.python.org/">python 2.2 - &lt;3.0</a></p>

<p><strong>GTK2+ requirements:</strong><br>
<a href="http://www.pygtk.org/">Pygtk 2.8 - 2.10</a><br>
<strong>GTK3+ requirements:</strong><br>
<a href="https://wiki.gnome.org/Projects/PyGObject">PyGObject &gt;=3.10</a><br>
<strong>Qt requirements:</strong><br>
<a href="http://www.riverbankcomputing.co.uk/software/pyqt/intro">
Pyqt v3 - v4</a><br>
<strong>Tk requirements:</strong><br>
<a href="http://effbot.org/tkinterbook/">Tkinter 2.4</a><br>
<strong>wxWidgets requirements:</strong><br>
<a href="http://www.wxpython.org/">wxPython 2.6 - 2.8</a><br>
<strong>Swing requirements:</strong><br>
<a href="http://www.jython.org/">jython 2.5.1</a><br></p>

<p><strong>Author:</strong>
<a href="contact.html">Fabrizio Pollastri</a></p>

</div>

<div class="item">
<h3 class="itemhead">DOCUMENTATION</h3>
<p>Quick start examples:<br>
<a href="gtk2_quickstart.html">GTK2+</a>,
<a href="gtk3_quickstart.html">GTK3+</a>,
<a href="qt4_quickstart.html">Qt</a>,
<a href="tk_quickstart.html">Tk</a>,<br>
<a href="wx_quickstart.html">wxWidgets</a>,
<a href="swing_quickstart.html">Swing</a>.<br>
<a href="../doc/user_manual.pdf">User Manual</a>
<p><a href="relnotes.html">Release Notes</a></p>
<p><a href="changelog.html">Changelog</a></p>
#<p><a href="http://serzot.inrim.it/cgi-bin/mailman/listinfo/avc">
#Mailing List</a></p>
<p><a href="allnews.html">All News</a></p>
</div>

<div class="item">
<h3 class="itemhead">ARTICLES</h3>
<p><a
href="http://www.learningpython.com/2010/03/14/avc-simplifying-your-gui-code/">
AVC-Simplifying your GUI Code</a></p>
</div>


<div class="item">
<h3 class="itemhead">SCREENSHOTS</h3>
<p><a href="gtk2_screenshots.html">GTK2+ examples</a></p>
<p><a href="gtk3_screenshots.html">GTK3+ examples</a></p>
<p><a href="qt4_screenshots.html">Qt examples</a></p>
<p><a href="tk_screenshots.html">Tk examples</a></p>
<p><a href="wx_screenshots.html">wxWidgets examples</a></p>
<p><a href="swing_screenshots.html">Swing examples</a></p>
</div>

<div class="item">
<h3 class="itemhead">DOWNLOAD</h3>
<p>Source:<br>
-&nbsp;current <a href="../dist/avc-0.10.0.tar.gz">avc-0.10.0.tar.gz</a><br>
-&nbsp;<a href="../dist">all sources</a></p>
<p>Packages:<br>
-&nbsp;<a href="http://aur.archlinux.org/packages.php?ID=24215"
>Arch Linux</a><br>
-&nbsp;<a href="http://packages.debian.org/python-avc">Debian</a><br>
-&nbsp;<a href="http://packages.ubuntu.com/python-avc">Ubuntu</a></p>
<p>Quick start examples:<br>
-&nbsp;<a href="../examples/gtk2_spinbutton.py">GTK2+ spinbutton</a> +
<a href="../examples/gtk2_spinbutton.glade">glade file</a><br>
<a href="../examples/gtk3_spinbutton.py">GTK3+ spinbutton</a> +
<a href="../examples/gtk3_spinbutton.ui">glade file</a><br>
<a href="../examples/qt3_spinbox.ui">ui file</a><br>
-&nbsp;<a href="../examples/qt4_spinbox.py">Qt spinbox</a> +
<a href="../examples/qt4_spinbox.ui">ui file</a><br>
-&nbsp;<a href="../examples/tk_spinbox.py">Tk spinbox</a> +
<a href="../examples/tk_spinbox.tcl">tcl file</a><br>
-&nbsp;<a href="../examples/wx_spinctrl.py">wxWidgets spincontrol</a> +
<a href="../examples/wx_spinctrl.xrc">xrc file</a><br>
-&nbsp;<a href="../examples/swing_spinner.py">Swing spinner</a>
<p><a href="../examples">All examples</a><p>
</div>
<br>
</div>

# main bar

<div class="mainbar">
{#main_bar#}
</div>

# footer

<div id="footer">
{#COPYRIGHT#}
</div>

:##}
