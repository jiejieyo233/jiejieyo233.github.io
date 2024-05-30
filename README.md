# jiejieyo233.github.io
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <style>
        /* 设置整个网页的样式 */
        body {
            margin: 0;
            padding: 0;
            display: flex;
            flex-direction: row;
            height: 100vh; /* 100% 视口高度 */
        }

        /* 设置每个圆角矩形的基本样式 */
        .rectangle {
    flex: 1; /* 平均分配宽度 */
    border-radius: 20px;
    margin: 10px;
    padding: 20px;
    transition: all 0.5s ease; /* 添加过渡效果 */
    background-size: cover; /* 初始状态下覆盖整个区域 */
    background-repeat: no-repeat; /* 背景图片不重复 */
    background-position: center; /* 背景图片居中 */
    border: 2px solid black; /* 添加黑色边框 */
}

        /* 第一个矩形的背景图片 */
        .rectangle:first-child {
            background-image: url('3.jpg');
        }

        /* 第二个矩形的背景图片 */
        .rectangle:nth-child(2) {
            background-image: url('3.jpg');
        }

        /* 第三个矩形的背景图片 */
        .rectangle:last-child {
            background-image: url('3.jpg');
        }

        /* 鼠标悬停时的样式 */
        .rectangle:hover {
            flex: 2; /* 覆盖页面的2/3 */
        }

        /* 其他矩形的样式 */
        .rectangle:not(:hover) {
            flex: 0.5; /* 挤压其他矩形 */
        }
    </style>
</head>
<body>
    <!-- 第一个圆角矩形 -->
    <div class="rectangle">
        <h1>第一个区域</h1>
        <p>这是第一个圆角矩形的内容。</p>
    </div>

    <!-- 第二个圆角矩形 -->
    <div class="rectangle">
        <h1>第二个区域</h1>
        <p>这是第二个圆角矩形的内容。</p>
    </div>

    <!-- 第三个圆角矩形 -->
    <div class="rectangle">
        <h1>第三个区域</h1>
        <p>这是第三个圆角矩形的内容。</p>
    </div>
</body>
</html>
