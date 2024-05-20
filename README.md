## 说明
1. `touchGFX`多语言例程；
2. `touchGFX`的默认语言为`GB`，且不能更改；
3. `touchGFX`显示特定汉字时，需要提供其`Unicode`编码；关于汉字和`Unicode`编码的转换，可参考[Unicode编码在线工具](https://tool.chinaz.com/tools/unicode.aspx)；
4. 本工程重点是在`touchGFX Designer`中对`UI`界面进行设计和设置；以及在[Screen1View.cpp](./gui/src/screen1_screen/Screen1View.cpp)中完成所需的业务逻辑代码；
5. `touchGFX`工程占用空间大，但是很多文件可以利用`touchGFX Designer`重新生成；不需要保存的文件详情可参考[gitignore文件](.gitignore)；