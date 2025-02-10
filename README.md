```markdown
# Libft (42 Common Core) 🚀

## 📌 概要
このプロジェクトでは、C言語で標準ライブラリの一部を独自に実装し、再利用可能なライブラリとして  
管理する `libft` を作成します。42のカリキュラムで使用するため、C言語の標準関数の仕組みを理解し、  
実装力を向上させることが目的です。

また、標準ライブラリ関数だけでなく、**単方向リスト（singly linked list）** の関数群も含まれています。

### **🔹 Makefile で実装されているコマンド**
- `make all` : **標準関数のみ** の `.c` ファイルをコンパイル
- `make re` : すべての `.o` ファイルと `.a` ファイルを削除し、 `make all` を再実行
- `make clean` : `.o` ファイルを削除
- `make fclean` : `.o` ファイルと `libft.a` を削除
- `make bonus` : ボーナス（リスト関数など）を含めたコンパイル

## 🔧 使用技術
- **言語:** C
- **ビルドツール:** Makefile（コンパイルを自動化）
- **バージョン管理:** Git / GitHub

## 🚀 インストール & 実行方法
1. リポジトリをクローン  
```bash
git clone https://github.com/Hen00af/libft.git
 make bonus


