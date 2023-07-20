# 测试 受保护页面 其实没卵用

比赛注意事项：忘了忘了忘了忘了 Energy！

口令：<input id="pwdin" type="password"></input>

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
<button>提交</button>

<div id="hide" style="display: none">
# 隐藏文本

隐藏文本
</div>