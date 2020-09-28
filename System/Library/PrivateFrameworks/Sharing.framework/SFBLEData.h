/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface SFBLEData : NSObject {

	NSData* _data;
	/*^block*/id _completion;

}

@property (nonatomic,copy) NSData * data;              //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) id completion;              //@synthesize completion=_completion - In the implementation block
-(NSData *)data;
-(void)setCompletion:(id)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(id)completion;
@end
