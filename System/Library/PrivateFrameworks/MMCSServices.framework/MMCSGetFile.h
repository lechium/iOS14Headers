/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MMCSServices.framework/MMCSServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MMCSServices/MMCSSimpleFile.h>

@interface MMCSGetFile : MMCSSimpleFile {

	/*^block*/id _block;
	/*^block*/id _updateBlock;

}

@property (copy) id completionBlock;                  //@synthesize block=_block - In the implementation block
@property (copy) id progressUpdateBlock;              //@synthesize updateBlock=_updateBlock - In the implementation block
-(void)setCompletionBlock:(id)arg1 ;
-(id)completionBlock;
-(void)dealloc;
-(void)setProgress:(double)arg1 ;
-(void)setProgressUpdateBlock:(id)arg1 ;
-(id)progressUpdateBlock;
@end

