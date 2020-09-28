/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:13 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface SCROBrailleLineVirtualStatus : NSObject {

	int _alignment;
	NSData* _data;
	long long _length;
	char* _cells;

}

@property (nonatomic,retain) NSData * data;                 //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) int alignment;                 //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) long long length;              //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) char* cells;                   //@synthesize cells=_cells - In the implementation block
-(void)setLength:(long long)arg1 ;
-(char*)cells;
-(NSData *)data;
-(void)dealloc;
-(long long)length;
-(int)alignment;
-(void)setData:(NSData *)arg1 ;
-(void)setCells:(char*)arg1 ;
-(void)setAlignment:(int)arg1 ;
@end
