/**
 * book头文件
 * 搁置
*/

#include <string>
class Book 
{
    private:
        //书名
        std::string bookName;
        //ISBN码
        std::string isbn;
        //价格
        double bookPrice;
        //售出册数
        int saleBookNumber;

    public:
        //构造方法
        //属性获取和修改的方法
        std::string isbn(Book&);
        //用>>和<<读、写Book类型的对象
        //用=将1个Book对象赋值给另1个Book对象
        //用+将2个相同isbn的Book对象的金额相加
        //使用+=将1个Book对象加到另一个Book对象上

};
/**
 * 调用isbn()获取Book中的isbn号码
 * @param Book类型的引用
 * @return isbn号码
*/
std::string Book::isbn(Book&)
{
    return "xxx";
}


