<!doctype html>
<html lang="en">
<head>
    <meta charset="utf-8">
    <title><%= htmlWebpackPlugin.options.title %></title>
    <meta name="description" content="<%= htmlWebpackPlugin.options.description %>">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <meta name="theme-color" content="<%= htmlWebpackPlugin.options.color %>">
    <script src="https://aframe.io/releases/1.0.3/aframe.min.js"></script>
    <script src="https://cdn.rawgit.com/donmccurdy/aframe-physics-system/v4.0.1/dist/aframe-physics-system.min.js"></script>
    <script src="https://cdn.rawgit.com/donmccurdy/aframe-extras/v6.1.0/dist/aframe-extras.min.js"></script>
</head>
<body>
<!--[if IE]>
    <p>You are using an <strong>outdated</strong> browser. Please <a href="https://browsehappy.com/">upgrade your browser</a> to improve your experience and security.</p>
<![endif]-->
<a-scene background="color: #00b140" physics="debug: false">
    <a-assets>

    </a-assets>

    <!-- Environment. -->
    <a-entity rotation="-90 0 0" position="0 0 0" geometry="primitive: plane; width: 3; height: 3; segmentsHeight: 9; segmentsWidth: 9" 
    material="color: #c0c0c0; roughness: 1; metalness: 0;" nav-mesh foo>
    </a-entity>
    
    <!-- Player rig -->
    <a-entity id="rig" movement-controls="constrainToNavMesh: true; speed: 0.200;">
        <a-entity camera="far: 100;" position="0 1.6 0" 
        look-controls="pointerLockEnabled: true"></a-entity>
        <a-entity body="type: static; shape: sphere; sphereRadius: 0.04;" hand-controls="left" sphere-collider="objects: .throwable" grab></a-entity>
        <a-entity body="type: static; shape: sphere; sphereRadius: 0.04;" hand-controls="right" sphere-collider="objects: .throwable" grab></a-entity>
    </a-entity>
</a-scene>
</body>
</html>