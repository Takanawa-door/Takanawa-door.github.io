[返回页面索引](/)<br>

# 测试 受保护页面 其实没卵用

比赛注意事项：忘了忘了忘了忘了 Energy！

口令：<input id="pwdin" type="password">

<script>
function showHideMsg()
{
  var pwd = document.getElementById("pwdin").value;
  if (pwd == "PWD")
  {
    document.getElementById("hide").style.display = "block";
  }
}
</script>
<button onclick="showHideMsg()">提交</button>

<p hidden>隐藏</p>

<div id="hide" style="display: none">
# 隐藏文本

隐藏文本
</div>