/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAPFieldWrapper.h>

@class NSUUID;

@interface HAPUUIDWrapper : HAPFieldWrapper {

	NSUUID* _field;

}

@property (nonatomic,retain) NSUUID * field;              //@synthesize field=_field - In the implementation block
+(id)wrappertlv:(unsigned long long)arg1 name:(id)arg2 ;
-(NSUUID *)field;
-(void)setField:(NSUUID *)arg1 ;
@end

