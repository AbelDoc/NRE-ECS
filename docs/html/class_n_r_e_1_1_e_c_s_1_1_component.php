<!-- HTML header for doxygen 1.8.8-->
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <!-- For Mobile Devices -->
        <meta name="viewport" content="width=device-width, initial-scale=1">
        <meta http-equiv="Content-Type" content="text/xhtml;charset=UTF-8"/>
        <meta name="generator" content="Doxygen 1.8.11"/>
        <script type="text/javascript" src="../../js/jquery-2.1.1.min.js"></script>
        <title>NRE-ECS: NRE::ECS::Component&lt; T &gt; Class Template Reference</title>
        <!--<link href="tabs.css" rel="stylesheet" type="text/css"/>-->
        <script type="text/javascript" src="dynsections.js"></script>
        <link href="search/search.css" rel="stylesheet" type="text/css"/>
<script type="text/javascript" src="search/searchdata.js"></script>
<script type="text/javascript" src="search/search.js"></script>
<script type="text/javascript">
  $(document).ready(function() { init_search(); });
</script>
        <link href="doxygen.css" rel="stylesheet" type="text/css" />
        <link href="style.css" rel="stylesheet" type="text/css"/>
        <link href='https://fonts.googleapis.com/css?family=Roboto+Slab' rel='stylesheet' type='text/css'>
        <?php
            include '../../php/navigation.php';
            if (!isset($_COOKIE["theme"]) || $_COOKIE["theme"] == "dark") {
                echo '<link href="../../css/dark/bootstrap.css" rel="stylesheet">';
            } else {
                echo '<link href="../../css/light/bootstrap.css" rel="stylesheet">';
            }
        ?>
        <script src="../../js/bootstrap.min.js"></script>
        <script type="text/javascript" src="doxy-boot.js"></script>
    </head>
    <body>
        <div class="container-fluid">
            <header class="page-header">
                <a href="../../../index.php">
                    <img src="../../img/Logo.png" class="logo img-responsive"/>
                </a>
            </header>
            <?php addNavigationBarInl(false); ?>
            <div id="top" class="row"><!-- do not remove this div, it is closed by doxygen! -->
                <div class="col-lg-12">
                    <div class="panel panel-default">
                        <div class="panel-body">
<!-- end header part -->
<!-- Generated by Doxygen 1.8.11 -->
<script type="text/javascript">
var searchBox = new SearchBox("searchBox", "search",false,'Search');
</script>
  <div id="navrow1" class="tabs">
    <ul class="tablist">
      <li><a href="index.php"><span>Main&#160;Page</span></a></li>
      <li><a href="namespaces.php"><span>Namespaces</span></a></li>
      <li class="current"><a href="annotated.php"><span>Classes</span></a></li>
      <li><a href="files.php"><span>Files</span></a></li>
      <li>
        <div id="MSearchBox" class="MSearchBoxInactive">
        <span class="left">
          <img id="MSearchSelect" src="search/mag_sel.png"
               onmouseover="return searchBox.OnSearchSelectShow()"
               onmouseout="return searchBox.OnSearchSelectHide()"
               alt=""/>
          <input type="text" id="MSearchField" value="Search" accesskey="S"
               onfocus="searchBox.OnSearchFieldFocus(true)" 
               onblur="searchBox.OnSearchFieldFocus(false)" 
               onkeyup="searchBox.OnSearchFieldChange(event)"/>
          </span><span class="right">
            <a id="MSearchClose" href="javascript:searchBox.CloseResultsWindow()"><img id="MSearchCloseImg" border="0" src="search/close.png" alt=""/></a>
          </span>
        </div>
      </li>
    </ul>
  </div>
  <div id="navrow2" class="tabs2">
    <ul class="tablist">
      <li><a href="annotated.php"><span>Class&#160;List</span></a></li>
      <li><a href="classes.php"><span>Class&#160;Index</span></a></li>
      <li><a href="hierarchy.php"><span>Class&#160;Hierarchy</span></a></li>
      <li><a href="functions.php"><span>Class&#160;Members</span></a></li>
    </ul>
  </div>
<!-- window showing the filter options -->
<div id="MSearchSelectWindow"
     onmouseover="return searchBox.OnSearchSelectShow()"
     onmouseout="return searchBox.OnSearchSelectHide()"
     onkeydown="return searchBox.OnSearchSelectKey(event)">
</div>

<!-- iframe showing the search results (closed by default) -->
<div id="MSearchResultsWindow">
<iframe src="javascript:void(0)" frameborder="0" 
        name="MSearchResults" id="MSearchResults">
</iframe>
</div>

<div id="nav-path" class="navpath">
  <ul>
<li class="navelem"><a class="el" href="namespace_n_r_e.php">NRE</a></li><li class="navelem"><b>ECS</b></li><li class="navelem"><a class="el" href="class_n_r_e_1_1_e_c_s_1_1_component.php">Component</a></li>  </ul>
</div>
</div><!-- top -->
<div class="header">
  <div class="summary">
<a href="#pub-static-methods">Static Public Member Functions</a> &#124;
<a href="class_n_r_e_1_1_e_c_s_1_1_component-members.php">List of all members</a>  </div>
  <div class="headertitle">
<div class="title">NRE::ECS::Component&lt; T &gt; Class Template Reference</div>  </div>
</div><!--header-->
<div class="contents">

<p>Base component for user defined component.  
 <a href="class_n_r_e_1_1_e_c_s_1_1_component.php#details">More...</a></p>

<p><code>#include &lt;<a class="el" href="_n_r_e___component_8hpp_source.php">NRE_Component.hpp</a>&gt;</code></p>
<div class="dynheader">
Inheritance diagram for NRE::ECS::Component&lt; T &gt;:</div>
<div class="dyncontent">
 <div class="center">
  <img src="class_n_r_e_1_1_e_c_s_1_1_component.png" usemap="#NRE::ECS::Component_3C_20T_20_3E_map" alt=""/>
  <map id="NRE::ECS::Component_3C_20T_20_3E_map" name="NRE::ECS::Component&lt; T &gt;_map">
<area href="class_n_r_e_1_1_e_c_s_1_1_abstract_component.php" title="Base for template component. " alt="NRE::ECS::AbstractComponent" shape="rect" coords="0,0,184,24"/>
</map>
 </div></div>
<table class="memberdecls">
<tr class="heading"><td colspan="2"><h2 class="groupheader"><a name="pub-static-methods"></a>
Static Public Member Functions</h2></td></tr>
<tr class="memitem:a1cbaed0d8a105f70870c44c8a5cd23e2"><td class="memItemLeft" align="right" valign="top">static <a class="el" href="class_n_r_e_1_1_e_c_s_1_1_abstract_component.php#a1197e903d5b51257be54973b2ff1b27f">Category</a>&#160;</td><td class="memItemRight" valign="bottom"><a class="el" href="class_n_r_e_1_1_e_c_s_1_1_component.php#a1cbaed0d8a105f70870c44c8a5cd23e2">getCategory</a> ()</td></tr>
<tr class="separator:a1cbaed0d8a105f70870c44c8a5cd23e2"><td class="memSeparator" colspan="2">&#160;</td></tr>
</table><table class="memberdecls">
<tr class="heading"><td colspan="2"><h2 class="groupheader"><a name="inherited"></a>
Additional Inherited Members</h2></td></tr>
<tr class="inherit_header pub_types_class_n_r_e_1_1_e_c_s_1_1_abstract_component"><td colspan="2" onclick="javascript:toggleInherit('pub_types_class_n_r_e_1_1_e_c_s_1_1_abstract_component')"><img src="closed.png" alt="-"/>&#160;Public Types inherited from <a class="el" href="class_n_r_e_1_1_e_c_s_1_1_abstract_component.php">NRE::ECS::AbstractComponent</a></td></tr>
<tr class="memitem:a1197e903d5b51257be54973b2ff1b27f inherit pub_types_class_n_r_e_1_1_e_c_s_1_1_abstract_component"><td class="memItemLeft" align="right" valign="top">typedef std::size_t&#160;</td><td class="memItemRight" valign="bottom"><a class="el" href="class_n_r_e_1_1_e_c_s_1_1_abstract_component.php#a1197e903d5b51257be54973b2ff1b27f">Category</a></td></tr>
<tr class="separator:a1197e903d5b51257be54973b2ff1b27f inherit pub_types_class_n_r_e_1_1_e_c_s_1_1_abstract_component"><td class="memSeparator" colspan="2">&#160;</td></tr>
<tr class="inherit_header pub_methods_class_n_r_e_1_1_e_c_s_1_1_abstract_component"><td colspan="2" onclick="javascript:toggleInherit('pub_methods_class_n_r_e_1_1_e_c_s_1_1_abstract_component')"><img src="closed.png" alt="-"/>&#160;Public Member Functions inherited from <a class="el" href="class_n_r_e_1_1_e_c_s_1_1_abstract_component.php">NRE::ECS::AbstractComponent</a></td></tr>
<tr class="memitem:a06bffd4cdf2185bb2417e711ca513fcc inherit pub_methods_class_n_r_e_1_1_e_c_s_1_1_abstract_component"><td class="memItemLeft" align="right" valign="top">void&#160;</td><td class="memItemRight" valign="bottom"><a class="el" href="class_n_r_e_1_1_e_c_s_1_1_abstract_component.php#a06bffd4cdf2185bb2417e711ca513fcc">operator delete</a> (void *ptr)=delete</td></tr>
<tr class="separator:a06bffd4cdf2185bb2417e711ca513fcc inherit pub_methods_class_n_r_e_1_1_e_c_s_1_1_abstract_component"><td class="memSeparator" colspan="2">&#160;</td></tr>
<tr class="memitem:a9a7860c4695bf6bf7bcd4fe686d4b89b inherit pub_methods_class_n_r_e_1_1_e_c_s_1_1_abstract_component"><td class="memItemLeft" align="right" valign="top">void&#160;</td><td class="memItemRight" valign="bottom"><a class="el" href="class_n_r_e_1_1_e_c_s_1_1_abstract_component.php#a9a7860c4695bf6bf7bcd4fe686d4b89b">operator delete[]</a> (void *ptr)=delete</td></tr>
<tr class="separator:a9a7860c4695bf6bf7bcd4fe686d4b89b inherit pub_methods_class_n_r_e_1_1_e_c_s_1_1_abstract_component"><td class="memSeparator" colspan="2">&#160;</td></tr>
<tr class="inherit_header pub_static_attribs_class_n_r_e_1_1_e_c_s_1_1_abstract_component"><td colspan="2" onclick="javascript:toggleInherit('pub_static_attribs_class_n_r_e_1_1_e_c_s_1_1_abstract_component')"><img src="closed.png" alt="-"/>&#160;Static Public Attributes inherited from <a class="el" href="class_n_r_e_1_1_e_c_s_1_1_abstract_component.php">NRE::ECS::AbstractComponent</a></td></tr>
<tr class="memitem:a2141e882eb37ad59cc4e307ff71c7d0c inherit pub_static_attribs_class_n_r_e_1_1_e_c_s_1_1_abstract_component"><td class="memItemLeft" align="right" valign="top">static constexpr const std::size_t&#160;</td><td class="memItemRight" valign="bottom"><a class="el" href="class_n_r_e_1_1_e_c_s_1_1_abstract_component.php#a2141e882eb37ad59cc4e307ff71c7d0c">MAX_COMPONENTS</a> = 64</td></tr>
<tr class="separator:a2141e882eb37ad59cc4e307ff71c7d0c inherit pub_static_attribs_class_n_r_e_1_1_e_c_s_1_1_abstract_component"><td class="memSeparator" colspan="2">&#160;</td></tr>
<tr class="inherit_header pro_static_attribs_class_n_r_e_1_1_e_c_s_1_1_abstract_component"><td colspan="2" onclick="javascript:toggleInherit('pro_static_attribs_class_n_r_e_1_1_e_c_s_1_1_abstract_component')"><img src="closed.png" alt="-"/>&#160;Static Protected Attributes inherited from <a class="el" href="class_n_r_e_1_1_e_c_s_1_1_abstract_component.php">NRE::ECS::AbstractComponent</a></td></tr>
<tr class="memitem:a1ca6777e5846da7eaf6ae90d076a4e24 inherit pro_static_attribs_class_n_r_e_1_1_e_c_s_1_1_abstract_component"><td class="memItemLeft" align="right" valign="top">static <a class="el" href="class_n_r_e_1_1_e_c_s_1_1_abstract_component.php#a1197e903d5b51257be54973b2ff1b27f">Category</a>&#160;</td><td class="memItemRight" valign="bottom"><a class="el" href="class_n_r_e_1_1_e_c_s_1_1_abstract_component.php#a1ca6777e5846da7eaf6ae90d076a4e24">counter</a> = 0</td></tr>
<tr class="separator:a1ca6777e5846da7eaf6ae90d076a4e24 inherit pro_static_attribs_class_n_r_e_1_1_e_c_s_1_1_abstract_component"><td class="memSeparator" colspan="2">&#160;</td></tr>
</table>
<a name="details" id="details"></a><h2 class="groupheader">Detailed Description</h2>
<div class="textblock"><h3>template&lt;class T&gt;<br />
class NRE::ECS::Component&lt; T &gt;</h3>

<p>Base component for user defined component. </p>
</div><h2 class="groupheader">Member Function Documentation</h2>
<a class="anchor" id="a1cbaed0d8a105f70870c44c8a5cd23e2"></a>
<div class="memitem">
<div class="memproto">
<div class="memtemplate">
template&lt;class T&gt; </div>
<table class="mlabels">
  <tr>
  <td class="mlabels-left">
      <table class="memname">
        <tr>
          <td class="memname">static <a class="el" href="class_n_r_e_1_1_e_c_s_1_1_abstract_component.php#a1197e903d5b51257be54973b2ff1b27f">Category</a> <a class="el" href="class_n_r_e_1_1_e_c_s_1_1_component.php">NRE::ECS::Component</a>&lt; T &gt;::getCategory </td>
          <td>(</td>
          <td class="paramname"></td><td>)</td>
          <td></td>
        </tr>
      </table>
  </td>
  <td class="mlabels-right">
<span class="mlabels"><span class="mlabel">inline</span><span class="mlabel">static</span></span>  </td>
  </tr>
</table>
</div><div class="memdoc">
<p>Category getter </p><dl class="section return"><dt>Returns</dt><dd>the T component category </dd></dl>

</div>
</div>
<hr/>The documentation for this class was generated from the following file:<ul>
<li>/mnt/c/Users/abell/Documents/GitHub/NRE-ECS/src/ECS/Component/<a class="el" href="_n_r_e___component_8hpp_source.php">NRE_Component.hpp</a></li>
</ul>
</div><!-- contents -->
<!-- HTML footer for doxygen 1.8.8-->
<!-- start footer part -->
</div>
</div>
</div>
</div>
</body>
</html>
