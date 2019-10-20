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
        <title>NRE-ECS: /mnt/c/Users/abell/Documents/GitHub/NRE-ECS/src/Header/NRE_ECS.hpp File Reference</title>
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
<li class="navelem"><a class="el" href="dir_68267d1309a1af8e8297ef4c3efbcdba.php">src</a></li><li class="navelem"><a class="el" href="dir_0bb4bacb73d7f86c6a963ab22a4f5c20.php">Header</a></li>  </ul>
</div>
</div><!-- top -->
<div class="header">
  <div class="headertitle">
<div class="title">NRE_ECS.hpp File Reference</div>  </div>
</div><!--header-->
<div class="contents">

<p>Declaration of Engine's <a class="el" href="namespace_e_c_s.php" title="ECS&#39;s API. ">ECS</a>'s Header.  
<a href="#details">More...</a></p>
<div class="textblock"><code>#include &quot;<a class="el" href="_n_r_e___id_8hpp_source.php">../ECS/Entity/Id/NRE_Id.hpp</a>&quot;</code><br />
<code>#include &quot;<a class="el" href="_n_r_e___abstract_component_8hpp_source.php">../ECS/Component/NRE_AbstractComponent.hpp</a>&quot;</code><br />
<code>#include &quot;<a class="el" href="_n_r_e___entity_manager_8hpp_source.php">../ECS/Entity/Manager/NRE_EntityManager.hpp</a>&quot;</code><br />
<code>#include &quot;<a class="el" href="_n_r_e___entity_8hpp_source.php">../ECS/Entity/NRE_Entity.hpp</a>&quot;</code><br />
<code>#include &quot;<a class="el" href="_n_r_e___view_iterator_8hpp_source.php">../ECS/Entity/Manager/Iterator/NRE_ViewIterator.hpp</a>&quot;</code><br />
<code>#include &quot;<a class="el" href="_n_r_e___view_8hpp_source.php">../ECS/Entity/Manager/Iterator/View/NRE_View.hpp</a>&quot;</code><br />
<code>#include &quot;<a class="el" href="_n_r_e___typed_view_8hpp_source.php">../ECS/Entity/Manager/Iterator/View/Typed/NRE_TypedView.hpp</a>&quot;</code><br />
<code>#include &quot;<a class="el" href="_n_r_e___unpacking_view_8hpp_source.php">../ECS/Entity/Manager/Iterator/View/Unpacking/NRE_UnpackingView.hpp</a>&quot;</code><br />
<code>#include &quot;<a class="el" href="_n_r_e___component_8hpp_source.php">../ECS/Component/NRE_Component.hpp</a>&quot;</code><br />
<code>#include &quot;<a class="el" href="_n_r_e___component_handle_8hpp_source.php">../ECS/Component/Handle/NRE_ComponentHandle.hpp</a>&quot;</code><br />
<code>#include &quot;<a class="el" href="_n_r_e___component_helper_8hpp_source.php">../ECS/Component/Helper/NRE_ComponentHelper.hpp</a>&quot;</code><br />
<code>#include &quot;<a class="el" href="_n_r_e___abstract_system_8hpp_source.php">../ECS/System/NRE_AbstractSystem.hpp</a>&quot;</code><br />
<code>#include &quot;<a class="el" href="_n_r_e___system_8hpp_source.php">../ECS/System/NRE_System.hpp</a>&quot;</code><br />
<code>#include &quot;<a class="el" href="_n_r_e___system_manager_8hpp_source.php">../ECS/System/Manager/NRE_SystemManager.hpp</a>&quot;</code><br />
</div>
<p><a href="_n_r_e___e_c_s_8hpp_source.php">Go to the source code of this file.</a></p>
<a name="details" id="details"></a><h2 class="groupheader">Detailed Description</h2>
<div class="textblock"><p>Declaration of Engine's <a class="el" href="namespace_e_c_s.php" title="ECS&#39;s API. ">ECS</a>'s Header. </p>
<dl class="section author"><dt>Author</dt><dd>Louis ABEL </dd></dl>
<dl class="section date"><dt>Date</dt><dd>12/08/2019 </dd></dl>
<dl class="section copyright"><dt>Copyright</dt><dd>CC-BY-NC-SA </dd></dl>
</div></div><!-- contents -->
<!-- HTML footer for doxygen 1.8.8-->
<!-- start footer part -->
</div>
</div>
</div>
</div>
</body>
</html>
