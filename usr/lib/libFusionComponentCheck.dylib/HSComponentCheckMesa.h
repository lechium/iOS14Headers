/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:53 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libFusionComponentCheck.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libFusionComponentCheck.dylib/HSComponentCheckBase.h>

@class NSString;

@interface HSComponentCheckMesa : HSComponentCheckBase {

	NSString* currentNvSn;
	NSString* currentBBUniqueChipId;
	NSString* currentBBSerialNo;

}
+(id)sharedSingleton;
-(id)init;
-(id)querySN;
-(id)getMesaSensorSerialNumber:(id)arg1 ;
-(id)getUniqueChipId:(id*)arg1 ;
-(id)getUniqueDeviceId:(id*)arg1 ;
@end

