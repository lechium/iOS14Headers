/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEFileHandle.h>

@class NSNumber, NSData;

@interface NEFlowDivertFileHandle : NEFileHandle {

	NSNumber* _controlUnit;
	NSData* _keyMaterial;

}

@property (readonly) NSNumber * controlUnit;              //@synthesize controlUnit=_controlUnit - In the implementation block
@property (readonly) NSData * keyMaterial;                //@synthesize keyMaterial=_keyMaterial - In the implementation block
-(id)initFromDictionary:(id)arg1 ;
-(id)getUnitForSocket:(int)arg1 ;
-(NSData *)keyMaterial;
-(NSNumber *)controlUnit;
-(unsigned long long)type;
-(id)initFlowDivertControlSocket;
-(id)initFlowDivertControlSocketDisableAppMap:(BOOL)arg1 ;
-(id)initFlowDivertDataSocket;
-(id)dictionary;
-(id)description;
@end
