/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:53 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libFusionComponentCheck.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libFusionComponentCheck.dylib/HSComponentCheckBase.h>

@class NSString;

@interface HSComponentCheckBaseband : HSComponentCheckBase {

	NSString* currentBBUniqueChipId;
	NSString* currentBBSerialNo;

}
-(id)querySN;
-(id)getBasebandInfo:(int)arg1 response:(id*)arg2 ;
@end

