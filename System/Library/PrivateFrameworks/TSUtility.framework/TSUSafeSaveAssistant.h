/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:40 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, OITSUTemporaryDirectory;

@interface TSUSafeSaveAssistant : NSObject {

	NSURL* _saveURL;
	OITSUTemporaryDirectory* _temporaryDirectory;
	NSURL* _writeURL;

}

@property (nonatomic,readonly) NSURL * writeURL;              //@synthesize writeURL=_writeURL - In the implementation block
+(BOOL)finishWritingToURL:(id)arg1 byMovingOrCopyingItemAtURL:(id)arg2 addingAttributes:(id)arg3 error:(id*)arg4 ;
+(void)writeAttributes:(id)arg1 toURL:(id)arg2 ;
-(id)init;
-(BOOL)endSaveWithSuccess:(BOOL)arg1 toURL:(id)arg2 addingAttributes:(id)arg3 error:(id*)arg4 ;
-(id)initForSavingToURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)endSaveWithSuccess:(BOOL)arg1 addingAttributes:(id)arg2 error:(id*)arg3 ;
-(NSURL *)writeURL;
@end
