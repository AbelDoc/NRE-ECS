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
        <title>NRE-ECS: Class Hierarchy</title>
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
      <li class="current"><a href="hierarchy.php"><span>Class&#160;Hierarchy</span></a></li>
      <li><a href="functions.php"><span>Class&#160;Members</span></a></li>
    </ul>
  </div>
</div><!-- top -->
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

<div class="header">
  <div class="headertitle">
<div class="title">Class Hierarchy</div>  </div>
</div><!--header-->
<div class="contents">
<div class="textblock">This inheritance list is sorted roughly, but not completely, alphabetically:</div><div class="directory">
<div class="levels">[detail level <span onclick="javascript:toggleLevel(1);">1</span><span onclick="javascript:toggleLevel(2);">2</span><span onclick="javascript:toggleLevel(3);">3</span>]</div><table class="directory">
<tr id="row_0_" class="even"><td class="entry"><span style="width:0px;display:inline-block;">&#160;</span><span id="arr_0_" class="arrow" onclick="toggleFolder('0_')">&#9660;</span><span class="icona"><span class="icon">C</span></span><a class="el" href="class_n_r_e_1_1_e_c_s_1_1_abstract_allocator.php" target="_self">NRE::ECS::AbstractAllocator</a></td><td class="desc">An abstract allocator used in the <a class="el" href="namespace_e_c_s.php" title="ECS&#39;s API. ">ECS</a> for component pool </td></tr>
<tr id="row_0_0_"><td class="entry"><span style="width:32px;display:inline-block;">&#160;</span><span class="icona"><span class="icon">C</span></span><a class="el" href="class_n_r_e_1_1_e_c_s_1_1_pool_allocator.php" target="_self">NRE::ECS::PoolAllocator&lt; T, ChunkSize &gt;</a></td><td class="desc">A pool allocator used to manage component in the <a class="el" href="namespace_e_c_s.php" title="ECS&#39;s API. ">ECS</a> </td></tr>
<tr id="row_1_" class="even"><td class="entry"><span style="width:0px;display:inline-block;">&#160;</span><span id="arr_1_" class="arrow" onclick="toggleFolder('1_')">&#9660;</span><span class="icona"><span class="icon">C</span></span><a class="el" href="class_n_r_e_1_1_e_c_s_1_1_abstract_component.php" target="_self">NRE::ECS::AbstractComponent</a></td><td class="desc">Base for template component </td></tr>
<tr id="row_1_0_"><td class="entry"><span style="width:32px;display:inline-block;">&#160;</span><span class="icona"><span class="icon">C</span></span><a class="el" href="class_n_r_e_1_1_e_c_s_1_1_component.php" target="_self">NRE::ECS::Component&lt; T &gt;</a></td><td class="desc">Base component for user defined component </td></tr>
<tr id="row_2_" class="even"><td class="entry"><span style="width:0px;display:inline-block;">&#160;</span><span id="arr_2_" class="arrow" onclick="toggleFolder('2_')">&#9660;</span><span class="icona"><span class="icon">C</span></span><a class="el" href="class_n_r_e_1_1_e_c_s_1_1_abstract_system.php" target="_self">NRE::ECS::AbstractSystem</a></td><td class="desc">Base class for template system </td></tr>
<tr id="row_2_0_"><td class="entry"><span style="width:32px;display:inline-block;">&#160;</span><span class="icona"><span class="icon">C</span></span><a class="el" href="class_n_r_e_1_1_e_c_s_1_1_system.php" target="_self">NRE::ECS::System&lt; T &gt;</a></td><td class="desc">Base class for user defined system </td></tr>
<tr id="row_2_1_" class="even"><td class="entry"><span style="width:16px;display:inline-block;">&#160;</span><span id="arr_2_1_" class="arrow" onclick="toggleFolder('2_1_')">&#9660;</span><span class="icona"><span class="icon">C</span></span><a class="el" href="class_n_r_e_1_1_e_c_s_1_1_system.php" target="_self">NRE::ECS::System&lt; TestSystem &gt;</a></td><td class="desc"></td></tr>
<tr id="row_2_1_0_"><td class="entry"><span style="width:48px;display:inline-block;">&#160;</span><span class="icona"><span class="icon">C</span></span><a class="el" href="class_test_system.php" target="_self">TestSystem</a></td><td class="desc"></td></tr>
<tr id="row_3_" class="even"><td class="entry"><span style="width:16px;display:inline-block;">&#160;</span><span class="icona"><span class="icon">C</span></span><a class="el" href="class_n_r_e_1_1_e_c_s_1_1_component_handle.php" target="_self">NRE::ECS::ComponentHandle&lt; T &gt;</a></td><td class="desc">Class helper to handle access to a component </td></tr>
<tr id="row_4_"><td class="entry"><span style="width:16px;display:inline-block;">&#160;</span><span class="icona"><span class="icon">C</span></span><a class="el" href="class_n_r_e_1_1_e_c_s_1_1_entity.php" target="_self">NRE::ECS::Entity</a></td><td class="desc">A basic entity </td></tr>
<tr id="row_5_" class="even"><td class="entry"><span style="width:0px;display:inline-block;">&#160;</span><span id="arr_5_" class="arrow" onclick="toggleFolder('5_')">&#9660;</span><span class="icona"><span class="icon">C</span></span><a class="el" href="class_n_r_e_1_1_e_c_s_1_1_i_component_helper.php" target="_self">NRE::ECS::IComponentHelper</a></td><td class="desc">Interface for component helper </td></tr>
<tr id="row_5_0_"><td class="entry"><span style="width:32px;display:inline-block;">&#160;</span><span class="icona"><span class="icon">C</span></span><a class="el" href="class_n_r_e_1_1_e_c_s_1_1_component_helper.php" target="_self">NRE::ECS::ComponentHelper&lt; T &gt;</a></td><td class="desc">Helper class to perform component operations </td></tr>
<tr id="row_6_" class="even"><td class="entry"><span style="width:16px;display:inline-block;">&#160;</span><span class="icona"><span class="icon">C</span></span><a class="el" href="class_n_r_e_1_1_e_c_s_1_1_id.php" target="_self">NRE::ECS::Id</a></td><td class="desc">An entity <a class="el" href="class_n_r_e_1_1_e_c_s_1_1_id.php" title="An entity Id. ">Id</a> </td></tr>
<tr id="row_7_"><td class="entry"><span style="width:16px;display:inline-block;">&#160;</span><span class="icona"><span class="icon">C</span></span><a class="el" href="struct_n_r_e_1_1_e_c_s_1_1_entity_manager_1_1identity.php" target="_self">NRE::ECS::EntityManager::identity&lt; T &gt;</a></td><td class="desc">Used for meta programming </td></tr>
<tr id="row_8_" class="even"><td class="entry"><span style="width:16px;display:inline-block;">&#160;</span><span class="icona"><span class="icon">C</span></span><a class="el" href="struct_n_r_e_1_1_e_c_s_1_1_typed_view_1_1identity.php" target="_self">NRE::ECS::TypedView&lt; All, Components &gt;::identity&lt; T &gt;</a></td><td class="desc">Used for meta programming </td></tr>
<tr id="row_9_"><td class="entry"><span style="width:0px;display:inline-block;">&#160;</span><span id="arr_9_" class="arrow" onclick="toggleFolder('9_')">&#9660;</span><span class="icona"><span class="icon">C</span></span><b>iterator</b></td><td class="desc"></td></tr>
<tr id="row_9_0_" class="even"><td class="entry"><span style="width:32px;display:inline-block;">&#160;</span><span class="icona"><span class="icon">C</span></span><a class="el" href="class_n_r_e_1_1_e_c_s_1_1_view_iterator.php" target="_self">NRE::ECS::ViewIterator&lt; T, All &gt;</a></td><td class="desc">An iterator over a view of entities </td></tr>
<tr id="row_9_1_"><td class="entry"><span style="width:16px;display:inline-block;">&#160;</span><span id="arr_9_1_" class="arrow" onclick="toggleFolder('9_1_')">&#9660;</span><span class="icona"><span class="icon">C</span></span><a class="el" href="class_n_r_e_1_1_e_c_s_1_1_view_iterator.php" target="_self">NRE::ECS::ViewIterator&lt; Iterator &gt;</a></td><td class="desc"></td></tr>
<tr id="row_9_1_0_" class="even"><td class="entry"><span style="width:48px;display:inline-block;">&#160;</span><span class="icona"><span class="icon">C</span></span><a class="el" href="class_n_r_e_1_1_e_c_s_1_1_unpacking_view_1_1_iterator.php" target="_self">NRE::ECS::UnpackingView&lt; Components &gt;::Iterator</a></td><td class="desc">A view iterator used to wrap the unpacker behavior </td></tr>
<tr id="row_9_2_"><td class="entry"><span style="width:16px;display:inline-block;">&#160;</span><span id="arr_9_2_" class="arrow" onclick="toggleFolder('9_2_')">&#9660;</span><span class="icona"><span class="icon">C</span></span><a class="el" href="class_n_r_e_1_1_e_c_s_1_1_view_iterator.php" target="_self">NRE::ECS::ViewIterator&lt; Iterator, All &gt;</a></td><td class="desc"></td></tr>
<tr id="row_9_2_0_" class="even"><td class="entry"><span style="width:48px;display:inline-block;">&#160;</span><span class="icona"><span class="icon">C</span></span><a class="el" href="class_n_r_e_1_1_e_c_s_1_1_view_1_1_iterator.php" target="_self">NRE::ECS::View&lt; All &gt;::Iterator</a></td><td class="desc">A basic view iterator </td></tr>
<tr id="row_10_"><td class="entry"><span style="width:0px;display:inline-block;">&#160;</span><span id="arr_10_" class="arrow" onclick="toggleFolder('10_')">&#9660;</span><span class="icona"><span class="icon">C</span></span><b>Singleton</b></td><td class="desc"></td></tr>
<tr id="row_10_0_" class="even"><td class="entry"><span style="width:32px;display:inline-block;">&#160;</span><span class="icona"><span class="icon">C</span></span><a class="el" href="class_n_r_e_1_1_e_c_s_1_1_entity_manager.php" target="_self">NRE::ECS::EntityManager</a></td><td class="desc">Manage <a class="el" href="class_n_r_e_1_1_e_c_s_1_1_entity.php" title="A basic entity. ">Entity</a> creation &amp; component assignment </td></tr>
<tr id="row_10_1_"><td class="entry"><span style="width:32px;display:inline-block;">&#160;</span><span class="icona"><span class="icon">C</span></span><a class="el" href="class_n_r_e_1_1_e_c_s_1_1_system_manager.php" target="_self">NRE::ECS::SystemManager</a></td><td class="desc">Manage system storing and update </td></tr>
<tr id="row_11_" class="even"><td class="entry"><span style="width:16px;display:inline-block;">&#160;</span><span class="icona"><span class="icon">C</span></span><a class="el" href="struct_test_component.php" target="_self">TestComponent</a></td><td class="desc"></td></tr>
<tr id="row_12_"><td class="entry"><span style="width:16px;display:inline-block;">&#160;</span><span class="icona"><span class="icon">C</span></span><a class="el" href="class_n_r_e_1_1_e_c_s_1_1_unpacking_view_1_1_unpacker.php" target="_self">NRE::ECS::UnpackingView&lt; Components &gt;::Unpacker</a></td><td class="desc">Used to unpack a tuple </td></tr>
<tr id="row_13_" class="even"><td class="entry"><span style="width:16px;display:inline-block;">&#160;</span><span class="icona"><span class="icon">C</span></span><a class="el" href="class_n_r_e_1_1_e_c_s_1_1_unpacking_view.php" target="_self">NRE::ECS::UnpackingView&lt; Components &gt;</a></td><td class="desc">A view iterator with unpacking manner </td></tr>
<tr id="row_14_"><td class="entry"><span style="width:0px;display:inline-block;">&#160;</span><span id="arr_14_" class="arrow" onclick="toggleFolder('14_')">&#9660;</span><span class="icona"><span class="icon">C</span></span><a class="el" href="class_n_r_e_1_1_e_c_s_1_1_view.php" target="_self">NRE::ECS::View&lt; All &gt;</a></td><td class="desc">Base view for advanced iterator </td></tr>
<tr id="row_14_0_" class="even"><td class="entry"><span style="width:32px;display:inline-block;">&#160;</span><span class="icona"><span class="icon">C</span></span><a class="el" href="class_n_r_e_1_1_e_c_s_1_1_typed_view.php" target="_self">NRE::ECS::TypedView&lt; All, Components &gt;</a></td><td class="desc">A typed view </td></tr>
</table>
</div><!-- directory -->
</div><!-- contents -->
<!-- HTML footer for doxygen 1.8.8-->
<!-- start footer part -->
</div>
</div>
</div>
</div>
</body>
</html>