/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IDSMessageToDelete : NSObject {

	unsigned _dataProtectionClass;
	NSString* _guid;
	NSString* _alternateGUID;

}

@property (assign) unsigned dataProtectionClass;                                   //@synthesize dataProtectionClass=_dataProtectionClass - In the implementation block
@property (setter=setGUID:,retain) NSString * guid;                                //@synthesize guid=_guid - In the implementation block
@property (setter=setAlternateGUID:,retain) NSString * alternateGUID;              //@synthesize alternateGUID=_alternateGUID - In the implementation block
-(void)setDataProtectionClass:(unsigned)arg1 ;
-(unsigned)dataProtectionClass;
-(void)setGUID:(id)arg1 ;
-(NSString *)guid;
-(NSString *)alternateGUID;
-(void)setAlternateGUID:(NSString *)arg1 ;
@end
