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
        <title>NRE-ECS: /mnt/c/Users/abell/Documents/GitHub/NRE-ECS/src/ECS/Component/Handle/NRE_ComponentHandle.hpp Source File</title>
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
      <li><a href="annotated.php"><span>Classes</span></a></li>
      <li class="current"><a href="files.php"><span>Files</span></a></li>
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
      <li><a href="files.php"><span>File&#160;List</span></a></li>
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
<li class="navelem"><a class="el" href="dir_68267d1309a1af8e8297ef4c3efbcdba.php">src</a></li><li class="navelem"><a class="el" href="dir_b1a122bf62c958266ec5bf64d14fde5a.php">ECS</a></li><li class="navelem"><a class="el" href="dir_9ced74f09c88343535c7b8c7200820c7.php">Component</a></li><li class="navelem"><a class="el" href="dir_71c6ba3a8ad36a98135300822ebf3862.php">Handle</a></li>  </ul>
</div>
</div><!-- top -->
<div class="header">
  <div class="headertitle">
<div class="title">NRE_ComponentHandle.hpp</div>  </div>
</div><!--header-->
<div class="contents">
<a href="_n_r_e___component_handle_8hpp.php">Go to the documentation of this file.</a><div class="fragment"><div class="line"><a name="l00001"></a><span class="lineno">    1</span>&#160;</div><div class="line"><a name="l00010"></a><span class="lineno">   10</span>&#160;<span class="preprocessor">     #pragma once</span></div><div class="line"><a name="l00011"></a><span class="lineno">   11</span>&#160;</div><div class="line"><a name="l00012"></a><span class="lineno">   12</span>&#160;<span class="preprocessor">    #include &lt;iostream&gt;</span></div><div class="line"><a name="l00013"></a><span class="lineno">   13</span>&#160;<span class="preprocessor">    #include &lt;string&gt;</span></div><div class="line"><a name="l00014"></a><span class="lineno">   14</span>&#160;</div><div class="line"><a name="l00015"></a><span class="lineno">   15</span>&#160;<span class="preprocessor">    #include &quot;../../Entity/Id/NRE_Id.hpp&quot;</span></div><div class="line"><a name="l00016"></a><span class="lineno">   16</span>&#160;<span class="preprocessor">    #include &quot;../../Entity/Manager/NRE_EntityManager.hpp&quot;</span></div><div class="line"><a name="l00017"></a><span class="lineno">   17</span>&#160;</div><div class="line"><a name="l00022"></a><span class="lineno">   22</span>&#160;    <span class="keyword">namespace </span><a class="code" href="namespace_n_r_e.php">NRE</a> {</div><div class="line"><a name="l00027"></a><span class="lineno">   27</span>&#160;        <span class="keyword">namespace </span><a class="code" href="namespace_e_c_s.php">ECS</a> {</div><div class="line"><a name="l00028"></a><span class="lineno">   28</span>&#160;</div><div class="line"><a name="l00033"></a><span class="lineno">   33</span>&#160;            <span class="keyword">template</span> &lt;<span class="keyword">class</span> T&gt;</div><div class="line"><a name="l00034"></a><span class="lineno"><a class="line" href="class_n_r_e_1_1_e_c_s_1_1_component_handle.php">   34</a></span>&#160;            <span class="keyword">class </span><a class="code" href="class_n_r_e_1_1_e_c_s_1_1_component_handle.php">ComponentHandle</a> {</div><div class="line"><a name="l00035"></a><span class="lineno">   35</span>&#160;                <span class="keyword">private</span>:    <span class="comment">//Fields</span></div><div class="line"><a name="l00036"></a><span class="lineno">   36</span>&#160;                    <a class="code" href="class_n_r_e_1_1_e_c_s_1_1_id.php">Id</a> id;  </div><div class="line"><a name="l00038"></a><span class="lineno">   38</span>&#160;                <span class="keyword">public</span>:    <span class="comment">// Methods</span></div><div class="line"><a name="l00039"></a><span class="lineno">   39</span>&#160;                    <span class="comment">//## Constructor ##//</span></div><div class="line"><a name="l00043"></a><span class="lineno">   43</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_e_c_s_1_1_component_handle.php#a00dddf19ba89b879bb17204f9e1e5d32">ComponentHandle</a>() = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00048"></a><span class="lineno">   48</span>&#160;                        <a class="code" href="class_n_r_e_1_1_e_c_s_1_1_component_handle.php#a00dddf19ba89b879bb17204f9e1e5d32">ComponentHandle</a>(<a class="code" href="class_n_r_e_1_1_e_c_s_1_1_id.php">Id</a> i);</div><div class="line"><a name="l00049"></a><span class="lineno">   49</span>&#160;</div><div class="line"><a name="l00050"></a><span class="lineno">   50</span>&#160;                    <span class="comment">//## Copy-Constructor ##//</span></div><div class="line"><a name="l00055"></a><span class="lineno">   55</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_e_c_s_1_1_component_handle.php#a00dddf19ba89b879bb17204f9e1e5d32">ComponentHandle</a>(<a class="code" href="class_n_r_e_1_1_e_c_s_1_1_component_handle.php">ComponentHandle</a> <span class="keyword">const</span>&amp; c) = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00056"></a><span class="lineno">   56</span>&#160;</div><div class="line"><a name="l00057"></a><span class="lineno">   57</span>&#160;                    <span class="comment">//## Move-Constructor ##//</span></div><div class="line"><a name="l00062"></a><span class="lineno">   62</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_e_c_s_1_1_component_handle.php#a00dddf19ba89b879bb17204f9e1e5d32">ComponentHandle</a>(<a class="code" href="class_n_r_e_1_1_e_c_s_1_1_component_handle.php">ComponentHandle</a> &amp;&amp; c) = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00063"></a><span class="lineno">   63</span>&#160;</div><div class="line"><a name="l00064"></a><span class="lineno">   64</span>&#160;                    <span class="comment">//## Deconstructor ##//</span></div><div class="line"><a name="l00068"></a><span class="lineno">   68</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_e_c_s_1_1_component_handle.php#a844bfff13d1be0fb629f1a9fc353f0e4">~ComponentHandle</a>() = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00069"></a><span class="lineno">   69</span>&#160;</div><div class="line"><a name="l00070"></a><span class="lineno">   70</span>&#160;                    <span class="comment">//## Getter ##//</span></div><div class="line"><a name="l00075"></a><span class="lineno">   75</span>&#160;<span class="comment"></span>                        <span class="keywordtype">bool</span> <a class="code" href="class_n_r_e_1_1_e_c_s_1_1_component_handle.php#a350060d2d89dc0c41cf1e41b454be3c8">isValid</a>() <span class="keyword">const</span>;</div><div class="line"><a name="l00080"></a><span class="lineno">   80</span>&#160;                        T* <span class="keyword">get</span>();</div><div class="line"><a name="l00085"></a><span class="lineno">   85</span>&#160;                        <span class="keyword">const</span> T* <span class="keyword">get</span>() <span class="keyword">const</span>;</div><div class="line"><a name="l00090"></a><span class="lineno">   90</span>&#160;                        <a class="code" href="class_n_r_e_1_1_e_c_s_1_1_entity.php">Entity</a> <a class="code" href="class_n_r_e_1_1_e_c_s_1_1_component_handle.php#a73ccdb988ec3e1650a400453342195a1">getEntity</a>();</div><div class="line"><a name="l00091"></a><span class="lineno">   91</span>&#160;</div><div class="line"><a name="l00092"></a><span class="lineno">   92</span>&#160;                    <span class="comment">//## Methods ##//</span></div><div class="line"><a name="l00096"></a><span class="lineno">   96</span>&#160;<span class="comment"></span>                        <span class="keywordtype">void</span> <span class="keyword">remove</span>();</div><div class="line"><a name="l00097"></a><span class="lineno">   97</span>&#160;</div><div class="line"><a name="l00098"></a><span class="lineno">   98</span>&#160;                    <span class="comment">//## Access Operator ##//</span></div><div class="line"><a name="l00103"></a><span class="lineno">  103</span>&#160;<span class="comment"></span>                        T* <a class="code" href="class_n_r_e_1_1_e_c_s_1_1_component_handle.php#a772bbe031edb94c97c25172b1813b3fc">operator-&gt;</a>();</div><div class="line"><a name="l00108"></a><span class="lineno">  108</span>&#160;                        <span class="keyword">const</span> T* <a class="code" href="class_n_r_e_1_1_e_c_s_1_1_component_handle.php#a772bbe031edb94c97c25172b1813b3fc">operator-&gt;</a>() <span class="keyword">const</span>;</div><div class="line"><a name="l00113"></a><span class="lineno">  113</span>&#160;                        T&amp; <a class="code" href="class_n_r_e_1_1_e_c_s_1_1_component_handle.php#aa348815bbd82fabef4d8bb1dfaa15538">operator *</a>();</div><div class="line"><a name="l00118"></a><span class="lineno">  118</span>&#160;                        T <span class="keyword">const</span>&amp; <a class="code" href="class_n_r_e_1_1_e_c_s_1_1_component_handle.php#aa348815bbd82fabef4d8bb1dfaa15538">operator *</a>() <span class="keyword">const</span>;</div><div class="line"><a name="l00119"></a><span class="lineno">  119</span>&#160;</div><div class="line"><a name="l00120"></a><span class="lineno">  120</span>&#160;                    <span class="comment">//## Assignment Operator ##//</span></div><div class="line"><a name="l00126"></a><span class="lineno">  126</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_e_c_s_1_1_component_handle.php">ComponentHandle&lt;T&gt;</a>&amp; <a class="code" href="class_n_r_e_1_1_e_c_s_1_1_component_handle.php#a391825c9b6a1fd97d541fe71ccc7498d">operator =</a>(<a class="code" href="class_n_r_e_1_1_e_c_s_1_1_component_handle.php">ComponentHandle&lt;T&gt;</a> <span class="keyword">const</span>&amp; c) = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00132"></a><span class="lineno">  132</span>&#160;                        <a class="code" href="class_n_r_e_1_1_e_c_s_1_1_component_handle.php">ComponentHandle&lt;T&gt;</a>&amp; <a class="code" href="class_n_r_e_1_1_e_c_s_1_1_component_handle.php#a391825c9b6a1fd97d541fe71ccc7498d">operator =</a>(<a class="code" href="class_n_r_e_1_1_e_c_s_1_1_component_handle.php">ComponentHandle&lt;T&gt;</a> &amp;&amp; c) = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00133"></a><span class="lineno">  133</span>&#160;</div><div class="line"><a name="l00134"></a><span class="lineno">  134</span>&#160;                    <span class="comment">//## Comparison Operator ##//</span></div><div class="line"><a name="l00140"></a><span class="lineno">  140</span>&#160;<span class="comment"></span>                        <span class="keywordtype">bool</span> <a class="code" href="class_n_r_e_1_1_e_c_s_1_1_component_handle.php#ad48c56cf8b592762487cd839e4edbfda">operator==</a>(<a class="code" href="class_n_r_e_1_1_e_c_s_1_1_component_handle.php">ComponentHandle&lt;T&gt;</a> <span class="keyword">const</span>&amp; c) <span class="keyword">const</span>;</div><div class="line"><a name="l00146"></a><span class="lineno">  146</span>&#160;                        <span class="keywordtype">bool</span> <a class="code" href="class_n_r_e_1_1_e_c_s_1_1_component_handle.php#ab30e0b8e536aae983d0f5e85e6d61574">operator!=</a>(<a class="code" href="class_n_r_e_1_1_e_c_s_1_1_component_handle.php">ComponentHandle&lt;T&gt;</a> <span class="keyword">const</span>&amp; c) <span class="keyword">const</span>;</div><div class="line"><a name="l00147"></a><span class="lineno">  147</span>&#160;</div><div class="line"><a name="l00148"></a><span class="lineno">  148</span>&#160;            };</div><div class="line"><a name="l00149"></a><span class="lineno">  149</span>&#160;        }</div><div class="line"><a name="l00150"></a><span class="lineno">  150</span>&#160;    }</div><div class="line"><a name="l00151"></a><span class="lineno">  151</span>&#160;</div><div class="line"><a name="l00152"></a><span class="lineno">  152</span>&#160;<span class="preprocessor">    #include &quot;NRE_ComponentHandle.tpp&quot;</span></div><div class="ttc" id="namespace_e_c_s_php"><div class="ttname"><a href="namespace_e_c_s.php">ECS</a></div><div class="ttdoc">ECS&amp;#39;s API. </div></div>
<div class="ttc" id="class_n_r_e_1_1_e_c_s_1_1_component_handle_php_a772bbe031edb94c97c25172b1813b3fc"><div class="ttname"><a href="class_n_r_e_1_1_e_c_s_1_1_component_handle.php#a772bbe031edb94c97c25172b1813b3fc">NRE::ECS::ComponentHandle::operator-&gt;</a></div><div class="ttdeci">T * operator-&gt;()</div></div>
<div class="ttc" id="class_n_r_e_1_1_e_c_s_1_1_entity_php"><div class="ttname"><a href="class_n_r_e_1_1_e_c_s_1_1_entity.php">NRE::ECS::Entity</a></div><div class="ttdoc">A basic entity. </div><div class="ttdef"><b>Definition:</b> NRE_Entity.hpp:43</div></div>
<div class="ttc" id="class_n_r_e_1_1_e_c_s_1_1_component_handle_php_a350060d2d89dc0c41cf1e41b454be3c8"><div class="ttname"><a href="class_n_r_e_1_1_e_c_s_1_1_component_handle.php#a350060d2d89dc0c41cf1e41b454be3c8">NRE::ECS::ComponentHandle::isValid</a></div><div class="ttdeci">bool isValid() const </div></div>
<div class="ttc" id="class_n_r_e_1_1_e_c_s_1_1_component_handle_php_ad48c56cf8b592762487cd839e4edbfda"><div class="ttname"><a href="class_n_r_e_1_1_e_c_s_1_1_component_handle.php#ad48c56cf8b592762487cd839e4edbfda">NRE::ECS::ComponentHandle::operator==</a></div><div class="ttdeci">bool operator==(ComponentHandle&lt; T &gt; const &amp;c) const </div></div>
<div class="ttc" id="class_n_r_e_1_1_e_c_s_1_1_component_handle_php_a73ccdb988ec3e1650a400453342195a1"><div class="ttname"><a href="class_n_r_e_1_1_e_c_s_1_1_component_handle.php#a73ccdb988ec3e1650a400453342195a1">NRE::ECS::ComponentHandle::getEntity</a></div><div class="ttdeci">Entity getEntity()</div></div>
<div class="ttc" id="class_n_r_e_1_1_e_c_s_1_1_component_handle_php_ab30e0b8e536aae983d0f5e85e6d61574"><div class="ttname"><a href="class_n_r_e_1_1_e_c_s_1_1_component_handle.php#ab30e0b8e536aae983d0f5e85e6d61574">NRE::ECS::ComponentHandle::operator!=</a></div><div class="ttdeci">bool operator!=(ComponentHandle&lt; T &gt; const &amp;c) const </div></div>
<div class="ttc" id="class_n_r_e_1_1_e_c_s_1_1_component_handle_php_a391825c9b6a1fd97d541fe71ccc7498d"><div class="ttname"><a href="class_n_r_e_1_1_e_c_s_1_1_component_handle.php#a391825c9b6a1fd97d541fe71ccc7498d">NRE::ECS::ComponentHandle::operator=</a></div><div class="ttdeci">ComponentHandle&lt; T &gt; &amp; operator=(ComponentHandle&lt; T &gt; const &amp;c)=default</div></div>
<div class="ttc" id="namespace_n_r_e_php"><div class="ttname"><a href="namespace_n_r_e.php">NRE</a></div><div class="ttdoc">The NearlyRealEngine&amp;#39;s global namespace. </div></div>
<div class="ttc" id="class_n_r_e_1_1_e_c_s_1_1_component_handle_php"><div class="ttname"><a href="class_n_r_e_1_1_e_c_s_1_1_component_handle.php">NRE::ECS::ComponentHandle</a></div><div class="ttdoc">class helper to handle access to a component </div><div class="ttdef"><b>Definition:</b> NRE_ComponentHandle.hpp:34</div></div>
<div class="ttc" id="class_n_r_e_1_1_e_c_s_1_1_id_php"><div class="ttname"><a href="class_n_r_e_1_1_e_c_s_1_1_id.php">NRE::ECS::Id</a></div><div class="ttdoc">An entity Id. </div><div class="ttdef"><b>Definition:</b> NRE_Id.hpp:36</div></div>
<div class="ttc" id="class_n_r_e_1_1_e_c_s_1_1_component_handle_php_aa348815bbd82fabef4d8bb1dfaa15538"><div class="ttname"><a href="class_n_r_e_1_1_e_c_s_1_1_component_handle.php#aa348815bbd82fabef4d8bb1dfaa15538">NRE::ECS::ComponentHandle::operator*</a></div><div class="ttdeci">T &amp; operator*()</div></div>
<div class="ttc" id="class_n_r_e_1_1_e_c_s_1_1_component_handle_php_a844bfff13d1be0fb629f1a9fc353f0e4"><div class="ttname"><a href="class_n_r_e_1_1_e_c_s_1_1_component_handle.php#a844bfff13d1be0fb629f1a9fc353f0e4">NRE::ECS::ComponentHandle::~ComponentHandle</a></div><div class="ttdeci">~ComponentHandle()=default</div></div>
<div class="ttc" id="class_n_r_e_1_1_e_c_s_1_1_component_handle_php_a00dddf19ba89b879bb17204f9e1e5d32"><div class="ttname"><a href="class_n_r_e_1_1_e_c_s_1_1_component_handle.php#a00dddf19ba89b879bb17204f9e1e5d32">NRE::ECS::ComponentHandle::ComponentHandle</a></div><div class="ttdeci">ComponentHandle()=default</div></div>
</div><!-- fragment --></div><!-- contents -->
<!-- HTML footer for doxygen 1.8.8-->
<!-- start footer part -->
</div>
</div>
</div>
</div>
</body>
</html>