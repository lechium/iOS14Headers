/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXColorScheme : NSObject
+(void)readFromXmlNode:(xmlNode*)arg1 toColorScheme:(id)arg2 ;
+(id)schemeColorEnumMap;
+(id)colorForScheme:(id)arg1 colorMap:(id)arg2 value:(id)arg3 ;
+(id)colorForScheme:(id)arg1 value:(id)arg2 ;
+(void)writeColorScheme:(id)arg1 to:(id)arg2 state:(id)arg3 ;
@end

