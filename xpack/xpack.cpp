// xpack.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "../packlib/pack.h"

#pragma comment (lib , "packlib.lib")

int _tmain(int argc, _TCHAR* argv[])
{
	zipFile2PackFile( L"d:\\testʿ��121��  (231)" , L"d:\\����1.pack");

	unsigned char *buf = NULL;
	DWORD dwlen = 0;
	bool ext = exZipFile( L"D:\\ʿ��� (2)\\����1.pack" , L"\\ͼ��1.png" , &buf , &dwlen );
	//exZipFile( "D:\\ui.pack" , "\\bookmark.htm" , &buf , &dwlen );

	if ( buf )
	{
		FILE *fp = fopen("d:\\test.png" , "wb");
		fwrite( buf , 1 , dwlen , fp );
		fclose(fp);
		freeBuf(buf);
	}
	return 0;
}

