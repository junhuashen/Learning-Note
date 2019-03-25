#qml book 学习笔记
_参考链接_:[qmlbook](https://cwc1987.gitbooks.io/qmlbook-in-chinese)
>2019-3-25 21:45:00
## 10.多媒体(Multimedia)
  多媒体模仿需要准备措施：
```qml
    import QtMultimedia 5.0
```
### 10.1 多媒体播放
qml基础播放控件示例
```qml
import QtQuick 2.0 
import QtMultimedia 5.0 //使用多媒体
import QtSystemInfo 5.0 //使用系统信息

Item {
    width: 1024
    height: 600

    MediaPlayer {
        id: player
        source: "trailer_400p.ogg" //设置视频源
    }

    VideoOutput {
        anchors.fill: parent //填充父类
        source: player //设置显示视频源
    }

    Component.onCompleted: {
        player.play(); //加载后直接播放
    }

    ScreenSaver {   //禁止屏幕保护，防止视频因为屏幕保护中断
        screenSaverEnabled: false;
    }
}
```

对于MediaPlayer元素而言，使用volume（音量）、duration 和position可以用来创建进度条。例（基础播放器）：
```qml
Rectangle { //进度条rectangle
        id: progressBar

        anchors.left: parent.left
        anchors.right: parent.right
        anchors.bottom: parent.bottom
        anchors.margins: 100
        height: 30
        color: "lightGray"
        Rectangle { //进度滑块
            anchors.left: parent.left
            anchors.top: parent.top
            anchors.bottom: parent.bottom
            width: player.duration>0?parent.width*player.position/player.duration:0//设置进度条长度
            color: "darkGray"
        }
        MouseArea {
            anchors.fill: parent
            onClicked: { //添加点击事件
                if (player.seekable)
                    player.position = player.duration * mouse.x/width;
            }
        }
    }
Connections { //设置连接函数
        target: player
        onMediaObjectChanged: {
            if (player.mediaObject)
                player.mediaObject.notifyInterval = 50;//设置每个position之间的更新毫秒数
        }
    }
```
MediaPlay 中status用来监听播放器状态,使用autoPlay属性能够帮助自动播放一个视频，当设置视频为循环播放时，设置loops属性值为 MediaPlayer.Infinite ;status详细参数如下：

1. MediaPlayer.UnknownStatus-未知状态；
2. MediaPlayer.NoMedia-播放器没有指定媒体资源，播放停止；
3. MediaPlayer.Loading - 播放器正在加载媒体
4. MediaPlayer.Loaded - 媒体已经加载完毕，播放停止
5. MediaPlayer.Stalled - 加载媒体已经停止
6. MediaPlayer.Buffering - 媒体正在缓冲
7. MediaPlayer.Buffered - 媒体缓冲完成
8. MediaPlayer.EndOfMedia - 媒体播放完毕，播放停止
9. MediaPlayer.InvalidMedia - 无法播放媒体，播放停止
## 10.2声音效果(Sounds Effects)
qml中使用SoundEffect 来作为控制声音的主要控制元素，同时在MediaPlayer元素中通过设置SoundEffect.Infinite 来提供无限制重复播放
## 10.3 视频流（Video Streams）
可以使用Camera元素作为摄像机视频流的实时流媒体源;例：
```qml
import QtQuick 2.0
import QtMultimedia 5.0

Item {
    width: 1024
    height: 600

    VideoOutput {
        anchors.fill: parent
        source: camera
    }

    Camera {
        id: camera
    }
}
```
## 10.4 捕捉图像
qml中通过设置Camera的对象属性来捕捉图像，详见qml中[Camera文档](https://doc.qt.io/qt-5/qml-qtmultimedia-camera.html);