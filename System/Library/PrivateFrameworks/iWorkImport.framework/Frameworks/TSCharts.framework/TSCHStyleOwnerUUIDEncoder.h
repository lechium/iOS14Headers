/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:24 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSCHStyleOwnerUUIDEncoder : NSObject {

	unsigned char mUUID[16];
	unsigned long long mIndex;

}
+(id)styleOwnerBaseUUIDString;
+(id)UUIDEncoder;
+(id)styleOwnerBaseUUID;
+(id)UUIDEncoderWithStyleOwnerPathType:(unsigned char)arg1 ;
-(void)encodeByte:(unsigned char)arg1 ;
-(void)encodeUInt64:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)hasSpaceToEncodeNumberOfBytes:(unsigned long long)arg1 ;
-(void)encodeUInt64FromNSUInteger:(unsigned long long)arg1 ;
-(id)encodedUUID;
@end
