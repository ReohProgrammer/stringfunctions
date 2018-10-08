#include <gtest/gtest.h>
#include "string.h"

TEST(MytestCatgory,MyTEst1)
{
	char string[]="a";
	char len;
		
	len=my_strlen(string);
	EXPECT_EQ(1,len);
}
TEST(MytestCatgory,MyTEst2)
{
	char string[]="as";
	char len;
		
	len=my_strlen(string);
	EXPECT_EQ(2,len);
}
TEST(MytestCatgory,MyTEst3)
{
	char string[]="";
	char len;
		
	len=my_strlen(string);
	EXPECT_EQ(0,len);
}
TEST(MytestCatgory,MyTEst4)
{
	char string[]="hello";
	char len;
		
	len=my_strlen(string);
	EXPECT_EQ(5,len);
}
TEST(MytestCatgory,MyTEst5)
{
	char string[]="123456789";
	char len;
		
	len=my_strlen(string);
	EXPECT_EQ(9,len);
}
TEST(MytestCatgory,MyTEst6)
{
	char string[]="Helloworld";
	char upper;
	
	upper=str2upper(string);
	EXPECT_EQ(9,upper);
}
TEST(MytestCatgory,MyTEst7)
{
	char string[]="HeLLoWorld";
	char upper;
	
	upper=str2upper(string);
	EXPECT_EQ(6,upper);
}
TEST(MytestCatgory,MyTEst8)
{
	char string[]="helloworld";
	char upper;
	
	upper=str2upper(string);
	EXPECT_EQ(10,upper);
}
TEST(MytestCatgory,MyTEst9)
{
	char string[]="HELLOworld";
	char upper;
	
	upper=str2upper(string);
	EXPECT_EQ(5,upper);
}
TEST(MytestCatgory,MyTEst10)
{
	char string[]="HELLOWORLD";
	char upper;
	
	upper=str2upper(string);
	EXPECT_EQ(0,upper);
}
TEST(MytestCatgory,MyTEst11)
{
	char string[]="Good Morning";
	char lower;
	
	lower=str2lower(string);
	EXPECT_EQ(2,lower);
}
TEST(MytestCatgory,MyTEst12)
{
	char string[]="GOOD Morning";
	char lower;
	
	lower=str2lower(string);
	EXPECT_EQ(5,lower);
}
TEST(MytestCatgory,MyTEst13)
{
	char string[]="Good morning";
	char lower;
	
	lower=str2lower(string);
	EXPECT_EQ(1,lower);
}
TEST(MytestCatgory,MyTEst14)
{
	char string[]="good morning";
	char lower;
	
	lower=str2lower(string);
	EXPECT_EQ(0,lower);
}
TEST(MytestCatgory,MyTEst15)
{
	char string[]="QWERTYHGFqwedxsaVBNHGTRFDWDAGSHDJ";
	char lower;
	
	lower=str2lower(string);
	EXPECT_EQ(26,lower);
}
TEST(MytestCatgory,MyTEst16)
{
	char string[]="he110,w0r1d";
	char num;
	
	num=str_strip_numbers(string);
	EXPECT_EQ(6,num);
}
TEST(MytestCatgory,MyTEst17)
{
	char string[]="he11o,w0r1d";
	char num;
	
	num=str_strip_numbers(string);
	EXPECT_EQ(7,num);
}
TEST(MytestCatgory,MyTEst18)
{
	char string[]="he1lo,w0r1d";
	char num;
	
	num=str_strip_numbers(string);
	EXPECT_EQ(8,num);
}
TEST(MytestCatgory,MyTEst19)
{
	char string[]="hello,world";
	char num;
	
	num=str_strip_numbers(string);
	EXPECT_EQ(11,num);
}
TEST(MytestCatgory,MyTEst20)
{
	char string[]="12345678";
	char num;
	
	num=str_strip_numbers(string);
	EXPECT_EQ(0,num);
}
TEST(MytestCatgory,MyTEst21)
{
	char string_s[]="god bless you";
	char string_d[]="";

	
	mystrcpy(string_s,string_d);
	EXPECT_STREQ("god bless you",string_d);
}
TEST(MytestCatgory,MyTEst22)
{
	char string_s[]="holy holy";
	char string_d[]="";

	
	mystrcpy(string_s,string_d);
	EXPECT_STREQ("holy holy",string_d);
}
TEST(MytestCatgory,MyTEst23)
{
	char string_s[]="12345";
	char string_d[]="";

	
	mystrcpy(string_s,string_d);
	EXPECT_STREQ("12345",string_d);
}
TEST(MytestCatgory,MyTEst24)
{
	char string_s[]="";
	char string_d[]="";
	
	mystrcpy(string_s,string_d);
	EXPECT_STREQ("",string_d);
}
TEST(MytestCatgory,MyTEst25)
{
	char string_s[]="qw2ed";
	char string_d[]="";

	
	mystrcpy(string_s,string_d);
	EXPECT_STREQ("qw2ed",string_d);
}
TEST(MytestCatgory,MyTEst26)
{
	char string_s[]="Helsinki";
	char string_d[]="(Vaasa";
	char cmp;
	
	cmp=mystrcmp(string_s,string_d);
	EXPECT_EQ(1,cmp);
}
TEST(MytestCatgory,MyTEst27)
{
	char string_s[]="Helsinki";
	char string_d[]="Helsinki";
	char cmp;
	
	cmp=mystrcmp(string_s,string_d);
	EXPECT_EQ(0,cmp);
}
TEST(MytestCatgory,MyTEst28)
{
	char string_s[]="Helsinki";
	char string_d[]="He1sinki";
	char cmp;
	
	cmp=mystrcmp(string_s,string_d);
	EXPECT_EQ(1,cmp);
}
TEST(MytestCatgory,MyTEst29)
{
	char string_d[]="Helsinki";
	char string_s[]="Vaasa)";
	char cmp;
	
	cmp=mystrcmp(string_s,string_d);
	EXPECT_EQ(1,cmp);
}
TEST(MytestCatgory,MyTEst30)
{
	char string_s[]="Helsinki";
	char string_d[]="";
	char cmp;
	
	cmp=mystrcmp(string_s,string_d);
	EXPECT_EQ(1,cmp);
}
TEST(MytestCatgory,MyTEst31)
{
	char string[]="god bless you";
	char *dupl;
	
	dupl=strdupl(string);
	EXPECT_STREQ("god bless you",dupl);
}
TEST(MytestCatgory,MyTEst32)
{
	char string[]="holy holy";
	char *dupl;
	
	dupl=strdupl(string);
	EXPECT_STREQ("holy holy",dupl);
}
TEST(MytestCatgory,MyTEst33)
{
	char string[]="12345";
	char *dupl;
	
	dupl=strdupl(string);
	EXPECT_STREQ("12345",dupl);
}
TEST(MytestCatgory,MyTEst34)
{
	char string[]="";
	char *dupl;
	
	dupl=strdupl(string);
	EXPECT_STREQ("",dupl);
}
TEST(MytestCatgory,MyTEst35)
{
	char string[]="qw2ed";
	char *dupl;
	
	dupl=strdupl(string);
	EXPECT_STREQ("qw2ed",dupl);
}
