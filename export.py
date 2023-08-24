# 将 md 批量导出 html
import pypandoc
import os

files = list()

def dirAll(pathname):
    if os.path.exists(pathname):
        filelist = os.listdir(pathname)
        for f in filelist:
            f = os.path.join(pathname, f)
            if os.path.isdir(f):
                dirAll(f)
            else:
                dirname = os.path.dirname(f)
                baseName = os.path.basename(f)
                if dirname.endswith(os.sep):
                    files.append(dirname+baseName)
                else:
                    files.append(dirname+os.sep+baseName)

# 导出
cssList = {
        "oniway": "114514.css"
}

def export():
    for item in files:
        item = str(item)
        # 文件名长度
        if len(item) <= 6: continue
        # 是否为 md 文件
        if (item[-6:] != ".md.md"): continue

        output = item[:-6] + ".html"

        # 获取应该使用的 css
        css = ""
        if item not in cssList:
            css = "/css/css.css"
        else:
            css = f"/css/{cssList[item]}"

        # pandoc -f markdown -t html index.md.md -o o.html -c "css.css" --toc -s
        cmd = f"pandoc -f markdown -t html -o {output} -c {css} --self-contained --toc --template ./.pandoc/template.html5 {item} >nul 2>nul"
        os.system(cmd)
        print(f"Converted {item} ===> {output} with command:\n  {cmd}")

if __name__ == "__main__":
    dirAll(os.curdir)
    export()
