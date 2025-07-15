【此项目于2025年7月12起不限期停止维护】
# DYYY
用于调整某音 UI 的 Tweak  
仅在 34.0.0 版本中测试  
仅供学习交流  
开启方法：双指长按 功能自测
---
请勿用于商业用途
否则后果自负！
---
此项目由huami1314开源
仓库地址：https://github.com/huami1314/DYYY

Wtrwx二次改版
仓库地址：https://github.com/Wtrwx/DYYY/tree/main

#### 远程配置

DYYY 可以通过远程 JSON 文件批量应用设置。默认下载地址在 `DYYYConstants.h` 中的 `DYYY_REMOTE_CONFIG_URL`。配置文件示例：

```json
{
    "mode": "DYYY_MODE_PATCH",
    "data": {
        "ExampleKey": true
    }
}
```

`mode` 字段可选，支持 `DYYY_MODE_PATCH` 和 `DYYY_MODE_REPLACE`，若省略则默认为补丁模式 (`DYYY_MODE_PATCH`)。
