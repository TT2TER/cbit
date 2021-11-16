# code with vscode
## VScode配置流程


#### 211116更新
    * 下载vscode 勾选添加path和添加到右键菜单//方便
   ![图片](https://user-images.githubusercontent.com/93923763/141787540-641b1d28-5b4f-4a6a-9a37-f673fa068748.png)

    * 这一步完全摆烂了，找了个自动配置脚本 https://vscch3.vercel.app/ 连接上用网盘下载，然后跟着视频教程(在最后配置的时候用自定义，就修改如图C语言即可）
   ![图片](https://user-images.githubusercontent.com/93923763/141789579-3ef85007-1555-4b86-8aa7-618ad24e50b9.png)

    * 配置完成后打开vscode弹出的对话框如下图勾选
   ![图片](https://user-images.githubusercontent.com/93923763/141789913-b4cf19f2-8ad6-46d1-955a-f028d19bc163.png)

    * 右下角install（完全可以选择不安装） 
   ![图片](https://user-images.githubusercontent.com/93923763/141790092-a12c57ae-044a-42c5-8fe4-50f6a650e5d0.png)
    
    * 将这个.json中的C18改为C17即可
   ![图片](https://user-images.githubusercontent.com/93923763/141791134-a1db92c6-aa57-41c3-8e40-8779b7349de7.png)

    * 按F6看看有没有hello world
    * 关于Windowspowershell中如图乱码问题，
   ![图片](https://user-images.githubusercontent.com/93923763/141790471-54f55db8-05b0-4175-8891-5c3635ad9a2f.png)

   参见：[powershell乱码](#jump)

    * 其他的推荐插件 Chinese (Simplified) (简体中文) Language Pack for Visual Studio Code, code runner, bracket pair colorizer 2, indent-rainbow, one dark pro, power mode, vsc netease music 以上插件百度名称就有教程

## GitHub with VScode (Building)

    * Dev-sidecar 下载链接如下
    
   [Dev-sidecar下载链接](https://gitee.com/docmirror/dev-sidecar#%E4%BA%8C%E5%BF%AB%E9%80%9F%E5%BC%80%E5%A7%8B)

    * 在快速开始中下载后按照网站教程安装证书
[使用火狐浏览器无法打开github情况解决办法](#火狐浏览器github)

    * 从 https://git-scm.com/ 上下载64位的Git,一路默认;
    * 从GitHub官网上下载github desktop 用它来克隆初始化本地库

## powershell乱码 <span id="jump"></span> 
    * 使用 Powerline 进行样式化，并使用更纱黑体 可从清华镜像站下载:https://mirrors.tuna.tsinghua.edu.cn/github-release/be5invis/Sarasa-Gothic/
    * Sarasa Gothic / 更纱黑体：基于Noto Sans，全宽引号
      Sarasa UI / 更纱黑体 UI：基于Noto Sans窄引号
      Sarasa Mono T / 等距更纱黑体 T：基于Iosevka，有连字，全宽破折号
      Sarasa Mono / 等距更纱黑体：基于Iosevka，有连字，半宽破折号
      Sarasa Term：基于Iosevka，无连字，半宽破折号
      包含汉字字形：
      CL：传统字形
      SC：简体中文
      TC：台湾繁体中文
      J：日文
      K：韩文
      HC：香港繁体中文

   ![图片](https://user-images.githubusercontent.com/93923763/141820127-c5aa720f-e939-4279-81a8-d6555d270e8d.png)

   ![图片](https://user-images.githubusercontent.com/93923763/141820406-d253e9ed-262c-46db-bf4a-670e2bd062a6.png)


   ![图片](https://user-images.githubusercontent.com/93923763/141821501-be938d5a-b49a-40b5-a7b8-4c3efc7ca518.png)

    * 下载解压并且找到上图所示的ttf文件，安装

   ![图片](https://user-images.githubusercontent.com/93923763/141824661-c996e090-1e02-4b3a-9379-f76c8706ff98.png)

    * vscode中F6调出对应的powershell，属性，改字体

   ![图片](https://user-images.githubusercontent.com/93923763/141822039-3f0575e0-4df3-4994-ac4d-68e65a8cd2d0.png)

    * bingo


## 使用火狐浏览器无法打开github情况解决办法
   <span id="火狐浏览器github"></span>

    火狐浏览器：火狐浏览器不走系统的根证书，需要在选项中添加根证书
    1、火狐浏览器->选项->隐私与安全->证书->查看证书
    2、证书颁发机构->导入
    3、选择证书文件C:\Users(用户)\Administrator(你的账号)\.dev-sidecar\dev-sidecar.ca.crt（Mac或linux为~/.dev-sidecar目录）
    4、勾选信任由此证书颁发机构来标识网站，确定即可