/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable;

@interface _MSTempFileManager : NSObject {

	NSHashTable* _registry;

}

@property (nonatomic,readonly) NSHashTable * registry;              //@synthesize registry=_registry - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSHashTable *)registry;
-(id)writeTemporaryFileWithData:(id)arg1 type:(id)arg2 ;
@end
