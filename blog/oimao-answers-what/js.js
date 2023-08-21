/* 显示块 */
function openEle(name, showType = "block")
{
  var item = document.getElementById(name);
  if (item.style.display != showType)
  {
    item.style.display = showType;
  }
  else
  {
    item.style.display = "none";
  }
}

/* 显示隐藏文字 */
function showHidden(name, color = "black")
{
  var item = document.getElementById(name);
  if (item.style.color == "transparent")
  {
    item.style.color = color;
  }
  else if (item.style.color == "black")
  {
    item.style.color = "transparent";
  }
}

/* 点击块并且实现相互切换 */
function clickChanger(id1, id2)
{
  var item1 = document.getElementById(id1);
  var item2 = document.getElementById(id2);

  item1.style.display = "none";
  item2.style.display = "block";
}

/* 判断密码显示元素实现 */
function pwdShowEle(sucessShow, failShow, pwd, inputT)
{
  try
  {
    var sucess = document.getElementById(sucessShow);
    var fail   = document.getElementById(failShow);
    var input  = document.getElementById(inputT).value;
    
    if (input == pwd)
    {
      sucess.style.display = "block";
      fail.style.display   = "none";
    }
    else
    {
      sucess.style.display = "none";
      fail.style.display   = "block";
    }
  }
  catch
  {

  }
}